//Program to convert octal number to decimal number

#include <stdio.h>
#include <math.h>

int main(){
	int oct_no,dec_no=0,i=0;
	printf("Enter octal number : ");
	scanf("%d",&oct_no);
	while(oct_no!=0){
		dec_no+=(oct_no%10)*pow(8,i);
		i++;
		oct_no/=10;
	}
	printf("The equivalent decimal number is : %d",dec_no);
	return 0;
}