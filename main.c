#include <stdio.h>
#include "problem1.h"
#include "problem2.h"

/*
 * Project Euler:
 * A list of problems from Project Euler.
 *
 */


int main(void) {
    printf("Problem 1: %d\n", sum_of_multiples(1000));
    printf("Problem 2 (Optimized): %ld\n", sum_of_even_fibs_optimized(4000000));
    return 0;
}
