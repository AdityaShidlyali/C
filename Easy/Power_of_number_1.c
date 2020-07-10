//Poer of number using power function

#include <stdio.h>
#include <math.h>

int main(){
    int base,power;
    printf("Enter base number : ");
    scanf("%d",&base);
    printf("Enter power : ");
    scanf("%d",&power);
    int result=pow(base,power);
    printf("The value %d ^ %d is %d",base,power,result);
    return 0;
}