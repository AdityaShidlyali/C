/*By comparing with characters
	comparing the character by alphabet range like [a,z]
*/

#include <stdio.h>

int main(){
	char ch;
	printf("Enter a character : ");
	scanf("%c",&ch);
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
		printf("Entered character is an alphabet ");
	}
	else{
		printf("Entred character is not an alphabet");
	}
	return 0;
}