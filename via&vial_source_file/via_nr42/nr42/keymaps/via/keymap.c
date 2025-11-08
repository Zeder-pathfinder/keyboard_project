//编译环境QMK MSYS的编译语句：-kb是keyboard，-km是keymap
//qmk compile -kb netrunner42/netrunner42 -km via
//qmk setup -H G:/QMK/vial -b vial vial-kb/vial-qmk
#include "netrunner42.h"
//#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0]=LAYOUT(
		KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, RGB_TOG,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, RGB_MODE_FORWARD,
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, RGB_MODE_REVERSE,
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_END,
		KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, MO(1), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),

	[1]=LAYOUT(
        QK_REBOOT, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, RGB_TOG,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_MODE_FORWARD,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_MODE_REVERSE,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};//定义了键盘的按键数组

/*RGB MATRIX*/
#ifdef RGB_MATRIX_ENABLE /*总开关打开了就编译这些RGB矩阵的代码*/
led_config_t g_led_config = {{
//    {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
//	{15,16,17,18,19,20,21,22,23,24,25,26,27,28,29},
//	{30,31,32,33,34,35,36,37,38,39,40,41,42,43},
//	{44,45,46,47,48,49,50,51,52,53,54,55,56,57},
//	{58,59,60,61,62,63,64,65,66,67}/*矩阵位置*/
	{14,13,12,11,10,9,8,7,6,5,4,3,2,1,0},
	{29,28,27,26,25,24,23,22,21,20,19,18,17,16,15},
	{43,42,41,40,39,38,37,36,35,34,33,32,NO_LED,31,30},
	{57,56,55,54,53,52,51,50,49,48,47,NO_LED,46,45,44},
	{67,66,65,NO_LED,NO_LED,64,NO_LED,NO_LED,NO_LED,63,62,61,60,59,58}/*矩阵位置*/
},{
    /*物理位置：每个按键使用{x,y}的形式写在括号内，第一个位置写0号灯顺序写入*/
    /*算法：{x=224/(NUMBER_OF_COLS-1)*COL_POSITION,y=64/(NUMBER_OF_ROWS-1)*ROW_POSITION}，
     * 可以不使用整数算不规则位置的按键*/
    /*使用python写一个算出这些坐标的函数：
    from decimal import Decimal
    NUM_OF_COLS=14
    NUM_OF_ROWS=4
    while True:
        ROW_POSITION=float(input("row行:"))
        COL_POSITION=float(input("col列:"))
        col=224/(NUM_OF_COLS-1)*COL_POSITION
        row=64/(NUM_OF_ROWS-1)*ROW_POSITION
        x=Decimal(col).quantize(Decimal("1."), rounding = "ROUND_HALF_UP")
        y=Decimal(row).quantize(Decimal("1."), rounding = "ROUND_HALF_UP")
        print(f"{{{x},{y}}}")*/
	{241,0},  {224,0},  {207,0},  {190,0},  {172,0},  {155,0},  {138,0},  {121,0},  {103,0},  {86,0},  {69,0},  {52,0},  {34,0},  {17,0},  {0,0},
    {241,21}, {224,21}, {207,21}, {190,21}, {172,21}, {155,21}, {138,21}, {121,21}, {103,21}, {86,21}, {69,21}, {52,21}, {34,21}, {17,21}, {0,21},
    {241,43}, {224,43}, {207,43}, {190,43}, {172,43}, {155,43}, {138,43}, {121,43}, {103,43}, {86,43}, {69,43}, {52,43},          {17,43}, {0,43},
    {241,64}, {224,64}, {207,64}, {190,64}, {172,64}, {155,64}, {138,64}, {121,64}, {103,64}, {86,64}, {69,64},          {34,64}, {17,64}, {0,64},
    {241,85}, {224,85}, {207,85},                     {155,85},                               {86,85}, {69,85}, {52,85}, {34,85}, {17,85}, {0,85}
},{
	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,1,1
}};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

#endif