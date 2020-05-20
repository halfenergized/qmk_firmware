/*
Copyright 2020 halfenergized

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

#define VENDOR_ID 0x4753
#define PRODUCT_ID 0x0040
#define DEVICE_VER 0x0001
#define MANUFACTURER halfenergized
#define PRODUCT GSH40
#define DESCRIPTION A QMK-powered 40% keyboard

#define MATRIX_ROWS 4
#define MATRIX_COLS 12

#define MATRIX_ROW_PINS { B3, B1, B0, E6 }
#define MATRIX_COL_PINS { F0, F1, F7, C7, C6, B5, B4, D7, D6, D4, D5, D3 }

#define DIODE_DIRECTION COL2ROW

#define BACKLIGHT_PIN B6
#define BACKLIGHT_LEVELS 6

#define RGB_DI_PIN F6
#ifdef RGB_DI_PIN
    #define RGBLED_NUM 12
    #define RGBLIGHT_HUE_STEP 8
    #define RGBLIGHT_SAT_STEP 8
    #define RGBLIGHT_VAL_STEP 8
    #define RGBLIGHT_LIMIT_VAL 255
    #define RGBLIGHT_SLEEP
    #define RGBLIGHT_ANIMATIONS
#endif
