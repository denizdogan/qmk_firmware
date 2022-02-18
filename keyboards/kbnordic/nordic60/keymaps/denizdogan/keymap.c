#include QMK_KEYBOARD_H

#include "layout.c"

void keyboard_post_init_user(void) {
  rgblight_enable_noeeprom();
  rgblight_sethsv_noeeprom(0, 0, 55);
  rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
}

