//By using looping constructs

//Time complexity O(num)

#include <stdio.h>

int sum_of_natural_numbers(int);

int main(){
	int num;
	printf("Enter natural number : ");
	scanf("%d",&num);
	printf("The sum of numbers upto %d is %d",num,sum_of_natural_numbers(num));
	return 0;
}

int sum_of_natural_numbers(int num){
	int sum=0;
	for(int i=1;i<=num;i++){
		sum+=i;
	}
	return sum;
}