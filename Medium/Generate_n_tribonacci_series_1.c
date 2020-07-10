/*Program to generate tribonacci series
	tribonacci series is : 0 0 1 1 2 3 5 8 13...
*/

#include <stdio.h>

void tribonacci (int n) {
	if (n == 1) {
		printf(" 0 ");
		return;
	}
	else if (n == 2) {
		printf(" 0 0 ");
		return;
	}
	else if (n == 3) {
		printf(" 0 0 1 ");
		return;
	}
	else {
		int first = 1, second = 2, trib = 2;
		printf(" 0 0 1 1 ");
		for (int i=4; i<n; i++) {
			printf("%d ", trib);
			trib = first + second;
			first = second;
			second = trib;
		}
	}
}

int main() {
	int n;
	printf("Enter value of n : ");
	scanf("%d", &n);
	printf("Your Tribonacci series is : \n");
	tribonacci(n);
	return 0;
}