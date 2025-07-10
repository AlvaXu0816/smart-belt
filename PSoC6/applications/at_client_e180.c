/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2025-06-27     lenovo       the first version
 */
//这段代码是 RT-Thread AT 组件的一个AT客户端测试样例，主要用于通过 shell 命令与 AT 设备进行命令交互和响应解析
//用来调试和解析 AT 设备的 IP、MAC 等信息，非常适合用来验证你的 AT 组件移植和设备硬件通信是否正常。
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include <rtthread.h>
#include <rtdevice.h>
#include "sensor.h"
#include "packages/max30102-latest/inc/max30102.h"
#include <at.h>

#define LOG_TAG              "at.sample"
#include <at_log.h>

#define AT_CLIENT_DEVICE "uart5"  // 这里填你连接 E180 的串口名
#define AT_CLIENT_RECV_BUFF_LEN 1024
#define N 6                       //解析响应内容行数

// 自动配网函数
int auto_join(at_response_t resp)
{
    int result = 0;

    rt_kprintf("开始自动重新配网...\n");

    //result = at_exec_cmd(resp, "AT+RESET\r\n");
    result = at_exec_cmd(resp, "+AT\r\n");
    if (result != RT_EOK) return -1;
    rt_thread_mdelay(1000);

    // 发送透传数据 55 03 00 16 16，实际命令视你的AT库API而定
    // 若需要二进制透传请用at_client的RAW发送接口
    result = at_exec_cmd(resp, "AT+SEND=55,03,00,16,16\r\n");   //如果无法成功配网就是这块儿AT指令少了某步（艾玛说中了）（好像少的不是这里ioi）
    rt_thread_mdelay(1000);
    if (result != RT_EOK) return -2;

    result = at_exec_cmd(resp, "AT+DEVTYPE=3\r\n");
    rt_thread_mdelay(1000);
    if (result != RT_EOK) return -3;

    result = at_exec_cmd(resp, "AT+RESET\r\n");
    if (result != RT_EOK) return -4;
    rt_thread_mdelay(2000);

    result = at_exec_cmd(resp, "AT+JOIN\r\n");
    if (result != RT_EOK) return -5;
    rt_thread_mdelay(1000); // 稍等

    result = at_exec_cmd(resp, "AT+INFO?\r\n");
    rt_thread_mdelay(1000);
    if (result != RT_EOK) return -6;

    // 判断配网是否成功
    const char *buf = resp->buf;
    if (strstr(buf, "PANID=") != RT_NULL && strstr(buf, "ADDR=") != RT_NULL)
    {
        rt_kprintf("设备已成功自动配网！\n");
        return 0;
    }
    else
    {
        rt_kprintf("设备自动配网失败\n");
        return -10;
    }
}

int at_client_e180(int argc, char **argv)
{
    at_response_t resp = RT_NULL;
    int result;

    if (argc != 1)
    {
        LOG_E("at_client_test  - AT client send commands to AT server.");
        return -1;
    }

    resp = at_create_resp(256, 0, rt_tick_from_millisecond(5000));
    if (resp == RT_NULL)
    {
        LOG_E("No memory for response structure!");
        return -2;
    }
    result = at_exec_cmd(resp, "+AT\r\n");
    rt_thread_mdelay(3000);
    result = at_exec_cmd(resp, "AT+INFO?\r\n");
    rt_thread_mdelay(1000);

    if (result != RT_EOK)
    {
        rt_kprintf("AT命令发送失败或无响应\n");   //这就卡住了
        rt_kprintf("%d",result);
    }
    else if (strstr(resp->buf, "NO NET") != RT_NULL)
    {
        rt_kprintf("设备未配网\n");
    }
    else if (strstr(resp->buf, "PANID=") != RT_NULL && strstr(resp->buf, "ADDR=") != RT_NULL)
    {
        rt_kprintf("设备已成功配网\n");
    }
    else
    {
        rt_kprintf("状态未知或读取失败\n");

        // 尝试自动重新配网
        int join_result = auto_join(resp);
        if (join_result == 0)
        {
            rt_kprintf("自动配网成功，已重新联网！\n");
        }
        else
        {
            rt_kprintf("自动配网失败，请检查硬件或网络。\n");
        }
    }

    // Print response line buffer 遍历响应的每一行，逐行输出到日志。
    {
        const char *line_buffer = RT_NULL;

        LOG_D("Response buffer");

        for(rt_size_t line_num = 1; line_num <= resp->line_counts; line_num++)
        {
            if((line_buffer = at_resp_get_line(resp, line_num)) != RT_NULL)
            {
                LOG_D("line %d buffer : %s", line_num, line_buffer);
            }
            else
            {
                LOG_E("Parse line buffer error!");
            }
        }
    }

    //解析响应内容
    {
        const char *line = at_resp_get_line(resp, N);
        if (line)
        {
            char *value = strchr(line, '=');
            if (!value) value = strchr(line, ':');
            if (value)
            {
                value++; // 跳过'='或':'
                // 去除前后空格（如有必要）
                while (*value == ' ') value++;
                LOG_D("Value: %s", value);
            }
            else
            {
                LOG_E("No separator found in line: %s", line);
            }
        }
    }
__exit:
    if(resp)
    {
        at_delete_resp(resp);
    }

    return result;
}

int at_client_e180_init(int argc, char **argv)
{
    at_client_init(AT_CLIENT_DEVICE, AT_CLIENT_RECV_BUFF_LEN);
    rt_kprintf("AT client inited with %s\n", AT_CLIENT_DEVICE);

    return RT_EOK;
}
#ifdef FINSH_USING_MSH
#include <finsh.h>
MSH_CMD_EXPORT(at_client_e180, AT client send cmd and get response);
//INIT_APP_EXPORT(at_client_e180);

//MSH_CMD_EXPORT_ALIAS(at_client_e180_init, at_client_init, initialize AT client);

MSH_CMD_EXPORT(at_client_e180_init, initialize AT client);
//INIT_APP_EXPORT(at_client_e180_init);
#endif

//只是一个 shell 命令工具（用来调试 Zigbee 模块的 AT 指令是否收发正常）
