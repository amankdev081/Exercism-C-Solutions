#include "05_resistor_color.h"

uint16_t color_code(resistor_band_t color){
    return color;
}

resistor_band_t *colors(void) {
    static resistor_band_t color_array[10] = {COLORS};
    return color_array;
}