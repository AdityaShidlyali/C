//Factorial by recursion

#include <stdio.h>

int factorial_of_number(int);

int main(){
	int n;
	printf("Enter an integer : ");
	scanf("%d",&n);
	printf("Factorial of %d is %d",n,factorial_of_number(n));
	return 0;
}

int factorial_of_number(int n){
	if(n==0||n==1){
		return 1;
	}
	else{
		return n*factorial_of_number(n-1);
	}
}
