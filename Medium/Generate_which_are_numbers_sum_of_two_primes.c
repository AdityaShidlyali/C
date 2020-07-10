//Generate n numbers which can be expressed as sum of two prime numbers

#include <stdio.h>
#include <stdbool.h>

int sum_of_two_primes(int);
bool is_prime(int);

int main(){
    int n,cnt=1;
    printf("Enter the number of numbers which can be expressed as sum of two primes : ");
    scanf("%d",&n);
    for(int i=0;i<n;){
        if(sum_of_two_primes(cnt)==1){
            printf("%d  ",cnt);
            i++;
        }
        cnt++;
    }
    return 0;
}

int sum_of_two_primes(int n){
    int i;
    for(i=2;i<=n/2;i++){
        if(is_prime(i)==true){
            if(is_prime(n-i)==true){
                return 1;
            }
        }
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