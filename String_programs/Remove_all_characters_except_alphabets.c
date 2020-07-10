//Program to remove all the characters of string except alphabets

#include <stdio.h>

int main() {
	char str[50];
	int i, j;
	printf("Enter a string : ");
	scanf("%s", str);
	for ( i = 0 ; str[i] != '\0' ; i++ ) {
		while ( ! (  (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] == '\0')) {
			for ( j = i ; str[j] != '\0' ; j++ ) {
				str[j] = str[j+1];
			}
			str[j] = '\0';
		}
	}
	printf("The resulting string is %s", str);
	return 0;
}
