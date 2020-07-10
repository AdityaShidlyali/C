/*
	     *
       *   *
     *   *   *
   *   *   *   *
 *   *   *   *   *
   *   *   *   *
     *   *   *
       *   *
         *
*/

#include <stdio.h>

int main() {
	int n, i, j, blk;
	printf("Enter number of lines to print : ");
	scanf("%d", &n);
	for ( i = 0 ; i <= n ; i++ ) {
		for ( blk = 1 ; blk <= n-i ; blk++) {
			printf("  ");
		}
		for ( j = 1 ; j <= i ; j++ ) {
			printf(" *  ");
		}
		printf("\n");
	}
	for ( i = n-1 ; i >= 1 ; i-- ) {
		for ( blk = n-i ; blk >=1 ; blk-- ) {
			printf("  ");
		}
		for ( j = i ; j >= 1 ; j-- ) {
			printf(" *  ");
		}
		printf("\n");
	}
	return 0;
}
