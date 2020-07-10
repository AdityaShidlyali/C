//Palindrome through boolean function recursion

#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(int);

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(is_palindrome(n)==true){
        printf("Entered number is palindrome");
    }
    else{
        printf("Entered number is not palindrome");
    }
    return 0;
}

bool is_palindrome(int n){
    static int rev=0;
    if(n!=0){
        rev=rev*10+(n%10);
        is_palindrome(n/10);
    }
    if(rev==n){
        return true;
    }
    return false;
}