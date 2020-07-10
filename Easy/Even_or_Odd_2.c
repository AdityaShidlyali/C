//By using Bitwise and operator
//As odd number's binary number contains last bit as 1, here &operator compares the last value of binary number of give digit

#include <stdio.h>

int is_even(int);

int main(){
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	is_even(num) ? printf("%d is Even",num) : printf("%d is Odd",num);
	
	/*
	or else we can also invoke if....else statement :>
	if(num&1){
		printf("Number is odd");
	}
	else{
		printf("Number is even");
	}
	*/
	
	return 0;
}

int is_even(int num){
	return (!(num&1));
}