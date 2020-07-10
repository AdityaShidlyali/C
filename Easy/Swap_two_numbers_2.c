//By using arithmetic operators * and /

#include <stdio.h>
int main(){
	int num1,num2;
	printf("Enter two numbers : \n");
	scanf("%d%d",&num1,&num2);
	printf("\n\nBefore swapping\nNum 1 = %d and Num 2 = %d",num1,num2);
	num1=num1*num2;
	num2=num1/num2;
	num1=num1/num2;
	
	/*
	Single Line Logic is :> (BUT THIS METHOD NOT WORK IF a IS 0)
	a = (a * b) / (b = a);
	*/
	printf("\n\nAfter Swapping\nNum 1 = %d and Num 2 = %d",num1,num2);
	return 0;
}