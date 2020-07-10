//Program to print the pascal's triangle

#include <stdio.h>

int factorial ( int );
int combination ( int, int );

int main() {
	int n, i, j, blk;
	printf("Enter number of lines to print the pascals triangle : ");
	scanf("%d", &n);
	for ( i = 1 ; i <= n ; i++ ) {
		int r = 0;
		for ( blk = 1; blk <= n-i ; blk++ ) {
			printf("  ");
		}
		for ( j = 1; j <= i ; j++ ) {
			printf(" %d  ", combination (i-1, r));
			r++;
		}
		printf("\n");
	}
	return 0;
}

int factorial (int n) {
	int fact = 1;
	while ( n >= 1 ) {
		fact = fact *n;
		n--;
	}
	return fact;
}

int combination ( int n, int r ) {
	return factorial(n) / (factorial(r) * factorial(n-r));
}
