/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2025-07-09     lenovo       the first version
 */
#include <rtthread.h>
#include <rtdevice.h>
#include <string.h>
#include "mfrc522.h"

#define UID_MAX_LEN 16
volatile char current_uid_str[UID_MAX_LEN] = {0};
rt_mutex_t uid_mutex = RT_NULL;

void set_current_uid(const char *uid)
{
    if (uid_mutex) rt_mutex_take(uid_mutex, RT_WAITING_FOREVER);
    rt_strncpy((char*)current_uid_str, uid, UID_MAX_LEN-1);
    if (uid_mutex) rt_mutex_release(uid_mutex);
}

void get_current_uid(char *out_uid)
{
    if (uid_mutex) rt_mutex_take(uid_mutex, RT_WAITING_FOREVER);
    rt_strncpy(out_uid, (const char*)current_uid_str, UID_MAX_LEN-1);
    if (uid_mutex) rt_mutex_release(uid_mutex);
}

static void nfc_uid_thread_entry(void *parameter)
{
    MFRC522(MFRC522_SS_PIN, MFRC522_RST_PIN);
    PCD_Init();
    rt_thread_mdelay(15);

    rt_kprintf("请刷卡...\n");

    while (1)
    {
        if (PICC_IsNewCardPresent() && PICC_ReadCardSerial())
        {
            Uid *uid = get_uid();
            char uid_str[UID_MAX_LEN] = {0};
            for (int i = 0; i < uid->size; i++)
                rt_snprintf(uid_str + i*2, 3, "%02X", uid->uidByte[i]);
            set_current_uid(uid_str);
            rt_kprintf("刷卡成功，UID:%s 已绑定！\n", uid_str);
            break; // 只刷一次
        }
        rt_thread_mdelay(200);
    }
}

static int nfc_uid_app_init(void)
{
    uid_mutex = rt_mutex_create("uidmtx", RT_IPC_FLAG_FIFO);
    rt_thread_t nfc_thread = rt_thread_create("nfc_uid",
                                              nfc_uid_thread_entry,
                                              RT_NULL, 2048, 8, 10);
    if (nfc_thread)
        rt_thread_startup(nfc_thread);
    return 0;
}
INIT_APP_EXPORT(nfc_uid_app_init);
