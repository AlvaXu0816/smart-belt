import serial
import re
import os
import time

# 串口参数根据你的实际情况修改
PORT = 'COM9'
BAUDRATE = 115200

# 用于保存学生心率
students = {}

# 匹配UID和HR
pattern = re.compile(r'UID:\s*(\w+),\s*HR:(\d+)')

def clear_screen():
    os.system('cls' if os.name == 'nt' else 'clear')

def print_students():
    print(f"{'UID':<20} {'HR':<5}")
    print('-' * 30)
    for uid, hr in students.items():
        print(f"{uid:<20} {hr:<5}")

# 打开串口
ser = serial.Serial(PORT, BAUDRATE, timeout=1)

try:
    while True:
        line = ser.readline().decode(errors='ignore').strip()
        match = pattern.search(line)
        if match:
            uid, hr = match.groups()
            students[uid] = hr
            clear_screen()
            print_students()
        # 控制刷新频率，防止屏幕闪烁太快
        time.sleep(0.1)
except KeyboardInterrupt:
    pass
finally:
    ser.close()