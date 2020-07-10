//Program to check whether the entered number can be expressed as sum of two prime numbers

#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++){
        if(is_prime(i)==true){
            if(is_prime(n-i)==true){
                printf("Entered number can be expressed as sum of two prime numbers");
                return 0;
            }
        }
    }
    printf("Entered number cannot be expressed as sum of two prime numbers");
    return 0;
}