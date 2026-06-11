#include <stdio.h>

void main() {
	int i, sum = 0, n = 5;
	for (i = 1; i <= n; i = i + 1) sum += i;
	printf("Sum of numbers from 1 to %d is %d.\n", n, sum); 
}