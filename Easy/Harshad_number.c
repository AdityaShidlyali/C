/*
    Harshad number is number in which it is divisible by sum of
    digits of it
*/

#include <stdio.h>

int main(){
    int num,temp,sum=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    temp=num;
    while(num!=0){
        sum+=(num%10);
        num/=10;
    }
    if(temp%sum==0){
        printf("Harshad number");
    }
    else{
        printf("Not Harshad number");
    }
    return 0;
}