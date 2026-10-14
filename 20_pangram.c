#include "20_pangram.h"

#include <stddef.h>
#include <ctype.h>

bool is_pangram(const char *sentence) {
    if (sentence == NULL) {
        return false;
    }

    int seen_letters = 0;
    for (int i = 0; sentence[i]; i++) {
        if (isalpha((unsigned char)sentence[i])) {
            int index = tolower((unsigned char)(sentence[i])) - 'a';
            seen_letters |= (1 << index);
        }
    }
    
    return seen_letters == (1 << 26) - 1;
}