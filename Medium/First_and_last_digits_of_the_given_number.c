//Print first and last digit of the given number
#include <stdio.h>
#include <math.h>

int main() {
    int f=0, l=0, n=0, c=0;
    printf("Enter an integer : ");
    scanf("%d",&n);
    f = n;
    l = n%10;
    printf("\nThe last digit is : %d",l);
    //THE FIRST LOGIC TO FIND THE FIRST DIGIT OF THE NUMBER
    while (n != 0) {
       n /= 10;
       c++;
    }
    c = c-1;
    f = f / (pow(10,c));
    //OR YOU CAN DO IT LIKE THIS TO FIND FIRST DIGIT
//    c=log10(n);
//    f=n/pow(10,c);
    printf("\nThe first digit is : %d\n",f);
    return 0;
}
