#include <stdio.h>

int is_prime(int);

int main(){
    int i,n,cnt=2;
    printf("Enter number of prime numbers required : ");
    scanf("%d",&n);
    for(i=1;i<=n;){
        if(is_prime(cnt)!=0){
            printf("%d  ",cnt);
            i++;
        }
        cnt++;
    }
    return 0;
}

int is_prime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
