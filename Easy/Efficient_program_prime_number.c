//Efficient program to find number is prime or not

#include <stdio.h>

int main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    for ( int i = 2 ; i <= sqrt(n) ; i++ ) {
        if ( n%i == 0 ) {
            printf("Not a prime number");
            return 0;
        }
    }
    printf("Prime number");
    return 0;
}

