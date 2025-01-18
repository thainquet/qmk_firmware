// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬
     * │ 7 │ 8 │ 9 │
     * ├───┼───┼───┼
     * │ 4 │ 5 │ 6 │
     * ├───┼───┼───┼
     * │ 1 │ 2 │ 3 │
     * ├───┼───┼───┼
     */
    [0] = LAYOUT(
        RGB_TOG,   KC_P8,   KC_P9,
        RGB_MOD,   KC_P5,   KC_P6,
        KC_P1,   KC_P2,   KC_P3
    )
};

#ifdef OLED_ENABLE

oled_rotation_t oled_init_kb(oled_rotation_t rotation) {
    return OLED_ROTATION_180;
}

bool oled_task_user(void) {
    oled_write_P(PSTR("Default\n"), false);
    return false;
}
#endif
