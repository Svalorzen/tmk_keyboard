#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP(
         ESC,         F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,       \
         GRV,    1,    2,    3,    4,    5,    6,    7,    8,    9,    0, \
         TAB,          Q,    W,    E,    R,    T,    Y,    U,    I,    O, \
        CAPS,          A,    S,    D,    F,    G,    H,    J,    K,    L, \
        LSFT,          Z,    X,    C,    V,    B,    N,    M, COMM,  DOT, \
        LCTL, LGUI, LALT,                    SPC,                   RALT, \
                                                                          \
          F9,  F10,  F11,  F12, SLCK, PSCR, PAUS,                         \
        MINS,  EQL,       BSPC,  INS, HOME, PGUP, NLCK, PSLS, PAST, PMNS, \
           P, LBRC, RBRC,        DEL,  END, PGDN,   P7,   P8,   P9,       \
        SCLN, QUOT,    T,  ENT,         UP,         P4,   P5,   P6, PPLS, \
        SLSH, BSLS,       RSFT,         UP,         P1,   P2,   P3,       \
        RGUI,       MENU, RCTL, LEFT, DOWN, RGHT,   P0,       PDOT, PENT
    ),

    /* 0: qwerty
     * ,----------------------------------------------------------------------------------------.
     * |Esc|   | F1| F2| F3| F4| F5| F6| F7| F8|   || F9|F10|F11|F12|ScL|Prt|Pau|   |   |   |   |
     * |----------------------------------------------------------------------------------------|
     * | ` | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 || - | = |   |BkS|Ins|Hom|PUp|NmL| / | * | - |
     * |----------------------------------------------------------------------------------------|
     * |Tab|   | Q | W | E | R | T | Y | U | I | O || P | [ | ] |   |Del|End|PDw| 7 | 8 | 9 |   |
     * |----------------------------------------------------------------------------------------|
     * |CpL|   | A | S | D | F | G | H | J | K | L || ; | ' | & |Ent|   |MUp|   | 4 | 5 | 6 | + |
     * |----------------------------------------------------------------------------------------|
     * |Shf|   | Z | X | C | V | B | N | M | < | > || / | \ |   |Shf|   | Up|   | 1 | 2 | 3 |   |
     * |----------------------------------------------------------------------------------------|
     * |Ctr|Sup|Alt|   |   |   |Spc|   |   |   |Alt||Sup|   |Hyp|Ctr|Lft|Dwn|Rht| 0 |   | . |Ent|
     * `----------------------------------------------------------------------------------------'
     */
};
const action_t PROGMEM fn_actions[] = {
    /* Poker Layout */
    //[0] = ACTION_LAYER_MOMENTARY(6),  // to Fn overlay
    //[1] = ACTION_LAYER_TOGGLE(4),     // toggle arrow overlay
    //[2] = ACTION_LAYER_TOGGLE(5),     // toggle Esc overlay
    //[3] = ACTION_MODS_KEY(MOD_RCTL|MOD_RSFT, KC_ESC), // Task(RControl,RShift+Esc)
    //[4] = ACTION_LAYER_MOMENTARY(7),  // to Layout selector
    //[5] = ACTION_DEFAULT_LAYER_SET(0),  // set qwerty layout
    //[6] = ACTION_DEFAULT_LAYER_SET(1),  // set colemak layout
    //[7] = ACTION_DEFAULT_LAYER_SET(2),  // set dvorak layout
    //[8] = ACTION_DEFAULT_LAYER_SET(3),  // set workman layout
};
