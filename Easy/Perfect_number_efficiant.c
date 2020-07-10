//By using boolean function

#include <stdio.h>
#include <stdbool.h>

bool is_perfect(int n){
    int sum=1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            if(i*i!=n){
                sum += i+n/i;
            }
            else{
                sum+=i;
            }
        }
    }
    if(sum==n&&n!=1){
        return true;
    }
    return false;
}

int main(){
    int n;
    printf("Enter the number of perfect numbers : ");
    scanf("%d",&n);
    if(is_perfect(n)){
        printf("Entered number is perfect number");
    }
    else{
        printf("Entered number is not perfect number");
    }
    return 0;
}