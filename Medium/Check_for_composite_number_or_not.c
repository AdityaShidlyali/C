//Program to check for composite number or not

#include <stdio.h>
#include <stdbool.h>

bool is_composite(int n) {
	int i, factor;
	for (i=1; i<n; i++) { //Check for least number divisibility to n except number n
		if (n%i == 0) {
			factor = i; //assign factor to dividend number to check whether the number is greater than 1
		}
	}
	if (factor > 1) { //factor "i" dividing the number should be greater than 1
		return true; //if factor is equal to 1 then all numbers will get printed because all numbers are divisible by 1
	}
	else {
		return false;
	}
}

int main() {
	int n;
	printf("Enter a number to check for compositivity : ");
	scanf("%d", &n);
	if (is_composite(n) == true) {
		printf("Entered number is composite number");
	}	
	else {
		printf("Entered number is not composite number");
	}
	return 0;
}
