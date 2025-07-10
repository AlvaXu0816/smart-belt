# -*- coding: utf-8 -*-
"""
Zigbee Heart-Rate Dashboard  |  python -m pip install streamlit pyserial pandas
"""
import serial, threading, queue, time
import pandas as pd
import streamlit as st

# ===== 修改成你的串口号 / 波特率 =====
SERIAL_PORT = "COM15"
BAUD_RATE   = 115200
# ===================================

# 后台线程：读串口→丢进队列
q = queue.Queue()
def read_serial():
    ser = serial.Serial(SERIAL_PORT, BAUD_RATE, timeout=1)
    while True:
        line = ser.readline().decode(errors="ignore").strip()
        if "," in line:
            uid, hr = line.split(",", 1)
            if hr.isdigit():
                q.put((uid, int(hr)))
        time.sleep(0.05)
threading.Thread(target=read_serial, daemon=True).start()

# ===== Streamlit 页面 =====
st.set_page_config(page_title="Zigbee HR Dashboard", layout="wide")
st.title("🏃‍♂️ Zigbee Heart-Rate Dashboard")

table_ph   = st.empty()
chart_ph   = st.empty()
history_df = pd.DataFrame(columns=["UID", "HR", "Timestamp"])

while True:
    while not q.empty():                       # 把新数据取出来
        uid, hr = q.get()
        history_df = pd.concat(
            [history_df,
             pd.DataFrame({"UID":[uid],
                           "HR":[hr],
                           "Timestamp":[pd.Timestamp.now()]})],
            ignore_index=True
        )
        history_df = history_df.tail(3000)     # 最多留 3000 行

    # ---- 最新心率表 ----
    latest = (history_df.sort_values("Timestamp")
              .groupby("UID", as_index=False)
              .last()
              .sort_values("UID"))
    table_ph.table(latest.style.format({"HR":"{:d} bpm"}))

    # ---- 最近 60 s 曲线 ----
    recent = history_df[
        history_df["Timestamp"] >
        pd.Timestamp.now() - pd.Timedelta(seconds=60)
    ]
    if not recent.empty:
        chart_data = recent.pivot(index="Timestamp",
                                  columns="UID",
                                  values="HR")
        chart_ph.line_chart(chart_data)

    time.sleep(0.5)
