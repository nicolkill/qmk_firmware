MOUSEKEY_ENABLE = yes       # Mouse keys

RGBLIGHT_ENABLE = yes        # Enable keyboard RGB underglow
OLED_DRIVER_ENABLE = yes
LTO_ENABLE = yes
VIA_ENABLE = yes
BOOTMAGIC_ENABLE = lite

# If you want to change the display of OLED, you need to change here
SRC +=  ./common/oled_helper.c \
