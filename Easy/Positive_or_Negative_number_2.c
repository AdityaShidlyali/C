//By using conditional operator

#include <stdio.h>

int main(){
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	num > 0 ? printf("Positive") : printf("Negative");
	return 0;
}