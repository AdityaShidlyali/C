//By using looping construct

#include <stdio.h>

int main(){
    int i,n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (i=2; i<=n/2; i++) { //n/2 is to reduce cpu cycle however we can use i<n but not i<=n
        if (n%i == 0) {
            printf("Entered number is not prime number");
            return 0;
        }
    }
    printf("Entered number is a prime number ");
    return 0;
}
