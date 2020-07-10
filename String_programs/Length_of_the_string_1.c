/* Program to find the length of the string without using built in
	strlen function using (ointer concept)
*/

#include <stdio.h>

int str_length(char *p) {
	int count = 0;
	while (*p != '\0') {
		count++;
		p++;
	}
	return count;
}

int main() {
	char str[20]; int length;
	printf("Enter a string : ");
	gets(str);
	length = str_length(str);
	printf("The length of the string is : %d", length);
	return 0;
}
