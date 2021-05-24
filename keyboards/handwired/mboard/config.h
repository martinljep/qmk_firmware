/*
Copyright 2021 Martin

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

/* USB Device descriptor parameter */
#define VENDOR_ID    0xFAC3
#define PRODUCT_ID   0x0000
#define DEVICE_VER   0x0001
#define MANUFACTURER Martin
#define PRODUCT      mboard

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 3

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_COL_PINS { D0, D4, D7 }
#define MATRIX_ROW_PINS { D1, F4, F5 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/*Rotary encoder */
#define ENCODERS_PAD_A { B4 }
#define ENCODERS_PAD_B { B5 }

/* Bootmagic Lite key configuration */
//#define BOOTMAGIC_LITE_ROW 0
//#define BOOTMAGIC_LITE_COLUMN 0

/* QMK DFU config */
#define QMK_ESC_OUTPUT D0
#define QMK_ESC_INPUT D1
#define QMK_LED D5
#define QMK_SPEAKER C6
