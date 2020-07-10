#include <stdio.h>
#include <stdbool.h>

bool is_prime(int);

int main(){
    int n,cnt=2,i;
    printf("Enter the number of prime numbers required : ");
    scanf("%d",&n);
    for(i=1;i<=n;){
        if(is_prime(cnt)==true){
            printf("%d  ",cnt);
            i++;
        }
        cnt++;
    }
    return 0;
}

bool is_prime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
