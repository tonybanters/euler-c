#include <stdio.h>
#include "problem1.h"
#include "problem2.h"
#include "problem3.h"

/*
 * Project Euler:
 * A list of problems from Project Euler.
 *
 */

int main(void) {
    printf("Problem 1: %d\n", sum_of_multiples(1000));
    printf("Problem 2 (Optimized): %ld\n", sum_of_even_fibs_optimized(4000000));
    printf("Testing is_prime: 31 - %s\n", is_prime(31) ? "Prime" : "Composite");
    printf("Testing is_prime: 13195 - %s\n", is_prime(13195) ? "Prime" : "Composite");
    printf("Problem 3: %ld\n", largest_prime_factor(600851475143));
    return 0;
}
