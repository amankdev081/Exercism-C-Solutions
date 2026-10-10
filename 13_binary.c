#include "binary.h"

int convert(const char *input) {
    int decimal = 0;
    
    while(*input != '\0') {
        if (*input != '1' && *input != '0') {
            return INVALID;
        }

        decimal = (decimal << 1) + (*input - '0');

        input++;
    }
    
    return decimal;
}