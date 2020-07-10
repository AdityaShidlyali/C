//Program to generate n composite numbers

#include <stdio.h>

int main() {
	int n, factor;
	printf("Enter numebr of composite number required : ");
	scanf("%d", &n);
	printf("These are the composite numbers : \n");
	for (int i=1; i<=n; i++) { //To jump from one number to another to check for composit
		for (int j=1; j<i; j++) { //To check for divisibility with least number and upto less then the ith number
			if (i%j == 0) {
				factor = j; //to assign the the divisible factor for number, to check it should be greater than one to be composite
			}
		}
		if (factor > 1) { //the factor divisible should not be one because all numbers are divisible by one if this wouldnt be checked then all numbers will get printed
			printf("%d ", i);
		}
	}
	return 0;
}
