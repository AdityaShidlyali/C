/*Using M_PI standard value and with function and without pointer
	formula = PI*r*r		r - radius
*/

#include <stdio.h>
#include <math.h>

float area_circle(float rad){
	return (M_PI*rad*rad);
}

int main(){
	float rad;
	printf("Enter radius of circle : ");
	scanf("%f",&rad);
	printf("The area of circle is %f",area_circle(rad));
	return 0;
}