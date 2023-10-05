// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#include "keys_de.h"
#define MIRYOKU_ALPHAS_QWERTZ
#define MIRYOKU_TAP_QWERTZ
#define MIRYOKU_EXTRA_QWERTZ
#define MIRYOKU_CLIPBOARD_WIN
#define MIRYOKU_KLUDGE_MOUSEKEYSPR

#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_CORNE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp EXCL  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
XXX  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
               K32  K33  K34       K35  K36  K37

#if defined (MIRYOKU_KEYBOARD_CORNE)

#define MIRYOKU_LAYER_BASE \
&kp DE_Q,             &kp DE_W,             &kp DE_E,             &kp DE_R,             &kp DE_T,             &kp DE_Z,             &kp DE_U,             &kp DE_I,             &kp DE_O,             &kp DE_P,             \
U_MT(LGUI, DE_A),     U_MT(LALT, DE_S),     U_MT(LCTRL, DE_D),    U_MT(LSHFT, DE_F),    &kp DE_G,             &kp DE_H,             U_MT(LSHFT, DE_J),    U_MT(LCTRL, DE_K),    U_MT(LALT, DE_L),     U_MT(LGUI, HASH),   \
U_LT(U_BUTTON, DE_Y), U_MT(RALT, DE_X),     &kp DE_C,             &kp DE_V,             &kp DE_B,             &kp DE_N,             &kp DE_M,             &kp DE_COMMA,         U_MT(RALT, DE_DOT),   U_LT(U_BUTTON, DE_MINUS),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, DE_SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#endif

#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTPINKIE 2 3
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTINNERINDEX 3 4
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTINNERINDEX 7 8
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTPINKIE 8 9

#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTPINKIE 26 27
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTINNERINDEX 27 28
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTINNERINDEX 31 32
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTPINKIE 32 33

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 37 38
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 39 40
