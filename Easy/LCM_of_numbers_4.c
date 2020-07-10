//Most Eficiant program to find the LCM of two numbers

#include <stdio.h>

int main(){
	int a,b,l;
	printf("Enter two numbers \n");
	scanf("%d%d",&a,&b);
	for( l=a>b?a:b ; l<=a*b ; l=l+(a>b?a:b) ){
		if(l%a==0&&l%b==0){
			break;
		}
	}
	printf("LCM of %d and %d is %d",a,b,l);
	return 0;
}