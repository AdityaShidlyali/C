//Generate n palindrome numbers using bool function

#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(int);

int main(){
    int n,cnt=1,i;
    printf("Enter number of palindrome numbers required : ");
    scanf("%d",&n);
    for(i=0;i<n;){
        if(is_palindrome(cnt)==true){
            printf("%d  ",cnt);
            i++;
        }
        cnt++;
    }
    return 0;
}

bool is_palindrome(int n){
    int rev=0,temp=n;
    while(n!=0){
        rev=rev*10+(n%10);
        n/=10;
    }
    if(temp==rev){
        return true;
    }
    return false;
}