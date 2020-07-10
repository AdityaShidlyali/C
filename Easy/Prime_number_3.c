/*By using looping constructs
    Perfect number is number which sum of its all factors(and except number)
    gives the number itself
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
    if(sum==n){
        printf("Entered number is perfect number");
    }
    else{
        printf("Entered number is not perfect number");
    }
    return 0;
}