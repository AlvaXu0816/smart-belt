/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2025-06-29     lenovo       the first version
 */
/*
#include <rtthread.h>
#include <rtdevice.h>
#include <sensor.h>
#include "drv_gpio.h"
#include "max30102.h"
//#include "uart_config.h"

#define DBG_LEVEL   DBG_LOG
#include <rtdbg.h>
#define LOG_TAG         "max30102.hr"
//#define MAX30102_ADDR  0x57
#define MAX30102_MQ_SIZE 64  // 消息队列相关定义

// 消息队列和缓冲区
struct rt_messagequeue max30102_mq;
static char mq_pool[MAX30102_MQ_SIZE * sizeof(max30102_data_t)];

static rt_thread_t max30102_thread = RT_NULL;
//static rt_uint8_t hr_stack[1024];  // 自己定义栈

static void max30102_thread_entry(void *parameter)
{
    rt_device_t dev = RT_NULL;
    struct rt_sensor_data data;
    rt_size_t res;

    //打开设备
    dev = rt_device_find("hr_max30102");
    if (dev == RT_NULL) {
        LOG_E("Find max30102 error");
        return ;
    }

    if (rt_device_open(dev, RT_DEVICE_FLAG_RDONLY) != RT_EOK){
        rt_kprintf("open device failed!\n");
        return;
    }

    //设置采样频率
    rt_device_control(dev, RT_SENSOR_CTRL_SET_ODR, (void *)1000);
    if (rt_device_control(dev, RT_SENSOR_CTRL_SET_ODR,
                          (void *)25) != RT_EOK)
        LOG_W("set ODR fail");


    //延时10s给max30102启动时间否则返回心率值是0
    //rt_thread_mdelay(10000);
    rt_thread_mdelay(5000);

    while(1) {
        res = rt_device_read(dev, 0, &data, sizeof(data));
        LOG_D("heart rate: %d", data.data.hr);

        if (res == sizeof(data)) {
            //LOG_D("liheart rate: %d", data.data.hr);    //终端打印，调试时使用

            // 采集成功，组包并推送到消息队列
            max30102_data_t mq_data;
            mq_data.hr   = data.data.hr;
            //mq_data.spo2 = data.data.spo2;
            // 如果队列满，丢弃
        if (rt_mq_send(&max30102_mq, &mq_data, sizeof(mq_data)) != RT_EOK)
            {
                LOG_W("max30102 mq full, data lost!");
            }
        }
        else{
            rt_kprintf("read data failed!size is %d\n", res);
            //rt_device_close(dev);
            //return;
            rt_thread_mdelay(100);      // 100 ms 后重试
            continue;
        }
        rt_thread_mdelay(1000);
    }

    rt_device_close(dev);
}

//读取max30102数据
int max30102_sensor_init(void)
{
    rt_err_t result;

    result = rt_mq_init(&max30102_mq, "m30102mq", mq_pool, sizeof(max30102_data_t),  // 初始化消息队列
               sizeof(mq_pool), RT_IPC_FLAG_FIFO);

    if (result != RT_EOK){
        rt_kprintf("rt_mq_init ERR\n");
        return -1;
    }

    max30102_thread = rt_thread_create("max30102",              // 创建采样线程
                                       max30102_thread_entry,
                                       RT_NULL,
                                       2048, 9, 10);
    if (max30102_thread != RT_NULL)
        rt_thread_startup(max30102_thread);

    else
        return -RT_ERROR;

    return 0;
}

INIT_APP_EXPORT(max30102_sensor_init);
//MSH_CMD_EXPORT(max30102_sensor_init, send);
*/

/*
#include <rtthread.h>
#include <rtdevice.h>
#include <sensor.h>
#include "drv_gpio.h"
#include "max30102.h"

#define DBG_LEVEL   DBG_LOG
#include <rtdbg.h>
#define LOG_TAG         "max30102.hr"
#define MAX30102_MQ_SIZE 64  // 消息队列容量
#define UART_DEV "uart5"

// 消息队列和缓冲区
struct rt_messagequeue max30102_mq;
static char mq_pool[MAX30102_MQ_SIZE * sizeof(max30102_data_t)];

static rt_thread_t max30102_thread = RT_NULL;
static rt_thread_t zigbee_thread = RT_NULL;

// 采集线程
static void max30102_thread_entry(void *parameter)
{
    rt_device_t dev = RT_NULL;
    struct rt_sensor_data data;
    max30102_data_t mq_data;
    rt_size_t res;

    // 查找设备
    //dev = rt_device_find("hr_max30102");
    dev = rt_device_find("hr_max30");
    if (dev == RT_NULL) {
        LOG_E("Find max30102 error");
        return;
    }
    if (rt_device_open(dev, RT_DEVICE_FLAG_RDONLY) != RT_EOK) {
        LOG_E("open device failed!");
        return;
    }

    // 设置采样频率
    if (rt_device_control(dev, RT_SENSOR_CTRL_SET_ODR, (void *)25) != RT_EOK)
        LOG_W("set ODR fail");

    // 延时给max30102启动
    rt_thread_mdelay(5000);

    while (1)
    {
        res = rt_device_read(dev, 0, &data, sizeof(data));
        if (res == sizeof(data))
        {
            mq_data.hr = data.data.hr;
            // mq_data.spo2 = data.data.spo2; // 如需采集血氧

            // 非0心率才推送
            if (mq_data.hr != 0)
            {
                if (rt_mq_send(&max30102_mq, &mq_data, sizeof(max30102_data_t)) != RT_EOK)
                {
                    LOG_W("max30102 mq full, data lost!");
                }
                //LOG_D("heart rate: %d", mq_data.hr);
                //rt_kprintf("[push] heart rate: %d\n", mq_data.hr);  //test
            }
            else
            {
                //LOG_W("heart rate zero, not sent");
            }
        }
        else
        {
            LOG_W("read data failed!size is %d", res);
            rt_thread_mdelay(100); // 重试
        }
        rt_thread_mdelay(1000); // 采样周期
    }

    rt_device_close(dev);
}

// Zigbee发送线程
static void zigbee_thread_entry(void *parameter)
{
    rt_device_t zig_dev = rt_device_find(UART_DEV);
    RT_ASSERT(zig_dev);                       // 找不到直接崩溃

    // 推荐先用最保守的方式打开：WRONLY 阻塞，先别加 INT_TX
    rt_err_t ret = rt_device_open(zig_dev, RT_DEVICE_OFLAG_WRONLY);
    rt_kprintf("uart5 open ret = %d\n", ret); // ret 应为 0

    if (ret != RT_EOK)
        return;

    //测试发送
    const char preamble[] = "start\r\n";
    int wrote = rt_device_write(zig_dev, 0, preamble, strlen(preamble));
    rt_kprintf("preamble wrote = %d\n", wrote);
    rt_thread_mdelay(50);

    max30102_data_t mq_data;
    while (1)
    {
        if (rt_mq_recv(&max30102_mq, &mq_data, sizeof(max30102_data_t), RT_WAITING_FOREVER) == RT_EOK)
        {
            // 这里集成你的 Zigbee 发送逻辑
            // zigbee_send(mq_data.hr);
            //rt_kprintf("[Zigbee] send HR: %d\n", mq_data.hr);
            rt_kprintf("[pop] heart rate: %d\n", mq_data.hr);   //test
            char buf[32];
            rt_snprintf(buf, sizeof(buf), "HR:%d\r\n", mq_data.hr);
            rt_device_write(zig_dev, 0, buf, rt_strlen(buf)); // 通过uart5发出去
        }
    }
}

// 初始化
int max30102_sensor_init(void)
{
    rt_err_t result;

    result = rt_mq_init(&max30102_mq, "m30102mq", &mq_pool[0],
                        sizeof(max30102_data_t), sizeof(mq_pool), RT_IPC_FLAG_FIFO);
    if (result != RT_EOK)
    {
        LOG_E("rt_mq_init ERR");
        return -1;
    }

    max30102_thread = rt_thread_create("max30102_queue",
                                       max30102_thread_entry,
                                       RT_NULL,
                                       2048, 7, 10);
    if (max30102_thread != RT_NULL)
        rt_thread_startup(max30102_thread);
    else
        return -RT_ERROR;

    zigbee_thread = rt_thread_create("zigbee",
                                     zigbee_thread_entry,
                                     RT_NULL,
                                     1024, 7, 10);
    if (zigbee_thread != RT_NULL)
        rt_thread_startup(zigbee_thread);
    else
        return -RT_ERROR;

    return 0;
}
INIT_APP_EXPORT(max30102_sensor_init);
*/

#include <rtthread.h>
#include <rtdevice.h>
#include <sensor.h>
#include "drv_gpio.h"
#include "max30102.h"

#define DBG_LEVEL   DBG_LOG
#include <rtdbg.h>
#define LOG_TAG         "max30102.hr"
#define UART_DEV "uart5"

#define UID_MAX_LEN 16
extern void get_current_uid(char *out_uid); // 线程安全获取当前UID字符串

// 采集并直接通过UART5发送线程
static void max30102_thread_entry(void *parameter)
{
    rt_device_t dev = RT_NULL;
    rt_device_t zig_dev = rt_device_find(UART_DEV);
    RT_ASSERT(zig_dev);

    if (rt_device_open(zig_dev, RT_DEVICE_OFLAG_WRONLY) != RT_EOK)
    {
        LOG_E("open uart5 failed!");
        return;
    }

    struct rt_sensor_data data;
    max30102_data_t mq_data;
    rt_size_t res;

    dev = rt_device_find("hr_max30");
    if (dev == RT_NULL) {
        LOG_E("Find max30102 error");
        return;
    }
    if (rt_device_open(dev, RT_DEVICE_FLAG_RDONLY) != RT_EOK) {
        LOG_E("open device failed!");
        return;
    }

    if (rt_device_control(dev, RT_SENSOR_CTRL_SET_ODR, (void *)25) != RT_EOK)
        LOG_W("set ODR fail");

    rt_thread_mdelay(5000); // 延时给max30102启动

    // 测试发送，确认zigbee串口可用
    const char preamble[] = "start\r\n";
    int wrote = rt_device_write(zig_dev, 0, preamble, rt_strlen(preamble));
    rt_kprintf("preamble wrote = %d\n", wrote);

    // 测试用固定UID
    //const char test_uid[] = "XIAOHONG";
    //const char test_uid[] = "XIAOMING";

    while (1)
    {
        res = rt_device_read(dev, 0, &data, sizeof(data));
        if (res == sizeof(data))
        {
            mq_data.hr = data.data.hr;
            // mq_data.spo2 = data.data.spo2; // 如需采集血氧

            // 非0心率才推送
            if (mq_data.hr != 0)
            {
                /*char buf[32];
                rt_snprintf(buf, sizeof(buf), "UID:%s,HR:%d\r\n", test_uid, mq_data.hr);
                rt_device_write(zig_dev, 0, buf, rt_strlen(buf)); // 直接通过uart5发出去*/
                //rt_kprintf("[direct] heart rate: %d\n", mq_data.hr);
                //改变部分
                char uid[UID_MAX_LEN] = {0};
                get_current_uid(uid);
                char buf[48]; // 建议稍微开大一些
                rt_snprintf(buf, sizeof(buf), "UID:%s,HR:%d\r\n", uid, mq_data.hr);
                rt_device_write(zig_dev, 0, buf, rt_strlen(buf));
            }
            else
            {
                //LOG_W("heart rate zero, not sent");
            }
        }
        else
        {
            LOG_W("read data failed!size is %d", res);
            rt_thread_mdelay(100); // 重试
        }
        rt_thread_mdelay(1000); // 采样周期
    }

    rt_device_close(dev);
    rt_device_close(zig_dev);
}

// 初始化
int max30102_sensor_init(void)
{
    rt_thread_t max30102_thread = RT_NULL;

    max30102_thread = rt_thread_create("max30102_uart5",
                                       max30102_thread_entry,
                                       RT_NULL,
                                       2048, 7, 10);
    if (max30102_thread != RT_NULL)
        rt_thread_startup(max30102_thread);
    else
        return -RT_ERROR;

    return 0;
}
INIT_APP_EXPORT(max30102_sensor_init);
