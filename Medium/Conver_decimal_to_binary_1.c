//Program to convert decimal to binary

#include <stdio.h>

int main(){
    int dec_no,bin_no=0,remainder,i=1;
    printf("Enter a decimal number : ");
    scanf("%d",&dec_no);
    while(dec_no!=0){
        bin_no+=(dec+no%2)*i;
		i*=10;
		dec_no/=2;
    }
    printf("Equivalent binary number is : %d",bin_no);
    return 0;
}