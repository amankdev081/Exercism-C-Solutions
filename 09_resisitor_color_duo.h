#ifndef EXERCISM_09_RESISTOR_COLOR_DUO_H
#define EXERCISM_09_RESISTOR_COLOR_DUO_H

#include <stdint.h>

typedef enum {
    BLACK,
    BROWN, 
    RED,
    ORANGE,
    YELLOW,
    GREEN,
    BLUE,
    VIOLET,
    GREY,
    WHITE
} resistor_band_t;

uint16_t color_code(const resistor_band_t colors[]);

#endif
