/**
 * @file wifi_connect.h
 * @author cangyu (sky.kirto@qq.com)
 * @brief 
 * @version 0.1
 * @date 2026-03-12
 * 
 * @copyright Copyright (c) 2026, Wireless-Tag. All rights reserved.
 * 
 */

#ifndef __WIFI_CONNECT_H__
#define __WIFI_CONNECT_H__

/* ==================== [Includes] ========================================== */

#include "esp_err.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ==================== [Defines] =========================================== */

/* ==================== [Typedefs] ========================================== */

/* ==================== [Global Prototypes] ================================= */

esp_err_t wifi_connect_init(void);
void wifi_connect_start(void);

/* ==================== [Macros] ============================================ */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif // __WIFI_CONNECT_H__
