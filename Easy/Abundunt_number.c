/* Abundant number is that number whose sum of its all factors is greater than number itself
*/

#include <stdio.h>

int main(){
    int n,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(n<sum){
        printf("Abundant Number");
    }
    else{
        printf("Not Abundunt Number");
    }
    return 0;
}