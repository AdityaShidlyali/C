/*Friendly pair is that pair of number if they are perfect numbers
*/

#include <stdio.h>

int main(){
    int sum1=0,num1,sum2=0,num2,i;
    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Entere second number : ");
    scanf("%d",&num2);
    for(i=1;i<num1;i++){
        if(num1%i==0){
            sum1+=i;
        }
    }
    for(i=1;i<num2;i++){
        if(num2%i==0){
            sum2+=i;
        }
    }
    if(sum1==num1 && sum2==num2){
        printf("A Friendly pair");
    }
    else{
        printf("Not a Friendly pair");
    }
    return 0;
}