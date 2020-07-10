//Program to count the number of vowels and consonents
//It can also be done using if else statement

#include <stdio.h>
#include <string.h>

void count(char *p) {
	int vowels = 0, consonents = 0;
	while (*p != '\0') {
		switch (*p) {
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
				vowels++;
				break;
			default : consonents++;
		}
		p++;
	}
	printf("Number of vowels : %d\nNumber of consonents : %d", vowels, consonents);
}

int main() {
	char str[20];
	printf("Enter a string : ");
	scanf("%s", str);
	count(str);
	return 0;
}
