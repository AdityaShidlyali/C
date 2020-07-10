//By using function and looping construct

#include <stdio.h>

void is_prime(int);

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    is_prime(n);
    return 0;
}

void is_prime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            printf("Entered number is not a prime number");
            return;
        }
    }
    printf("Entered number is prime");
}
