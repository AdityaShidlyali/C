//By using recursion concept

#include <stdio.h>

int sum_range(int,int);

int main(){
    int start,end;
    printf("Enter start number : ");
    scanf("%d",&start);
    printf("Enter end point : ");
    scanf("%d",&end);
    printf("The sum between the range %d and %d is %d",start,end,sum_range(start,end));
    return 0;
}

int sum_range(int start,int end){
    if(start==end+1){
        return 0;
    }
    else{
        return start + sum_range(start+1,end);
    }
}