/*
  Jeremy Fonseca | 10.07.21
    This program calculates the possible prime numbers of a given integer.
*/
#include <stdio.h>

void factor(int), findNums(int*, int);
int lengthArr(int);

void main(void) {
	int N;
	
	printf("Insert a number: ");
	scanf("%d", &N);
	
	factor(N);
	
	return;
}

void factor(int n) {
	int i = 2, // Represents the prime factors of "n"
	m = 0, // Iterator of "dvs"
	len = lengthArr(n), // Length of "dvs"
	dvs[len]; // Vector that holds the prime factors of "n"
	
	while (i <= n) {
		if ((n % i) == 0) {
			dvs[m] = i;
			n /= i;
			i = 1;
			++m;
		}
		++i;
	}
	findNums(dvs, len);
}

void findNums(int dvs[], int len) {
	int i;
	for (i = 0; i < len; i++) {
		printf(" %d ", dvs[i]);
	}
}

int lengthArr(int n) {
	int i = 2, len = 0;
	while (i <= n) {
		if ((n % i) == 0) {
			n /= i;
			i = 1;
			++len;
		}
		++i;
	}
	return len;
}

