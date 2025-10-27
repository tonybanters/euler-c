#ifndef PROBLEM1_H
#define PROBLEM1_H

int sum_of_multiples(int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result += (i % 3 == 0 || i % 5 == 0) ? i : 0;
    }
    return result;
};

#endif
