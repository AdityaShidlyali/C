//Program to calculate roots of given quadratic equation using Shridharan's formula

#include <stdio.h>
#include <math.h>

int main() {
	float a,b,c,discr=0,root_1,root_2;
	printf("Enter coefficiants of quadratic equations : \n");
	scanf("%f%f%f",&a,&b,&c);
	if (a == 0 && b == 0) {
		printf("Enter valid coefficiants !");
	}
	else if (b == 0) {
		printf("The Root = %f ", (-c)/a);
	}
	else if (a == 0) {
		printf("The Root = %f", (-c)/b);
	}
	else {
		discr = (b*b) - (4*a*c);
		if (discr == 0) {
			root_1 = (-b/(2*a));
			printf("The Root 1 = Root 2 = %f", root_1);
		}
		else if (discr > 0) {
			root_1 = ((-b) + sqrt (discr)) / (2*a);
			root_2 = ((-b) - sqrt (discr)) / (2*a);
			printf("The roots are real and distinct : \n");
			printf("Root 1 = %f\nRoot 2 = %f", root_1, root_2);
		}
		else {
			root_1 = (-b) / (2*a); //Real part
			root_2 = sqrt (fabs(discr)) / (2*a); //Imaginary part
			printf("The roots are imaginary : \n");
			printf("Root 1 = %f + %fi \n", root_1, root_2);
			printf("Root 2 = %f + %fi", root_1, root_2);
		}
	}
	return 0;
}