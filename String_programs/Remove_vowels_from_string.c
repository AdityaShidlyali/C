//Program to remove all the vowels from string

#include <stdio.h>
#include <stdbool.h>

bool is_vowel(char ch) {
	switch (ch) {
		case 'a' :
		case 'e' :
		case 'i' :
		case 'o' :
		case 'u' :
		case 'A' :
		case 'E' :
		case 'I' :
		case 'O' :
		case 'U' :
			return true;
		default : return false;
	}
}

int main() {
	int i = 0, jump;
	char str[20], rem_str[10] = {0};
	printf("Enter a string to remove vowels : ");
	scanf("%s", str);
	for (jump = 0; str[jump] != '\0'; jump++) {
		if (is_vowel(str[jump]) == false) {
			rem_str[i] = str[jump];
			i++;
		}
	}
	rem_str[jump] = '\0';	
	printf("Resulting string is : %s", rem_str);
	return 0;
}
