#include <stdio.h>
#include <time.h>

int isPrime(int argc) {
	if (argc <= 1) {
		return 0;
	};

	int i;
	for (i = 2; i < argc; i++) {
		if (argc % i == 0) {
			return 0;
		};
	};

	return 1;
}

int primes(int argc) {
	int primeAmount = 0;
	int number = 1;
	while (primeAmount < argc) {
		if (isPrime(number)) {
			printf("Prime Number: %d\n", number);
			primeAmount += 1;
		};
		number += 1;
	};
	return 0;
}

int main() {
	clock_t start, end;
	start = clock();
	int amount;
	printf("How many prime numbers to look for ?\n");
	scanf_s("%d", &amount);
	printf("Searching for the %d first prime numbers :3 :\n", amount);
	primes(amount);
	end = clock();
	float seconds = (float)(end - start) / CLOCKS_PER_SEC;
	printf("Took %f seconds to find the first %d primes!\n", seconds, amount);
	printf("(%f hours or %f minutes)\n", seconds / 120, seconds / 60);
	return 0;
}