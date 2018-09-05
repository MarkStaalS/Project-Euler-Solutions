#include <stdio.h>
#include <stdlib.h>

int strLength();
int checkIfPalindrome();
int largestPalindrome();

void main() {
	/*
	A palindromic number reads the same both ways. The largest palindrome
	made from the product of two 2-digit numbers is 9009 = 91 × 99.
	Find the largest palindrome made from the product of two 3-digit numbers.
	*/
	printf("%d", largestPalindrome());
}
int largestPalindrome() {
	int check = 0;
	long num = 0;
	long maxNum = 0;
	char str[12];
	/*
	Loop through both numbers
	*/
	for (int ctr0 = 999; ctr0 > 99; ctr0--) {
		for (int ctr1 = 999; ctr1 > 99; ctr1--) {
			check = 0;
			num = ctr0 * ctr1;
			/*
			Convert from integer to char
			*/
			sprintf(str, "%d", num);
			check = checkIfPalindrome(str);
			/*
			Check = 0 -> palindrome
			*/
			if (check == 0) {
				/*
				Check to get the highest number
				*/
				if (num > maxNum) {
					maxNum = num;
				}
			}
		}
	}
	return maxNum;
}

int checkIfPalindrome(char *str) {
	int sLen = 0;
	sLen = strLength(str);
	int check = 0;

	for (int i = 0; i <= sLen / 2; i++) {
		if (str[i] == str[sLen - 1 - i]) {

		}
		else {
			check = 1;
		}
	}
	return check;
}

int strLength(char *str_) {
	int i = 0;
	while (str_[i] != '\0') {
		i++;
	}
	return i;
}