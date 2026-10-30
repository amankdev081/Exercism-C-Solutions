#include "22_armstrong_numbers.h"

static int integer_power(int base, int power);
static int count_digits(int num);

bool is_armstrong_number(int candidate) {
    int num_digits = count_digits(candidate);
    int sum = 0;
    int temp = candidate;

    while (temp) {
        int current_digit = temp % 10;
        sum += integer_power(current_digit, num_digits);
        temp /= 10;
    }

    return candidate == sum;
}

static int integer_power(int base, int power) {
    int result = 1;
    for (int i = 0; i < power; i++) {
        result *= base;
    }

    return result;
}

static int count_digits(int num) {
    if (num == 0) {
        return 1;
    }    

    int count = 0; 
    while (num) {
        count++;
        num /= 10;
    }

    return count;
}