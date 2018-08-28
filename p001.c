#include <stdio.h>

void main() {
	/*
	If we list all the natural numbers below 10 that are multiples of 3 or 5,
	we get 3, 5, 6 and 9. The sum of these multiples is 23.
	Find the sum of all the multiples of 3 or 5 below 1000.
	 */
	int i;
	int sum = 0;
	for (i = 0; i < 1000; i++) {
		/*
		Uses modulo to see if the number has multiplier of either 3 or 5 
		then adds that number to sum
		*/
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}
	printf("sum %d\n", sum);
}