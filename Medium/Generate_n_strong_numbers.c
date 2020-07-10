//Generate n strong numbers using boolean function

#include <stdio.h>
#include <stdbool.h>

bool is_strong(int);
int factorial(int);

int main(){
    int n,cnt=1;
    printf("Enter number of strong numbers required");
    scanf("%d",&n);
    for(int i=0;i<n;){
        if(is_strong(cnt)==true){
            printf("%d  ",cnt);
            i++;
        }
        cnt++;
    }
}

bool is_strong(int n){
    int sum=0,temp=n;
    while(n!=0){
        sum+=factorial(n%10);
        n/=10;
    }
    if(sum==temp){
        return true;
    }
    return false;
}

int factorial(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}