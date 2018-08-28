#include <stdio.h>

int strLength();

void main() {
	/*
	A palindromic number reads the same both ways. The largest palindrome
	made from the product of two 2-digit numbers is 9009 = 91 × 99.
	Find the largest palindrome made from the product of two 3-digit numbers.
	*/


	/*
	Check if palindromic
	*/
	int num ;
	char str[12];
	int sLen = 0;
	int isPal = 0;
	/*
	Convert from integer to "string"
	*/

	//sLen = strLength(str);
	/*
	printf("%s\n", str);
	printf("%c", str[0]);
	printf("%c", str[1]);
	printf("%c", str[2]);
	printf("%c", str[3]);
	*/
}

int strLength(char *str_) {
	int i = 0;
	while (str_[i] != '\0') {
		i++;
	}
	return i;
}