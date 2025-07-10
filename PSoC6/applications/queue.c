/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2025-07-06     lenovo       the first version
 */
/*#include "max30102.h"

#define MAX30102_MQ_SIZE 64

// 消息队列和缓冲区
struct rt_messagequeue max30102_mq;
static char mq_pool[MAX30102_MQ_SIZE * sizeof(max30102_data_t)];

static int queue_init(void)
{
    rt_err_t r = rt_mq_init(&max30102_mq,       控制块
                            "mq",             内核对象名字，≤8 字符
                            mq_pool,            缓冲池
                            sizeof(max30102_data_t), 单条大小
                            sizeof(mq_pool),    缓冲池总大小
                            RT_IPC_FLAG_FIFO);
    RT_ASSERT(r == RT_EOK);
    return 0;
}

INIT_PREV_EXPORT(queue_init);*/
