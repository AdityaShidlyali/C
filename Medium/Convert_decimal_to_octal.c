//Program to convert decimal number to ocatl number

#include <stdio.h>

int main(){
	int dec_no,oct_no=0,i=1;
	printf("Enter a decimal number : ");
	scanf("%d",&dec_no);
	while(dec_no!=0){
		oct_no+=(dec_no%8)*i;
		i*=10;
		dec_no/=8;
	}
	printf("The equivalent octal number is : %d",oct_no);
	return 0;
}