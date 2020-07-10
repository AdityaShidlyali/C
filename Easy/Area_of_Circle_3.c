/*Using command line argument the file executes correctly in command prompt only
	formula = PI*r*r		r-radius
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc,char *argv[]){
	float rad,area;
	rad=atof(argv[1]); // Instead of atoi I used atof to convert the character into floating point value
	area=M_PI*rad*rad;
	printf("\nArea of the circle is : %.2f" , area);
	return 0;
}
