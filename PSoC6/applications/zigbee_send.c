/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2025-07-04     lenovo       the first version
 */
/*
#include <rtthread.h>
#include <at.h>
#include "max30102.h"

#define UART_DEV "uart5"

void zigbee_send_thread(void *param)
{
    //rt_thread_mdelay(10000);

    //rt_device_t zig_dev = rt_device_find(UART_DEV);
    //if (zig_dev == RT_NULL)
    //{
    //    rt_kprintf("cannot find %s!\n", UART_DEV);
    //    return;
    //}
    //rt_device_open(zig_dev, RT_DEVICE_OFLAG_RDWR | RT_DEVICE_FLAG_INT_TX);

    rt_device_t zig_dev = rt_device_find(UART_DEV);
    RT_ASSERT(zig_dev);                       // 找不到直接崩溃

    // ❶ 推荐先用最保守的方式打开：WRONLY 阻塞，先别加 INT_TX
    rt_err_t ret = rt_device_open(zig_dev, RT_DEVICE_OFLAG_WRONLY);
    rt_kprintf("uart5 open ret = %d\n", ret); // ret 应为 0

    if (ret != RT_EOK)
        return;                               // 打开失败直接退出

    //测试发送
    const char preamble[] = "start\r\n";
    int wrote = rt_device_write(zig_dev, 0, preamble, strlen(preamble));
    rt_kprintf("preamble wrote = %d\n", wrote);
    rt_thread_mdelay(50);

    max30102_data_t data;
    char send_buf[64];

    //at_response_t resp = at_create_resp(128, 2, 4000);

    //at_exec_cmd(resp, "AT+SEND\r\n");

    while (1)
    {
        if (rt_mq_recv(&max30102_mq, &data, sizeof(data), RT_WAITING_FOREVER) == RT_EOK)
        {
            //调试代码
            int len = rt_snprintf(send_buf, sizeof(send_buf), "%lu\r\n", data.hr);
            int wrote = rt_device_write(zig_dev, 0, send_buf, len);
            rt_kprintf("[ZG_TX] hr=%lu len=%d wrote=%d\n", data.hr, len, wrote);

            //char send_buf[64];
            //rt_snprintf(send_buf, sizeof(send_buf), "AT+SEND=%lu\r\n", data.hr);  //不能一起发，sscom测试不行
            rt_snprintf(send_buf, sizeof(send_buf), "%lu\r\n", data.hr);
            //rt_device_write(UART_DEV, 0, send_buf, strlen(send_buf));
            rt_device_write(zig_dev, 0, send_buf, strlen(send_buf));
            //at_exec_cmd(resp, send_buf);
        }
    }
    //at_delete_resp(resp);
}

int zigbee_send_init(void)
{
    rt_thread_t tid = rt_thread_create("zg_tx",
                                        zigbee_send_thread,
                                        RT_NULL,
                                        2048, 8, 10);
    if (tid) rt_thread_startup(tid);
    return 0;
}

INIT_APP_EXPORT(zigbee_send_init);
*/
