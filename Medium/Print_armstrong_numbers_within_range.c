//Print the armstrong number within given range

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_armstrong(int);

int main(){
    int start,end;
    printf("Enter the start point : ");
    scanf("%d",&start);
    printf("Enter end point : ");
    scanf("%d",&end);
    while(start<=end){
        if(is_armstrong(start)==true){
            printf("%d  ",start);
        }
        start++;
    }
    return 0;
}

bool is_armstrong(int n){
    int sum=0,no_digits=log10(n)+1,temp=n;
    while(n!=0){
        sum+=pow(n%10,no_digits);
        n/=10;
    }
    if(sum==temp){
        return true;
    }
    return false;
}