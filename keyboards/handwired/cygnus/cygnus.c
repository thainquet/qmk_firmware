/* Copyright 2019 MechMerlin
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
    // Key matrix to LED index
    // Left 1-20
    {18,     19,     NO_LED,      NO_LED,      NO_LED,      NO_LED},
    {17,     16,     15,      14,      13,      12},
    {6,     7,     8,      9,      10,     11},
    {5,      4,      3,       2,       1,      0},
                                    // Right 1-20
                                    {NO_LED, NO_LED, NO_LED, NO_LED, 39, 38},
                                    {32, 33, 34, 35, 36, 37},
                                    {31, 30, 29, 28, 27, 26},
                                    {20, 21, 22, 23, 24, 25},
}, {
    // LED index to physical position
    // Left 1-20
    {119,80},{105,80},{90,80},
    {105,64},{105,48},{105,32},{105,16},
    {90,16},{90,32},{90,48},{90,64},
    {75,64},{75,48},{75,32},{75,16},
    {60,16},{60,32},{60,48},{60,64},
    {45,64},
    // Right 1-20
    {134,80},{149,80},{164,80},
    {149,64},{149,48},{149,32},{149,16},
    {164,16},{164,32},{164,48},{164,64},
    {179,64},{179,48},{179,32},{179,16},
    {194,16},{194,32},{194,48},{194,64},
    {209,64},
}, {
  // LED Index to Flag
    4,4,4,4,4,
    4,4,4,4,4,
    4,4,4,4,4,
    4,4,4,4,4,
  // LED Index to Flag
    4,4,4,4,4,
    4,4,4,4,4,
    4,4,4,4,4,
    4,4,4,4,4,
} };
#endif
