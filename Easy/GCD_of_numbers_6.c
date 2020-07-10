//By Euclidian Formuala if two numbers are very big in range

#include <stdio.h>

int GCD(int,int);

int main(){
	int a,b;
	printf("Enter two numbers : \n");
	scanf("%d%d",&a,&b);
	printf("GCD of %d and %d is %d",a,b,GCD(a,b));
	return 0;
}

int GCD(int a,int b){
	if(a==0||b==0)
		return 0;
	if(a%b==0)
		return b;
	if(b%a==0)
		return a;
	if(a>b)
		return GCD(a%b,b);
	if(b>a)
		return GCD(a,b%a);
}