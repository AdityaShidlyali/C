/*Program to check whether the enterd number is perfect or no
    Perfect number is
*/

#include <stdio.h>

int main(){
    int num,sum=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num){
        printf("Entered number is perfect number");
    }
    else{
        printf("Entered number is not perfect number");
    }
    return 0;
}