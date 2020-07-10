#include <stdio.h>
int main(){
	double a;
	a=50.e4;
	printf("The value of a is : %lf " ,a);
	a=50.E6;
	printf("\nThe value of a is : %lf " ,a);
	a=50.e-7; //Purposely made e-7 change 7 and see the output
	printf("\nThe value of a is : %lf " ,a);
	a=50.E-5;
	printf("\nThe value of a is : %lf " ,a);
	return 0;
}	