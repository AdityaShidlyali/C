/*Program to convert octal to binary number
	First we need to convert octal number to decimal and decimal to binary
	Time Complexity is O(n)
*/

#include <stdio.h>
#include <math.h>

int main(){
	int oct_no,dec_no=0,bin_no=0,i=0;
	printf("Enter a octal number : ");
	scanf("%d",&oct_no);
	while(oct_no!=0){
		dec_no+=(oct_no%10)*pow(8,i);
		i++;
		oct_no/=10;
	}
	i=1;
	while(dec_no!=0){
		bin_no+=(dec_no%2)*i;
		i*=10;
		dec_no/=2;
	}
	printf("The equivalent binary number is : %d",bin_no);
	return 0;
}