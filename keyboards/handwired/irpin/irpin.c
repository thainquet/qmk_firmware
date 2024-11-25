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
    // Left 1-31
    {30,      23,     22,     15,      14,      7,      6},
    {29,      24,     21,     16,      13,      8,      5},
    {28,      25,     20,     17,      12,      9,      4},
    {27,      26,     19,     18,      11,      10,     3},
    {NO_LED,  NO_LED, NO_LED, NO_LED,  2,       1,      0},
                                    // Right 1-31
                                    {37, 38, 45, 46, 53, 54, 61},
                                    {36, 39, 44, 47, 52, 55, 60},
                                    {35, 40, 43, 48, 51, 56, 59},
                                    {34, 41, 42, 49, 50, 57, 58},
                                    {31, 32, 33, NO_LED, NO_LED, NO_LED, NO_LED},
}, {
    // LED index to physical position
    // Left 1-31
    {119,80},{105,80},{90,80},
    {105,64},{105,48},{105,32},{105,16},
    {90,16},{90,32},{90,48},{90,64},
    {75,64},{75,48},{75,32},{75,16},
    {60,16},{60,32},{60,48},{60,64},
    {45,64},{45,48},{45,32},{45,16},
    {30,16},{30,32},{30,48},{30,64},
    {15,64},{15,48},{15,32},{15,16},
    // Right 1-31
    {134,80},{149,80},{164,80},
    {149,64},{149,48},{149,32},{149,16},
    {164,16},{164,32},{164,48},{164,64},
    {179,64},{179,48},{179,32},{179,16},
    {194,16},{194,32},{194,48},{194,64},
    {209,64},{209,48},{209,32},{209,16},
    {224,16},{224,32},{224,48},{224,64},
    {239,64},{239,48},{239,32},{239,16},
}, {
  // LED Index to Flag
    4,4,4,
    4,4,4,4,
    4,4,4,4,
    4,4,4,4,
    4,4,4,4,
    4,4,4,4,
    4,4,4,4,
    4,4,4,4,
  // LED Index to Flag
    4,4,4,
    4,4,4,4,
    4,4,4,4,
    4,4,4,4,
    4,4,4,4,
    4,4,4,4,
    4,4,4,4,
    4,4,4,4
} };
#endif
