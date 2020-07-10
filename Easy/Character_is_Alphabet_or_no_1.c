/*By inbuilt function
	By using built in character function isalpha()
*/

#include <stdio.h>
#include <ctype.h>

int main(){
	char ch;
	printf("Enter a character : ");
	scanf("%c",&ch);
	if (isalpha(ch)!=0){
		printf("Entered character is alphabet ");
	}
	else{
		printf("Entered character is not alphabet");
	}
	return 0;
}