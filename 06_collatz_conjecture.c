#include "06_collatz_conjecture.h"
#include <stdint.h>

int steps(int start) {
    if (start <= 0) {
        return ERROR_VALUE;
    }

    uint64_t current_val = start;
    int i = 0;
    
    while (current_val != 1) {
        if (!(current_val & 1)) {
            current_val = current_val >> 1;
        }
        else {
            current_val = current_val * 3 + 1;
        }
        ++i;
    } 
    
    return i;
}