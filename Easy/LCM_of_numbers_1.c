//By finding the prime factor using looping construct

#include <stdio.h>

int main(){
	int num1,num2,lcm;
	printf("Enter two numbers : \n");
	scanf("%d%d",&num1,&num2);
	lcm = num1 > num2 ? num1 : num2; /*This line is only to start finding the prime factor with greatest number
										So that the CPU cycles can be reduced however the lcm variable can start with 1*/
	while(1){
		if(lcm%num1==0&&lcm%num2==0){
			printf("LCM of %d and %d is %d",num1,num2,lcm);
			break;
		}
		lcm++;
	}
	return 0;
}