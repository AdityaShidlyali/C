//By using function and loop

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
	int fact=1;
	if(n==0){
		return 1;
	}
	else{
		for(int i=1;i<=n;i++){
			fact*=i;
		}
	}
	return fact;
}