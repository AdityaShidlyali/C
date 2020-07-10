//Find the factors of number using loop

#include <stdio.h>

int main(){
    int n;
    printf("Enter a number to find its factors :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf("%d  ",i);
        }
    }
    return 0;
}