/*Palindrome through looping construct (TIME Complexity = O(n))
    Palindrome number means if we reverse a number then it gives the equal value.
*/
#include <stdio.h>

int main(){
    int n,sum=0,rev=0,temp;
    printf("Enter a number : ");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        rev=rev*10+(n%10);
        n/=10;
    }
    if(rev==temp){
        printf("Entered number is palindrome");
    }
    else{
        printf("Entered number is not palindrome");
    }
    return 0;
}