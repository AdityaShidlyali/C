//By using arithmetic operators + and -

#include <stdio.h>
int main(){
	int num1,num2;
	printf("Enter two numbers : \n");
	scanf("%d%d",&num1,&num2);
	printf("\n\nBefore Swapping\nNum 1 = %d and Num 2 = %d",num1,num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	
	/*
	We can implement code in :>
	a = b - a;
	b = b - a;
	a = b + a;
	
	Or Else in single line :>
	a = (a + b) - (b = a);
	*/
	
	printf("\n\nAfter Swapping\nNum 1 = %d and Num 2 = %d\n",num1,num2);
	return 0;	
}