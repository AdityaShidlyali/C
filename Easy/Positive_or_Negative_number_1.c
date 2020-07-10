//Using Else...if ladder

#include <stdio.h>

int main(){
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	if(num>0){
		printf("Entered number is Positive");
	}
	else if(num==0){
		printf("Entered number is Zero");
	}
	else{
		printf("Entered number is Negative");
	}
	return 0;
}