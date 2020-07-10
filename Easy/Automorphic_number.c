/*
    Automrphic number is that number in which the last digit of its square contains
    same number
*/

#include <stdio.h>

int main(){
    int n,square;
    printf("Enter a number : ");
    scanf("%d",&n);
    square=n*n;
    printf("%d",square);
    while(n!=0){
        if(square%10==n%10){
            printf("Entered number is automorphic");
            return 0;
        }
        n/=10;
    }
    printf("Entered number is not automorphic");
    return 0;
}