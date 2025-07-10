# smart-belt

## 简介
一个基于 PSoC62 平台的低功耗穿戴设备，采集心率并通过 ZigBee 网络上传至上位机，用于远程健康监测。


## 功能结构
- 传感器采集（MAX30102）
- 数据通信（EFR32 ZigBee 模块）
- 上位机显示（网页展示/HMI Board）

## 软硬件环境
- PSoC 6 主控
- E180-ZG120B ZigBee 模块
- MAX30102 心率传感器
- RC522 NFC
- 瑞萨 HMI Board
- RT-Thread 操作系统
- Python + Flask + HTML 前端展示（上位机展示）
- RT-Thread + sensor 框架
- RT-Thread Studio 开发环境
- SquareLine_Studio
- vscode
	
