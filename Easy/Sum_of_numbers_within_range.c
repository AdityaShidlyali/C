//Sum of numbers within range is

#include <stdio.h>

int main(){
	int start,end,sum=0;
	printf("Enter starting number : ");
	scanf("%d",&start);
	printf("Enter ending number : ");
	scanf("%d",&end);
	for(int i=start+1;i<=end-1;i++){
		sum+=i;
	}
	printf("The sum of numbers within %d and %d is %d",start,end,sum);
	return 0;
}