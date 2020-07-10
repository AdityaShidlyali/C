//Program to check whether the entered string is palindrome using built in function

#include <stdio.h>
#include <string.h>

int main() {
	char str[20], rev_str[20];
	printf("Enter a string : ");
	scanf("%s", str);
	
	strcpy(rev_str, str);
	strrev(rev_str);
	
	if (strcmpi(rev_str, str) == 0) {
		printf("Entered strings are palindrome");
	}
	else {
		printf("Entered strings are not palindrome");
	}
	return 0;
}
