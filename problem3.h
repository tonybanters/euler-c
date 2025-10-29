#ifndef PROBLEM3_H
#define PROBLEM3_H

bool is_prime(int n) {
    if(n == 2){
        return true;
    }
    else if(n == 1 || n % 2 == 0){
        return false;
    }
    int i = 3;
    while (i * i < n + 1) {
        if(n % i == 0){
            return false;
        }
        i += 2;
    }
    return true;
}

long largest_prime_factor(long n) {
    if(n == 1){
        // handle case where 1 is given in.. 1 has no prime factors otherwise
        // the fundamental theorem of arithmetic would fail
        return 0;
    }

    long largest = (n % 2 == 0) ? 2 : 1;
    long i = 3;
    while (i * i <= n) {
        if (n % i == 0) {
            if(is_prime(n / i)){
                largest = n / i;
            }
            else if(is_prime(i)){
                largest = i;
            }
        }
        i += 2;
    }
    return largest != 1 ? largest : n;
}

#endif

