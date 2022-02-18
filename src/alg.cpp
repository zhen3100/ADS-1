// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
#include <math.h> 


bool checkPrime(uint64_t value) {
for (int i = 2; i <= sqrt(value); i++) {
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
	int value = 2;
	while (a != 0) {
		if (checkPrime(value) == true) {
			if (n == c) {
				a = 0;
				return value;
			}
			else {
				c += 1;
			}
		}
		value += 1;
	}
}

uint64_t nextPrime(uint64_t value) {
int a = 1;
	while (a != 0) {
		if (checkPrime(value+1) == true) {
			a = 0;
			return value + 1;
		}
		value += 1;
	}
}

uint64_t sumPrime(uint64_t hbound) {
int s = 0;
	for (int i = 2; i < hbound; i++) {
		if (checkPrime(i) == true) {
			s += i;
		}
	}
	return s;
}
