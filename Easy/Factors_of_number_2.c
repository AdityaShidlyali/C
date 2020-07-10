//Efficiant program to find factors of number

#include <stdio.h>
#include <math.h>

void find_factor(int n){
    printf("The factors are : \n");
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(n/i==i){
                printf("  %d  ",i);
            }
            else{
                printf("%d  %d  ",i,n/i);
            }
        }
    }
}

int main(){
    int n;
    printf("Enter a number to find its factors : ");
    scanf("%d",&n);
    find_factor(n);
    return 0;
}