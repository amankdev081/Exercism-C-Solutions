#include "eliuds_eggs.h"

unsigned int egg_count(unsigned int number) {
    unsigned int count = 0;

    while (number) {
        number &= (number - 1);
        count++;
    }

    return count;
}