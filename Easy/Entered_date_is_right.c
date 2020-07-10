//Program to check whether the entered day is correct or not

#include <stdio.h>

int main(){
    int day,month,year;
    int i=0,j=1;
    printf("Enter day month year in format of (dd/mm/yyyy) : \n");
    scanf("%d %d %d",&day,&month,&year);
    if(month==02){
        if(year%4==0){
            if(year%100==0){
                if(year%400==0){
                    printf("Entered date is correct and its leap year");
                }
            }
        }
    }
    else if(month!=02){
        if(month%2!=0&&month<8){
            if(day==31){
                printf("Entered date is correct");
            }           
            else{
                printf("Entered date is incorrect");
            }
        }
        if(month>=8){
            if(month%2==0){
                if(day==31){
                    printf("Entered date is correct");
                }
            }
        }
    }
    else{
        printf("Entered date is incorrect");
    }
    return 0;
}