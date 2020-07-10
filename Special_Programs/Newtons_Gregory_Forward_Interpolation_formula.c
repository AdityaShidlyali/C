//Author : Aditya S
//Date : 21/03/2020
//Program for Newton's Gregory forward interpolation formula

#include <stdio.h>
#include <stdlib.h>

//User defined functions used in the code :
int fact (int);
float r_calculate (float, int);
//--------------------------------

int main() {

	//Taking input for number of elements :
	int n, i;
	printf("\nEnter number of elements in x and y : ");
	scanf("%d", &n);
	//--------------------------------

	//Taking input for x values :
	float *x;
	x = (float *) calloc (n, n * sizeof(float));
	printf("\nEnter %d number of x values one by one : \n",n);
	for (i=0; i < n; i++) {
		scanf("%f", &x[i]);
	}
	//--------------------------------

	//Taking input for y values :
	float *y;
	y = (float *) calloc (n, n * sizeof(float));
	printf("\nEnter %d number of y values one by one : \n",n);
	for(i=0; i < n; i++) {
		scanf("%f", &y[i]);
	}
	//--------------------------------

	//Displaying the entered values :
	printf("\nYou have entered a table : \n");
	printf("x : ");
	for (i=0; i < n; i++) {
		printf("%.4f  ", x[i]);
	}
	printf("\ny : ");
	for (i=0; i < n; i++) {
		printf("%.4f  ", y[i]);
	}
	//--------------------------------

	//Read the number at which the value is to be known :
	float x_value;
	printf("\n\nEnter the x value at which the value is to be known : ");
	scanf("%f", &x_value);
	//--------------------------------
	
	//Calculating r and h value :
	float r, h;
	h = x[1] - x[0];
	r = (x_value - x[0])/h;
	printf("\nr = %.4f\tStep length : h = %.4f", r, h);
	//--------------------------------

	//Generating Newton's Gregory Forward Interpolation table :
	float delta_y[50][50] = {0}, result = 0;
	int j, k;
	for (i=0; i < n; i++) {
		for(j=0; j < n; j++) {
			delta_y[i][j] = y[i];
		}	
	}
	for (k=0; k < n; k++) {
		for (i=0; i < n; i++) {
			for (j=1; j < n; j++) {
				delta_y[i][j] = delta_y[i+1][j-1] - delta_y[i][j-1];
			}
		}
	}
	printf("\n\nThe Newton Forward Interpolation table is : \n\n");
	for (i=0; i < n; i++) {
		for (j=0; j < (n-i); j++) {
			printf("  %.4f  ", delta_y[i][j]);
		}
		printf("\n");
	}
	//--------------------------------

	//Calculating value at x :
	result = delta_y[0][0];
	for (j=1; j < n ; j++) {
		result += (r_calculate(r, j) * delta_y[0][j]) / fact(j);
	}
	//--------------------------------

	//Displaying the final result :
	printf("\nThe value at %.4f is %.4f\n\n", x_value, result);
	//--------------------------------

	return 0;
}

//Funtion calculates the value r(r-1)(r-2)... :
float r_calculate (float r, int n) {
	float result = r; 
    for (int i = 1; i < n; i++) {
        result = result * (r - i);
	}
    return result; 
}
//--------------------------------

//Function calculates the factorial required :
int fact (int n) {
	int fact = 1, i;
	for (i=1; i <= n; i++) {
		fact *= i;
	}
	return fact;
}
//--------------------------------
