#ifndef EXERCISM_08_DARTS_H
#define EXERCISM_08_DARTS_H

#include <stdint.h>

typedef struct {
    float x;
    float y;
}coordinate_t;

uint8_t score(coordinate_t pos);

#endif