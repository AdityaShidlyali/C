//Using Recursion logic 1

#include <stdio.h>

int power_of_number(int,int);

int main(){
    int base,power;
    printf("Enter base : ");
    scanf("%d",&base);
    printf("Enter power : ");
    scanf("%d",&power);
    printf("The resultant is %d",power_of_number(base,power));
    return 0;
}

int power_of_number(int base,int power){
    if(power!=0){
        return base * power_of_number(base,power-1);
    }
    else{
        return 1;
    }
}