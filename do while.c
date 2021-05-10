#include <stdio.h>

int main(void) {
	int N = 0;

	do {
		N = N + 1;
		printf("N = %d", N);
	} while (N < 10);
	return 0;
}
