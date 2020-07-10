/*

Page 15 Q : 1.12

Program to find the sum of the series 1! + 2! + 3! + 4! + 5!.... N 

The main logic is to iterate the i value for the for 1,2,3,...N and
    j to iterate the value and find the factoraial of the each value of i as i goes on changing

*/

#include <stdio.h>
int main() {
    int n, i, j, fact, sum=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for (i=1; i<=n; i++) {
        for (j=1, fact=1; j<=i; j++) {
            fact = fact*j;
        }
        sum = sum + fact;
    }
    printf("The result is : %d",sum);
    return 0;
}
