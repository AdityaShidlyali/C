//By Switch and Case method

#include <stdio.h>

void vow_or_cons(char c);

int main(){
	char ch;
	printf("Enter a character : ");
	scanf("%c",&ch);
	vow_or_cons(ch);
	return 0;
}

void vow_or_cons(char ch){
	switch(ch){
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U': printf("Entered character is Vowel");
		break;
		default : printf("Entered character is Consonent");
	}
}
