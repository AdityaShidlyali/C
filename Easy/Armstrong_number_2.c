//By using recursion

#include <stdio.h>
#include <math.h>

int is_armstrong(int,int);

int main(){
    int n,no_digits;
    printf("Enter a number : ");
    scanf("%d",&n);
    no_digits=floor(log10(n))+1;
    if(is_armstrong(n,no_digits)==1){
        printf("Entered number is armstrong");
    }
    else{
        printf("Entered number is not armstrong");
    }
    return 0;
}

int is_armstrong(int n,int no_digits){
    static int sum=0;
    if(n!=0){
        sum=sum+(pow(n%10,no_digits));
        is_armstrong(n/10,no_digits);        
    }
    if(sum==n){
        return 1;
    }
    return 0;
}