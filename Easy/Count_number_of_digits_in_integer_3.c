//By using logarithm concept

#include <stdio.h>
#include <math.h>

int count_number(int);

int main(){
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("Number of digits are : %d",count_number(num));
	return 0;
}

int count_number(int num){
	return 1+floor(log10(num));
}