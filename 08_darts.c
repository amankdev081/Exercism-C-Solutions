#include "08_darts.h"

uint8_t score(coordinate_t pos) {
    float dist_sq = (pos.x * pos.x) + (pos.y * pos.y);

    return dist_sq <= 1.0f ? 10 :
           dist_sq <= 25.0f ? 5 :
           dist_sq <= 100.0f ? 1 : 0;      
}