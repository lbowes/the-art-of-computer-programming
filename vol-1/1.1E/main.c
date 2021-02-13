/*
Euclid's Algorithm
"Given two positive integers `m` and `n`, find their greatest common divisor,
i.e, the largest positive integer which evenly divides both `m` and `n`.
*/
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]) {
	int m = atoi(argv[1]);
	int n = atoi(argv[2]);

	int r = m % n;

	// Is it 0?
	while(r != 0) {
		// Interchange
		m = n;
		n = r;

		// Find remainder
		r = m % n;
	}

	printf("n: %i\n", n);
}
