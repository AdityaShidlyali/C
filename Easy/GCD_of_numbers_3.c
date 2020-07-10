//By using recursion method 2

#include <stdio.h>

int GCD(int,int);

int main(){
	int num1,num2;
	printf("Enter two numbers : \n");
	scanf("%d%d",&num1,num2);
	printf("GCD of %d and %d is %d",num1,num2,GCD(num1,num2));
	return 0;
}

int GCD(int num1,int num2){
	if(num2!=0)
		return GCD(num2,num1%num2);
	else
		return num1;
}