//By using recursion

#include <stdio.h>

int sum_digits(int);

int main(){
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("Sum of digits is : %d",sum_digits(num));
	return 0;
}

int sum_digits(int num){
	
	//Replace if and else by the line : return num%10+sum_digits(num%10);
	
	if(num==0){
		return 0;
	}
	else{
		return num%10+sum_digits(num/10);
	}
}