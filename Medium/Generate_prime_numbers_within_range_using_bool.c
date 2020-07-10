//Generating prime numbers using boolean function

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
    int a,b;
    printf("Enter the starting value : ");
    scanf("%d",&a);
    printf("Enter the ending value : ");
    scanf("%d",&b);
    while(a<=b){
        if(is_prime(a)==true){
            printf("%d ",a);
        }
        a++;
    }
    return 0;
}