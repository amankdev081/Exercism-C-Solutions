#include "23_isogram.h"

#include <stddef.h>
#include <stdint.h>
#include <ctype.h>

bool is_isogram(const char phrase[]) {
    if (phrase == NULL) {
        return false;
    }

    uint32_t bitmask = 0;
    
    while (*phrase) {
        unsigned char c = *phrase;
        if (isalpha(c)) {
            int shift = tolower(c) - 'a';

            if (bitmask & (1u << shift)) {
                return false;
            }

            bitmask |= (1 << shift);
        }

        phrase++;
    }

    return true;
}