/*Possible number of ways the seats can be occupied
	By taking number of people and number of seats
	The formula to calculate is n! / (n-r)! where n is number of people and r is number of seats
*/
#include <stdio.h>

long int fact(long int n){
	int fact=1;
	for(int i=1 ; i<=n ; i++){
		fact *= i;
	}
	return fact;
}

int main() {
	long int n,r,num,den;
	printf("Enter number of people : ");
	scanf("%ld",&n);
	printf("Enter number of seats : ");
	scanf("%ld",&r);
	num = fact(n);
	den = fact(n-r);
	printf("The possible number of ways seats can be occupied : %d",num/den);
	return 0;
}