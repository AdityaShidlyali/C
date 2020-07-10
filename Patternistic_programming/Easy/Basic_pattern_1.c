/*
	print : * * * * * * * based on the entered number
*/

#include <stdio.h>

int main() {
	int n;
	printf("Enter number of stars required : ");
	scanf("%d", &n);
	for ( int i = 1 ; i <= n ; i++ ) {
		printf(" * ");
	}
	return 0;
}
