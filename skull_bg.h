#ifndef SKULL_BG_H
#define SKULL_BG_H

#include <pgmspace.h>
#include "cyd_config.h"

#ifndef CYD_35
#define SKULL_BG_WIDTH 240
#define SKULL_BG_HEIGHT 320
#else
#define SKULL_BG_WIDTH 320
#define SKULL_BG_HEIGHT 480
#endif

const unsigned char skull_bg_bitmap[] PROGMEM = {0x00};

#endif // SKULL_BG_H
