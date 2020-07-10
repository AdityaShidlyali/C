//Program to convert decimal to binary using array

#include <stdio.h>

int main(){
    int dec_no,bin_no[32],i;
    printf("Enter a decimal number : ");
    scanf("%d",&dec_no);
    for(i=0;dec_no!=0;i++){
        bin_no[i]=dec_no%2;
        dec_no/=2;
    }
    printf("The equivalent binary number is : ");
    for(i=i-1;i>=0;i--){
        printf("%d",bin_no[i]);
    }
    return 0;
}