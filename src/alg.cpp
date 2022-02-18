// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    for (int i = 2; i*i <= value; i++) {
        if ((value) % i == 0) {
            return false;
            break;
        }
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
    int a = 1;
    int c = 1;
    int value = 1;
    while (a != 0) {
        value += 1;
        if (checkPrime(value) == true) {
            if (n == c) {
                a = 0;
            } else {
                c += 1;
            }
        }
    }
    return value;
}

uint64_t nextPrime(uint64_t value) {
    int a = 1;
    while (a != 0) {
        if (checkPrime(value+1) == true) {
            a = 0;
        }
        value += 1;
    }
    return value;
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t s = 0;
    for (int i = 2; i < hbound; i++) {
        if (checkPrime(i) == true) {
            s += i;
        }
    }
    return s;
}
