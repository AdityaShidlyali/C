//Generate n armstrong numbers using boolean function

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_armstrong(int);

int main(){
    int n,cnt=1;
    printf("Enter number of armstrong numbers required : ");
    scanf("%d",&n);
    for(int i=0;i<=n;){
        if(is_armstrong(cnt)==true){
            printf("%d  ",cnt);
            i++;
        }
        cnt++;
    }
    return 0;
}

bool is_armstrong(int n){
    int sum=0,temp=n,no_digits=log10(n)+1,digit;
    while(n!=0){
        digit=n%10;
        sum=sum+pow(digit,no_digits);
        n/=10;
    }
    if(sum==temp){
        return true;
    }
    return false;
}