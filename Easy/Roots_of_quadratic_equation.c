//Program which calculates roots for only quadratic equation

#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c,root1,root2,real,imag,numr;
    printf("Enter three non zero coefficiants : \n");
    scanf("%f%f%f",&a,&b,&c);
    if ((a==0) && (b==0)) {
        printf("Invalid Coefficiants ! ");
        printf("Try agian with the valid integer !");
    }
    else if (a == 0) {
        printf("Linear Equation \n");
        root1 = (-c) / b;
        printf("Root 1 = %f",root1);
    }
    else {
        numr = b*b-4*a*c;
        if (numr == 0) {
            printf("The roots are equal \n");
            printf("Root 1 = Root 2 = %f",-b/(2*a));
        }
        else if (numr > 0) {
            printf("The roots are real and distinct \n");
            root1 = (-b+sqrt(numr)) / (2*a);
            root2 = (-b-sqrt(numr)) / (2*a);
            printf("Root 1 = %f\nRoot 2 = %f",root1,root2);
        }
        else {
            printf("The roots are imaginary \n");
            real = -b / (2*a);
            imag = sqrt(fabs(numr)) / (2*a);
            printf("Root 1 = %f + i%f\n",real,imag);
            printf("Root 2 = %f + i%f\n",real,imag);
        }
    }
    return 0;
}
