/* Copyright 2020 marksard
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

#pragma once

// place overrides here

#ifdef TAPPING_TERM
#undef TAPPING_TERM
#endif
#define TAPPING_TERM 225

#define AUTO_SHIFT_TIMEOUT 300

#ifdef RGBLED_NUM
#undef RGBLED_NUM
#endif
#define RGBLED_NUM 6

#define OLED_TIMEOUT 120000
#define OLED_BRIGHTNESS 120

// If you use the HashTwenty(alpha), please enable USE_HASHTWENTY
// #define ANGELINA_KEYMAP

// If you plug in the USB on the right side, please enable MASTER_RIGHT
// #define RHYMESTONE_RIGHTHAND

// #define OLED_FONT_H "keyboards/treadstone48/common/glcdfont.c"
