# MCU name
MCU = atmega32u4

#Bootloader
BOOTLOADER = caterina

#YES
LTO_ENABLE = yes #增加刷写时间，压缩固件体积
EXTRAKEY_ENABLE = yes #可调节系统键
NKRO_ENABLE = yes #全键无冲
#ENCODER_ENABLE = yes #编码器
#OLED_ENABLE = yes #OLED屏幕
RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = ws2812
VIA_ENABLE = yes

#NO
BOOTMAGIC_ENABLE = no #按住某键进入BOOTLOADER模式
RGBLIGHT_ENABLE = no  # disable WS2812 RGB underlight.
CONSOLE_ENABLE = no #控制台
COMMAND_ENABLE = no #调试用
MOUSEKEY_ENABLE = no #模拟鼠标
SLEEP_LED_ENABLE = no #RGB休眠
MIDI_ENABLE = no #MIDI键盘
UNICODE_ENABLE = no 
BLUETOOTH_ENABLE = no #蓝牙
AUDIO_ENABLE = no #键盘声音
BACKLIGHT_ENABLE = no #键盘背光