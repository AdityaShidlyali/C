#include <stdio.h>

int main(){
	char ch;
	printf("Enter a character : ");
	scanf("%c",&ch);
	if(ch>=97&&ch<=122){
		printf("Entered character is alphabet and is in Lowercase");
	}
	else if(ch>=65&&ch<=90){
		printf("Entered character is alphabet and is in Uppercase");
	}
	else if(ch>=49&&ch<=57){
		printf("Entered character is number");
	}
	else{
		printf("Entered character is special symbol");
	}
	return 0;
}