import serial
import re
import threading
import time
from flask import Flask, render_template
from flask_socketio import SocketIO, emit

PORT = 'COM9'
BAUDRATE = 115200
pattern = re.compile(r'UID:\s*(\w+),\s*HR:(\d+)')

app = Flask(__name__)
socketio = SocketIO(app)

students = {}      # {uid: hr}
uid_list = []      # 记录所有唯一UID
timer_running = False
timer_seconds = 0

@app.route("/")
def index():
    return render_template("index_1.html")

def serial_thread():
    try:
        ser = serial.Serial(PORT, BAUDRATE, timeout=1)
    except Exception as e:
        print("serial error:", e)
        return
    while True:
        try:
            line = ser.readline().decode(errors='ignore').strip()
            match = pattern.search(line)
            if match:
                uid, hr = match.groups()
                students[uid] = hr
                if uid not in uid_list:
                    uid_list.append(uid)
                socketio.emit('update', {'uid': uid, 'hr': hr, 'uids': uid_list})
        except Exception as e:
            print("serial error:", e)

def timer_thread():
    global timer_running, timer_seconds
    while True:
        if timer_running:
            timer_seconds += 1
            socketio.emit('timer', {'seconds': timer_seconds})
        time.sleep(1)

@socketio.on('connect')
def handle_connect():
    # 新连接时推送所有学生当前数据
    for uid, hr in students.items():
        emit('update', {'uid': uid, 'hr': hr, 'uids': uid_list})
    emit('timer', {'seconds': timer_seconds})

@socketio.on('timer_control')
def handle_timer_control(data):
    global timer_running, timer_seconds, students, uid_list
    action = data.get('action')
    if action == 'start':
        timer_running = True
    elif action == 'pause':
        timer_running = False
    elif action == 'reset':
        timer_running = False
        timer_seconds = 0
        students.clear()
        uid_list.clear()
        emit('reset', {}, broadcast=True)
        # 重置后立即同步清空
        for uid, hr in students.items():
            emit('update', {'uid': uid, 'hr': hr, 'uids': uid_list})
    socketio.emit('timer', {'seconds': timer_seconds})

if __name__ == "__main__":
    threading.Thread(target=serial_thread, daemon=True).start()
    threading.Thread(target=timer_thread, daemon=True).start()
    socketio.run(app, host="0.0.0.0", port=5001)