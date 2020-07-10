/*Program to convert binary to octal
	First we need to convert binary decimal then decimal to octal
*/

#include <stdio.h>
#include <math.h>

int main(){
	int oct_no=0,dec_no=0,bin_no,i=0;
	printf("Enter a binary number : ");
	scanf("%d",&bin_no);
	while(bin_no!=0){
		dec_no+=(bin_no%10)*pow(2,i);
		i++;
		bin_no/=10;
	}
	i=1;
	while(dec_no!=0){
		oct_no+=(dec_no%8)*i;
		i*=10;
		dec_no/=8;
	}
	printf("Equivalent octal number is : %d",oct_no);
	return 0;
}