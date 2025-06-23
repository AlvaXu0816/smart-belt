# smart-belt

## 简介
一个低功耗穿戴设备，采集心率并通过 ZigBee 网络上传至上位机，用于远程健康监测。

## 功能结构
- 传感器采集（MAX30102）
- 数据通信（EFR32 ZigBee 模块）
- 上位机显示（HMI Board / 网页展示）
- 数据导出（CSV / JSON）

## 软硬件环境
- RT-Thread + sensor 框架
- PSoC 6 主控
- E180-ZG120B ZigBee 模块
- RT-Thread Studio 开发环境

## 当前进度（2025.06）
- [x] MAX30102 驱动调通
- [x] Zigbee转接板焊接
- [ ] ZigBee 串口接通
- [ ] 数据传输
- [ ] 上位机显示联调
