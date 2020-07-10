/*By comparing with ASCII values
	the ASCII values of uppercase alphabets are [65,90] and
	for lowercase alphabets are [97,122]
*/

#include <stdio.h>

int main(){
	char ch;
	printf("Enter a character : ");
	scanf("%c",&ch);
	if((ch>=97&&ch<=122)||(ch>=65&&ch<=90)){
		printf("Entered character is alphabet");
	}
	else{
		printf("Entered character is not alphabet");
	}
	return 0;
}