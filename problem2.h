#include <stdlib.h>

#ifndef PROBLEM2_H
#define PROBLEM2_H

long fib(long n){
    if (n < 2) {
        return 1;
    } else {
        return fib(n-1) + fib(n-2);
    }
}

int* _fib(int n) {
    int* result = malloc(n * sizeof(int));
    result[0] = 1;
    result[1] = 1;
    for (int i = 2; i < n; i++) {
       result[i] = result[i-1] + result[i-2]; 
    }
    return result;
};


long sum_of_even_fibs(long n) {
    int* fib_nums = _fib(n);
    long sum = 0;
    for (int i = 0; i < n; i++) {
        if(fib_nums[i] % 2 == 0){
            sum += fib_nums[i];
        }
    }
    free(fib_nums);
    return sum;
}

long sum_of_even_fibs_optimized(long n){
    long last_fib = 1, current_fib = 1;
    long sum = 0;
    while (current_fib < n) {
        if(current_fib % 2 == 0){
            sum += current_fib;
        }
        long next_fib = current_fib + last_fib;
        last_fib = current_fib;
        current_fib = next_fib;
    }
    return sum;
}

#endif
