//By using looping constructs

//Time Complexity O(log(n))

#include <stdio.h>

int main(){
	int num,dig,rev=0;
	printf("Enter a number : ");
	scanf("%d",&num);
	while(num!=0){
		dig=num%10;
		rev=rev*10+dig;
		num/=10;
	}
	printf("Reversed number is : %d",rev);
	return 0;
}