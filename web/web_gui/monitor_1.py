# -*- coding: utf-8 -*-
"""
Zigbee Heart-Rate Dashboard
依赖：
    python -m pip install streamlit pyserial pandas streamlit-autorefresh
运行：
    python -m streamlit run monitor.py
"""
import re, serial, threading, queue, time, pandas as pd, streamlit as st
from streamlit_autorefresh import st_autorefresh

# ======== 根据实际修改 ========
SERIAL_PORT = "COM9"      # 你的协调器端口
BAUD_RATE   = 115200       # 你的波特率
HR_SCALE    = 1            # 若 1035 代表 103.5，则写 10
# ==============================

# ---------------- 后台串口线程 ----------------
q = queue.Queue()
regex = re.compile(r"UID:\s*(\S+)\s*,\s*HR:\s*(\d+)", re.IGNORECASE)

def read_serial(port, baud, q):
    try:
        ser = serial.Serial(port, baud, timeout=1)
    except serial.SerialException as e:
        q.put(("ERR", f"串口打开失败: {e}"))
        return
    while True:
        line = ser.readline().decode(errors="ignore").strip()
        m = regex.search(line)
        if m:
            uid, hr = m.groups()
            q.put((uid, int(int(hr) / HR_SCALE)))
        time.sleep(0.02)

if "serial_started" not in st.session_state:
    threading.Thread(target=read_serial,
                     args=(SERIAL_PORT, BAUD_RATE, q),
                     daemon=True).start()
    st.session_state.serial_started = True

# ---------------- Streamlit 页面 ----------------
st.set_page_config(page_title="Zigbee HR Dashboard", layout="wide")
st.title("🏃‍♂️ Zigbee Heart-Rate Dashboard")
st.caption(f"监听端口：**{SERIAL_PORT} @ {BAUD_RATE}**")

st_autorefresh(interval=1000, key="refresh")   # 每 1 s 重跑一次脚本

# 历史数据存 session_state，防止每刷新就丢失
if "history" not in st.session_state:
    st.session_state.history = pd.DataFrame(columns=["UID", "HR", "TS"])

# 把队列里所有新数据搬进 DataFrame
while not q.empty():
    uid, hr = q.get()
    if uid == "ERR":                 # 如果是错误信息
        st.error(hr)                 # hr 此时是错误字符串
        continue
    st.session_state.history.loc[len(st.session_state.history)] = [
        uid, hr, pd.Timestamp.now()
    ]
# 只留最近 3000 行，防止内存爆
st.session_state.history = st.session_state.history.tail(3000)

# ---------- 最新心率表 ----------
latest = (st.session_state.history
          .sort_values("TS")
          .groupby("UID", as_index=False)
          .last()
          .sort_values("UID"))

st.subheader("实时心率")
if latest.empty:
    st.info("等待串口数据…")
else:
    st.table(latest.style.format({"HR": "{:d} bpm"}))

# ---------- 最近 60 s 曲线 ----------
recent = st.session_state.history[
    st.session_state.history["TS"] >
    pd.Timestamp.now() - pd.Timedelta(seconds=60)
]
if not recent.empty:
    pivot = recent.pivot(index="TS", columns="UID", values="HR")
    st.subheader("最近 60 秒心率曲线")
    st.line_chart(pivot)
