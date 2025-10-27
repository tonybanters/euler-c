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

#endif

