#include "18_perfect_numbers.h"

kind classify_number(int number) {
    if (number <= 0) {
        return ERROR;
    }
    
    if (number == 1) {
        return DEFICIENT_NUMBER;
    }
    
    int aliquot_sum = 1;
    for (int i = 2; i <= (number / i); i++) {
        if ((number % i) == 0) {
            aliquot_sum += i;
            if (i != number / i) {
                aliquot_sum += number / i;
            }
        }
    }

    if (aliquot_sum == number) {
        return PERFECT_NUMBER;
    } else if (aliquot_sum > number) {
        return ABUNDANT_NUMBER;
    } else {
        return DEFICIENT_NUMBER;
    }
}