/*Program to replace the zero with 1 in entred digit
    By recursion concept
*/

#include <stdio.h>

int replace_zero(int);
int replace_zero_rec(int);

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("The new digit with replace zeros is %d",replace_zero(n));
    return 0;
}

int replace_zero(int n){
    if(n==0){
        return 1;
    }
    else{
        replace_zero_rec(n);
    }
}

int replace_zero_rec(int n){
    if(n==0){
        return 0;
    }
    int digit=n%10;
    if(digit==0){
        digit=1;
    }
    return replace_zero(n/10)*10+digit;
}