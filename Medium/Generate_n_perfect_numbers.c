//Program to generate n perfect numbers

#include <stdio.h>
#include <stdbool.h>

bool perfect_number(int);

int main(){
    int n,i,jump=1;
    printf("Enter how many perfect numbers you want : ");
    scanf("%d",&n);
    printf("The perfect numbers are : \n");
    for(i=0;i<n;){
        if(perfect_number(jump)){
            printf("%d ",jump);
            i++;
        }
        jump++;
    }
    return 0;
}

bool perfect_number(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(n==sum){
        return true;
    }
    else{
        return false;
    }
}