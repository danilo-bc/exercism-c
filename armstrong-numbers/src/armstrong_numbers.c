#include "armstrong_numbers.h"
#include <math.h>

bool is_armstrong_number(int candidate){
    // Find out number of digits in number
    int num_digits = 0;
    for(int inp_copy = candidate; inp_copy > 0; inp_copy /= 10){
        num_digits = num_digits + 1;
    }

    // Extract individual digits
    // Accumulate digit^num_digits
    int sum_result = 0;
    for(int i = 0, inp_copy = candidate; i < num_digits; i++, inp_copy /= 10){
        int digit = inp_copy % 10;
        sum_result = sum_result + pow(digit, num_digits);
    }

    return sum_result == candidate;

}