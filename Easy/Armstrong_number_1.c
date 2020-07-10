/*Armstrong number using math functions (Time Complexity O(n))
    Armstrong number is each digits in number is multiplied with the number of digits 
    and added if we get the same number the its armstrong number.
*/

#include <stdio.h>
#include <math.h>

int main(){
    int n,no_digits,sum=0,temp,digit;
    printf("Enter a number : ");
    scanf("%d",&n);
    no_digits=log10(n)+1;
    temp=n;
    while(n!=0){
        digit=n%10;
        sum+=pow(digit,no_digits);
        n=n/10;
    }
    if(sum==temp){
        printf("Entered number is armstrong");
    }
    else{
        printf("Entered number is not armstrong");
    }
    return 0;
}