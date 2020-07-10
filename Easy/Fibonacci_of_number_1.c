//By using looping construct

#include <stdio.h>

int main(){
	int n,fir=0,sec=1,fib;
	printf("Enter range to display fibonacci series : ");
	scanf("%d",&n);
	printf("Fibonacci Series is : \n%d %d",fir,sec);
	while(fib<=n){
		fib=fir+sec;
		printf(" %d",fib);
		fir=sec;
		sec=fib;
	}
	return 0;
}