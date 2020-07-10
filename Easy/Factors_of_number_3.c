//Using recursion concept

#include <stdio.h>

void find_factors(int n,int i){
    if(i<=n&&n%i==0){
        printf("%d  ",i);
    }
    find_factors(n,i+1);
}

int main(){
    int n;
    printf("Enter a number to find its factors : ");
    scanf("%d",&n);
    printf("The factors are : \n");
    find_factors(n,1);
    return 0;
}