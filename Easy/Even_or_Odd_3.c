//Constructing the loopings for even times if the number is even and if its odd
//the loop runs odd times with logical NOT Operator

#include <stdio.h>

int is_even(int);

int main(){
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("%d is ",num);
	is_even(num) ? printf("Even") : printf("Odd");
	return 0;
}

int is_even(int n){
	int even_no=1;
	for(int i=1;i<=n;i++){ //if for loop repeates even number of times then the number is even or vice versa
		even_no=!even_no;
	}
	return even_no;
}