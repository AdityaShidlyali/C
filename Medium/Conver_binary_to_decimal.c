/*Program to convert a binary number into decimal number
    By using loops
*/

#include <stdio.h>
#include <math.h>

int main(){
    long int bin_no,dec_no=0,power_2=0,remainder;
    printf("Enter binary number : ");
    scanf("%ld",&bin_no);
    while(bin_no!=0){
        remainder=bin_no%10;
        bin_no/=10;
        dec_no+=remainder*pow(2,power_2);
        power_2++;        
    }
    printf("The equivalent decimal number is %ld",dec_no);
    return 0;
}