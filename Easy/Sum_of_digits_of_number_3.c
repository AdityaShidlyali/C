//Palindrome Recursion Logic built by me

#include <stdio.h>

int sum_of_digits(int);

int main(){
    int a,rev;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("The sum of the digits is %d",sum_of_digits(a));
    return 0;
}

int sum_of_digits(int num){
    static int sum=0;
    sum+=(num%10);
    if(num!=0){
        return sum_of_digits(num/10);
    }
    return sum;    
}