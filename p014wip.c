﻿#include <stdio.h>

void main() {
	/*
	The following iterative sequence is defined for the set of positive integers:

	n → n/2 (n is even)
	n → 3n + 1 (n is odd)

	Using the rule above and starting with 13, we generate the following sequence:

	13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
	It can be seen that this sequence (starting at 13 and finishing at 1)
	contains 10 terms. Although it has not been proved yet (Collatz Problem),
	it is thought that all starting numbers finish at 1.

	Which starting number, under one million, produces the longest chain?
	*/
	long num = 0;
	long ctr = 0;
	long high_ctr = 0;
	long high_num = 0;
	for (int i = 13; i < 1000000; i++) {
		ctr = 0;
		num = i;
		while (num != 1) {
			if (num % 2 == 0) {
				num = num / 2;
				ctr++;
			}
			else {
				num = 3 * num + 1;
				ctr++;
			}
			//printf("num: %d", num);
			if (ctr > high_ctr) {
				high_num = i;
				high_ctr = ctr;
				//printf("num: %d, ctr: %d", num, ctr);
			}
		}
	}
	printf("Longest Chain: %d", high_num);
}