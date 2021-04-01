#include "armstrong_numbers.h"
#include <math.h>

bool is_armstrong_number(int candidate){
    int inp_copy = candidate;

    // Find out number of digits in number
    int num_digits = 0;
    while(inp_copy > 0){
        inp_copy = inp_copy/10;
        num_digits = num_digits + 1;
    }

    // Extract individual digits
    // Accumulate digit^num_digits
    int sum_result = 0;
    inp_copy = candidate;
    for(int i = 0; i < num_digits; i++){
        int digit;
        digit = inp_copy % 10;
        sum_result = sum_result + (int)pow(digit, num_digits);
        inp_copy = inp_copy / 10;
    }

    if(sum_result == candidate)
        return true;
    else
        return false;

}