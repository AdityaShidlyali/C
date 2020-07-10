//Program to check for the palindrome of the string without using built in fuction

#include <stdio.h>

int main() {
	int i = 0, count = 0, flag = 0;
	char str[20];
	printf("Enter a string : ");
	scanf("%s", str);
	while (str[i] != '\0') {
		count++;
		i++;
	}
	i = 0;
	while (str[i] != '\0') {
		if ((str[i] == str[count-1]) == 0) {
			flag = 0;
		}
		else {
			flag = 1;
		}
		i++;
		count--;
	}
	if (flag == 1) {
		printf("Entered string is palindrome");
	}
	else {
		printf("Entered string is not palindrome");
	}
	return 0;
}
