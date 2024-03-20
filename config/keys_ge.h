/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */
#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ^ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ß │ ´ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Z │ U │ I │ O │ P │ Ü │ + │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ö │ Ä │ # │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Y │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define GE_CIRCUMFLEX GRAVE // ^ (dead)
#define GE_N1 N1             // 1
#define GE_N2 N2             // 2
#define GE_N3 N3             // 3
#define GE_N4 N4             // 4
#define GE_N5 N5             // 5
#define GE_N6 N6             // 6
#define GE_N7 N7             // 7
#define GE_N8 N8             // 8
#define GE_N9 N9             // 9
#define GE_N0 N0             // 0
#define GE_ESZETT MINUS      // ß
#define GE_ACUTE EQUAL       // ´
// Row 2
#define GE_Q Q   // Q
#define GE_W W   // W
#define GE_E E   // E
#define GE_R R   // R
#define GE_T T   // T
#define GE_Z Z   // Z
#define GE_U U   // U
#define GE_I I   // I
#define GE_O O   // O
#define GE_P P   // P
#define GE_UU LBKT // Ü
#define GE_PLUS PLUS // +
// Row 3
#define GE_A A    // A
#define GE_S S    // S
#define GE_D D    // D
#define GE_F F    // F
#define GE_G G    // G
#define GE_H H    // H
#define GE_J J    // J
#define GE_K K    // K
#define GE_L L    // L
#define GE_OE SEMI // Ö
#define GE_AE QUOTE // Ä
#define GE_HASH HASH // #
// Row 4
#define GE_LT NUBS     // <
#define GE_Y Y         // Y
#define GE_X X         // X
#define GE_C C         // C
#define GE_V V         // V
#define GE_B B         // B
#define GE_N N         // N
#define GE_M M         // M
#define GE_COMMA COMMA // ,
#define GE_DOT DOT     // .
#define GE_MINUS MINUS // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ° │ ! │ " │ # │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ * │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ ' │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1 Shifted
#define GE_DEGREE DEGREE // °
#define GE_EXCL EXCLAM // !
#define GE_DQT DQUOT // "
#define GE_HASH HASH // #
#define GE_DLR DOLLAR // $
#define GE_PRCNT PRCNT // %
#define GE_AMPS AMPERSAND // &
#define GE_FSLH SLASH // /
#define GE_LPAR LPAREN // (
#define GE_RPAR RPAREN // )
#define GE_EQUAL EQUAL // =
#define GE_QMARK QUESTION // ?
#define GE_GRAVE GRAVE // `
// Row 3 Shifted
#define GE_ASTRK ASTERISK // *
#define GE_SQT SQUOT // '
// Row 4 Shifted
#define GE_GT GRTR // >
#define GE_SCOLON SCOLON // ;
#define GE_COLON COLON // :
#define GE_UNDER UNDERSCORE // _


/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ „ │ ¡ │ “ │ ¶ │ ¢ │ [ │ ] │ | │ { │ } │ ≠ │ ¿ │ ' │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │   │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │ @ │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1 AltGr
#define GE_LOWQUO LOWQUO // „
#define GE_IEXCL IEXCL // ¡
#define GE_OPENQUO OPENQUO // “
#define GE_PARA PARA // ¶
#define GE_CENT CENT // ¢
#define GE_LBKT LBKT // [
#define GE_RBKT RBKT // ]
#define GE_PIPE PIPE // |
#define GE_LCBR LCBR // {
#define GE_RCBR RCBR // }
#define GE_NEQ NEQ // ≠
#define GE_IQUES IQUES // ¿
#define GE_SQT SQUOT // '
// Row 2 (only AltGr)
#define GE_AT AT // @
