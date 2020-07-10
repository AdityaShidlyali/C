//By using recursion

#include <stdio.h>

int count_number(int);

int main(){
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("Number of digits are : %d",count_number(num));
	return 0;
}

int count_number(int num){
	if(num==0){
		return 0;
	}
	while(num!=0){
		return 1+count_number(num/10);
	}
}