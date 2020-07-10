/*Program to check for strong number or not
    Strong number is which sum of the factorial of each digit of given number gives
    the same entered value
*/

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
    int sum=0,temp=n;
    while(n!=0){
        sum+=factorial(n%10);
        n/=10;
    }
    if(sum==temp){
        return 1;
    }
    return 0;
}

int factorial(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}