//By using recursion concept

#include <stdio.h>

int fibonacci(int);

int main(){
	int n,sum=0;
	printf("Enter number of fibonacci digits required : ");
	scanf("%d",&n);
	printf("Fibonacci series is : ");
	while(sum<=n){
		printf(" %d",fibonacci(sum));
		sum++;
	}
	return 0;
}

int fibonacci(int n){
	if(n<=1){
		return n;
	}
	else{
		return fibonacci(n-1) + fibonacci(n-2);
	}
}