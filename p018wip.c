#include <stdio.h>
#include <stdlib.h>

long * branchValues();
long power();
int pyramid[15][15] = {
		{75} ,
		{95, 64} ,
		{17, 47, 82} ,
		{18, 35, 87, 10} ,
		{20, 4, 82, 47, 65} ,
		{19, 1, 23, 75, 3, 34} ,
		{88, 2, 77, 73, 7, 63, 67} ,
		{99, 65, 04, 28, 6, 16, 70, 92} ,
		{41, 41, 26, 56, 83, 40, 80, 70, 33} ,
		{41, 48, 72, 33, 47, 32, 37, 16, 94, 29} ,
		{53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14} ,
		{70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57} ,
		{91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48} ,
		{63, 66, 4, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31} ,
		{04, 62, 98, 27, 23, 9, 70, 98, 73, 93, 38, 53, 60, 4, 23}
};
#define size 8

void main() {
	
	//printf("%d", 1 % 1);
	long * r = branchValues(3);
}

long power(int x, int exponent) {
	long sum = x;
	for (long i = 0; i < exponent - 1; i++) {
		sum = sum * x;
	}
	return sum;
}
/*
Calculates the sum of the plausible paths
*/
long * branchValues(int layersDown) {
	int ctr;
	int ctr1;
	int div = 0;
	int idx;
	static long sum[size];
	/*
	Loop through layers
	*/
	for (int i = 0; i <= layersDown; i++) {
		if (div == power(2, layersDown - i)) {
			div = 1;
		}
		else {
			div = power(2, layersDown - i);
		}
		printf("%d\n", div);
		ctr = 0;
		for (int j = 0; j < size; j++) {

			//printf("%d, ", j );
			// array partitioning
			if (j % div == 0) {
				ctr++;
			}
			//column indexing 
			if (i == 0) {
				idx = 0;
			}
			else {
				idx = ctr / 2;				
			}
			//sum[j] += pyramid[i][ctr];
			//laver fejl her og indexer ikke korrekt
			printf("%d, ", idx);
		}
		printf("\n");
	}
	return sum;
}