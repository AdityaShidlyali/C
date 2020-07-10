//Power of number using looping constructs

#include <stdio.h>

int main(){
    int base,power,result=1;
    printf("Enter base : ");
    scanf("%d",&base);
    printf("Enter power : ");
    scanf("%d",&power);
    while(power!=0){
        result*=base;
        power--;
    }
    printf("The resultant is : %d",result);
    return 0;
}