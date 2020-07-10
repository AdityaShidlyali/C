//Program to count the number of digits which has total 9 number of divisors

#include <stdio.h>

int count_for_9_divisors (int n){
	int count = 0;
	for(int i=1; i<=n; i++) {
		if (n%i == 0) {
			count++;			
		}
	}
	return count;
}

void check_for_9_divisors (int n){
	int count = 0;
	for (int i=1; i<=n; i++){
		if (count_for_9_divisors (i) == 9){
			printf("%d ",i);
			count++;
		}
	}
	printf("\nTotal %d numbers have 9 divisors", count);
}

int main() {
	int n;
	printf("Enter end value : ");
	scanf("%d", &n);
	printf("The numbers which have 9 divisors are : \n");
	check_for_9_divisors(n);
	return 0;
}