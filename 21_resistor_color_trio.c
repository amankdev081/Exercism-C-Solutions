#include "21_resistor_color_trio.h"

resistor_value_t color_code(resistor_band_t colors[]) {
    uint64_t ohms = colors[0] * 10 + colors[1];

    for (resistor_band_t i = 0; i < colors[2]; i++) {
        ohms*= 10;
    }

    resistor_value_t result;

    if (ohms >= 1000000000) {
        result.value = ohms / 1000000000;
        result.unit = GIGAOHMS;
    } else if (ohms >= 1000000) {
        result.value = ohms / 1000000;
        result.unit = MEGAOHMS;
    } else if (ohms >= 1000) {
        result.value = ohms / 1000;
        result.unit = KILOOHMS;
    } else {
        result.value = ohms;
        result.unit = OHMS;
    }

    return result;
}