/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

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
#ifndef KEYMAP_COMMON_H
#define KEYMAP_COMMON_H

#include <stdint.h>
#include <stdbool.h>
#include "keycode.h"
#include "action.h"
#include "action_macro.h"
#include "report.h"
#include "host.h"
#include "print.h"
#include "debug.h"
#include "keymap.h"


/* GH60 keymap definition macro
 * K2C, K31 and  K3C are extra keys for ISO
 */
#define KEYMAP( \
    K00,      K02, K03, K04, K05, K06, K07, K08, K09,      \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, \
    K20,      K22, K23, K24, K25, K26, K27, K28, K29, K2A, \
    K30,      K32, K33, K34, K35, K36, K37, K38, K39, K3A, \
    K40,      K42, K43, K44, K45, K46, K47, K48, K49, K4A, \
    K50, K51, K52,                K56,                K5A, \
                                                           \
    K60, K61, K62, K63, K64, K65, K66,                     \
    K70, K71,      K73, K74, K75, K76, K77, K78, K79, K7A, \
    K80, K81, K82,      K84, K85, K86, K87, K88, K89,      \
    K90, K91, K92, K93,      K95,      K97, K98, K99, K9A, \
    KA0, KA1,      KA3,      KA5,      KA7, KA8, KA9,      \
    KB0,      KB2, KB3, KB4, KB5, KB6, KB7,      KB9, KBA  \
) { \
    { KC_##K00, KC_NO   , KC_##K02, KC_##K03, KC_##K04, KC_##K05, KC_##K06, KC_##K07, KC_##K08, KC_##K09, KC_NO    }, \
    { KC_##K10, KC_##K11, KC_##K12, KC_##K13, KC_##K14, KC_##K15, KC_##K16, KC_##K17, KC_##K18, KC_##K19, KC_##K1A }, \
    { KC_##K20, KC_NO   , KC_##K22, KC_##K23, KC_##K24, KC_##K25, KC_##K26, KC_##K27, KC_##K28, KC_##K29, KC_##K2A }, \
    { KC_##K30, KC_NO   , KC_##K32, KC_##K33, KC_##K34, KC_##K35, KC_##K36, KC_##K37, KC_##K38, KC_##K39, KC_##K3A }, \
    { KC_##K40, KC_NO   , KC_##K42, KC_##K43, KC_##K44, KC_##K45, KC_##K46, KC_##K47, KC_##K48, KC_##K49, KC_##K4A }, \
    { KC_##K50, KC_##K51, KC_##K52, KC_NO   , KC_NO   , KC_NO   , KC_##K56, KC_NO   , KC_NO,    KC_NO   , KC_##K5A }, \
                                                                                                                      \
    { KC_##K60, KC_##K61, KC_##K62, KC_##K63, KC_##K64, KC_##K65, KC_##K66, KC_NO   , KC_NO   , KC_NO   , KC_NO    }, \
    { KC_##K70, KC_##K71, KC_NO   , KC_##K73, KC_##K74, KC_##K75, KC_##K76, KC_##K77, KC_##K78, KC_##K79, KC_##K7A }, \
    { KC_##K80, KC_##K81, KC_##K82, KC_NO   , KC_##K84, KC_##K85, KC_##K86, KC_##K87, KC_##K88, KC_##K89, KC_NO    }, \
    { KC_##K90, KC_##K91, KC_##K92, KC_##K93, KC_NO   , KC_##K95, KC_NO   , KC_##K97, KC_##K98, KC_##K99, KC_##K9A }, \
    { KC_##KA0, KC_##KA1, KC_NO   , KC_##KA3, KC_NO   , KC_##KA5, KC_NO   , KC_##KA7, KC_##KA8, KC_##KA9, KC_NO    }, \
    { KC_##KB0, KC_NO   , KC_##KB2, KC_##KB3, KC_##KB4, KC_##KB5, KC_##KB6, KC_##KB7, KC_NO,    KC_##KB9, KC_##KBA }  \
}

/* ANSI variant. No extra keys for ISO */
#define KEYMAP_ANSI( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,      K2D, \
    K30, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,           K3D, \
    K40, K41, K42,           K45,                     K4A, K4B, K4C, K4D  \
) KEYMAP( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, NO,  K2D, \
    K30, NO,  K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, NO,  K3D, \
    K40, K41, K42,           K45,                NO,  K4A, K4B, K4C, K4D  \
)


#define KEYMAP_HHKB( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K49,\
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,      K2D, \
    K30, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,      K3D, K3C, \
    K40, K41, K42,           K45,                     K4A, K4B, K4C, K4D  \
) KEYMAP( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, NO,  K2D, \
    K30, NO,  K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, \
    K40, K41, K42,           K45,                K49, K4A, K4B, K4C, K4D  \
)

#endif
