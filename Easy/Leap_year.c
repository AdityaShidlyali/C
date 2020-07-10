//Program to check wheteher the entered year is leap year or not

#include <stdio.h>

int main(){
    int year;
    printf("Enter a year : ");
    scanf("%d",&year);
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                printf("The entered year leap year");
            }
            else{
                printf("The entered year is not leap year");
            }
        }
        else{
            printf("The entered year is leap year");
        }
    }
    else{
        printf("Entered year is not leap year");
    }
    return 0;
}