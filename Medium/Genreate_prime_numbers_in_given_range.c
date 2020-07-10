//Generating prime numbers within range

#include <stdio.h>

int is_prime(int);

int main() {
    int a,b,i,flag;
    printf("Enter the starting point : ");
    scanf("%d",&a);
    printf("Enter the ending point : ");
    scanf("%d",&b);
    printf("Prime numbers between %d and %d are : \n",a,b);
    while(a<b) {
        if(is_prime(a)==1) {
            printf("%d ",a);
        }
        a++;
    }
    return 0;
}

int is_prime(int n) {
    for(int i=2; i<=n/2; i++) {
        if(n%i==0) {
            return 0;
        }
    }
    return 1;
}
