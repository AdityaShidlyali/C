//By using GCD of two given numbers without recursion

#include <stdio.h>

int main(){
	int num1,num2,gcd;
	printf("Enter two numbers : \n");
	scanf("%d%d",&num1,&num2);
	for(int i=1;i<=num1&&i<=num2;i++){
		if(num1%i==0&&num2%i==0){
			gcd=i;
		}
	}
	printf("LCM of %d and %d is %d",num1,num2,(num1*num2)/gcd);
	return 0;
}