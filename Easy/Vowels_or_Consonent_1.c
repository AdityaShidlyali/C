//If else method

#include <stdio.h>

int main(){
	char c;
	printf("Enter a character : ");
	scanf("%c",&c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
		printf("Entered character is Vowel");
	}
	else{
		printf("Entered character is Consonent");
	}
	return 0;
}