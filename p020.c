#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGIT 200
/*
Inspired by https://www.codesdope.com/blog/article/how-to-calculate-100-factorial-100-in-c/
*/
void main() {
	/*
	n! means n × (n − 1) × ... × 3 × 2 × 1

	For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
	and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.

	Find the sum of the digits in the number 100!
	*/

	int factorial[MAX_DIGIT]= {1};
	int carry = 0, i, numberOfDigits, multiplier, sum;

	/*
	Since there is a limit to the number of digits we are able to store
	with the built in data types we are going to use arrays instead as this 
	alows us to have as many digits as we please, the method will be 
	similar as if we were doing multiplication by hand
	*/

	/*
	numberOfDigits needs to be != 0 for the multiplication loop to run
	*/
	numberOfDigits = 1;
	/*
	Loop through multiplier from 1 to 100 and calculate the factorial
	*/
	for (multiplier = 1; multiplier <= 100; multiplier++){
		/*
		Multiply
		*/
		for (i = 0; i < numberOfDigits; i++) {
			int res = factorial[i] * multiplier;
			/*
			By having mod % we will get the first digit
			*/
			factorial[i] = (res + carry) % 10;
			/*
			Using / 10 will give us the last number in the result, aka. the carry
			*/
			carry = (res + carry) / 10;
			/*
			Checking weather or not we have remaning carry, and increases the amount
			of digits appropriatly
			*/
			if (i == numberOfDigits - 1 && carry > 0) {
				numberOfDigits++;
			}
		}
	}
	/*
	Print factorial and get final sum
	*/
	for (i = numberOfDigits - 1; i >= 0; i--) {
		printf("%d", factorial[i]);
		sum += factorial[i];
	}
	printf("\n%d", sum);
}