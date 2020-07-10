//By using recursion concept

#include <stdio.h>

int is_strong(int);
int factorial(int);

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(is_strong(n)==1){
        printf("Entered number is strong number");
    }
    else{
        printf("Entered number is not strong number");
    }
    return 0;
}

int is_strong(int n){
    static int sum=0;
    if(n!=0){
        sum+=factorial(n%10);
        is_strong(n/10);
    }
    if(sum==n){
        return 1;
    }
    return 0;
}

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}