/*
	*
	*
	*
	*
	*
	*
*/

#include <stdio.h>

int main() {
	int n;
	printf("Enter number of stars required : ");
	scanf("%d", &n);
	for ( int i = 0 ; i <= n ; i++ ) {
		printf("*\n");
	}
	return 0;
}
