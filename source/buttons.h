/*
*   buttons.h
*       by Aurora Wright
*   Copyright (c) 2016 All Rights Reserved
*/

#pragma once

#include "types.h"

#define HID_PAD         (*(vu32 *)0x10146000 ^ 0xFFF)
#define BUTTON_R1       (1 << 8)
#define BUTTON_L1       (1 << 9)
#define BUTTON_A        1
#define BUTTON_B        (1 << 1)
#define BUTTON_SELECT   (1 << 2)
#define BUTTON_START    (1 << 3)
#define BUTTON_RIGHT    (1 << 4)
#define BUTTON_LEFT     (1 << 5)
#define BUTTON_UP       (1 << 6)
#define BUTTON_DOWN     (1 << 7)
#define BUTTON_L1R1     ((1 << 8) | (1 << 9))
#define SAFE_MODE       (BUTTON_L1R1 | BUTTON_A | BUTTON_UP)
#define OPTION_BUTTONS  (BUTTON_L1R1 | BUTTON_A | BUTTON_SELECT)
#define PAYLOAD_BUTTONS ((BUTTON_L1 | BUTTON_A | BUTTON_B) ^ 0xFFF)
#define MENU_BUTTONS    (BUTTON_LEFT | BUTTON_RIGHT | BUTTON_UP | BUTTON_DOWN | BUTTON_A | BUTTON_START)