//Generate n abundant numbers

#include <stdio.h>
#include <stdbool.h>

bool is_abundant(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(n<sum){
        return true;
    }
    return false;
}

int main(){
    int n,cnt=1,i;
    printf("Enter number of abundant numbers required : ");
    scanf("%d",&n);
    for(i=0;i<n;){
        if(is_abundant(cnt)==true){
            printf("%d  ",cnt);
            i++;
        }
        cnt++;
    }
    return 0;
}