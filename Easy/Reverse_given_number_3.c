//By using another recursion concept to reverse a number

#include <stdio.h>

int reverse(int num){
    static int rev=0;
    if(num!=0){
        rev=rev*10+(num%10);
        return reverse(num/10);
    }
    else{
        return rev;
    }
}

int main(){
    int num;
    printf("Enter a number to reverse : ");
    scanf("%d",&num);
    printf("The reversed number is : %d",reverse(num));
    return 0;
}