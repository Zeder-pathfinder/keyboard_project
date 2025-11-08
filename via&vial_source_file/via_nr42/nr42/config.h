#pragma once
//#include "config_common.h"

#define LAYER_STATE_8BIT/*键盘可切换的层*/

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/* key matrix pins */
#define MATRIX_ROW_PINS { F0, F1, F4, F5, F6 }
#define MATRIX_COL_PINS { C7, C6, D7, D6, D5, D4, D3, D2, D1, D0, B7, B6, B5, B4, B3 }
#define WS2812_DI_PIN B0
#define RGB_MATRIX_LED_COUNT 68
#define RGB_DISABLE_WHEN_USB_SUSPENDED true
#define LED_CAPS_LOCK_PIN E6
#define LED_PIN_ON_STATE 0

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL/*二极管的朝向*/

/*RGB lights*/
#define DRIVER_LED_TOTAL 69/*total RGB*/
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 42/*MAX brightness*/
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES/*按键反馈*/
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5/*去抖*/

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
