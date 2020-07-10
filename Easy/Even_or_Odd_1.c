//By divide and multiply by 2

#include <stdio.h>

int is_even(int);

int main(){
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("%d is ",num);
	is_even(num) ? printf("Even",num) : printf("Odd",num);
	return 0;	
}

int is_even(int num){
	return ((num/2)*2==num);
}