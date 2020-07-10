/*Program to calculate number of handshakes
	Formula to calculate (n*(n-1))/2 number	of handshakes
	In the form of nC2 (Combination)
*/

#include <stdio.h>

int main(){
	int no_ppl,hnd_shks=0;
	printf("Enter number of people : ");
	scanf("%d",&no_ppl);
	hnd_shks = ((no_ppl)*(no_ppl-1))/2;
	printf("Total number of handshakes are %d", hnd_shks);
	return 0;
}
