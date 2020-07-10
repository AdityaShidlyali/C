//By using recursion

//Time complexity O(num)

#include <stdio.h>

int sum_of_natural_numbers(int);

int main(){
	int num;
	printf("Enter a natural number : ");
	scanf("%d",&num);
	printf("The sum of numbers upto %d is %d",num,sum_of_natural_numbers(num));
	return 0;
}

int sum_of_natural_numbers(int num){
	if(num==0){
		return 0;
	}
	else{
		return num+sum_of_natural_numbers(num-1);
	}
}