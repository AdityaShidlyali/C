//Program to convert the string to toggled string using pointer concept

#include <stdio.h>

void toggle_string(char *p) {
	while (*p != '\0') {
		if (*p >= 'a' && *p <= 'z') {
			*p = *p - 32;
		}
		else if (*p >= 'A' && *p <='Z') {
			*p = *p + 32;
		}
		p++;
	}
	//You can print toggled string here but need to apply loop to get the characters
}

int main() {
	char str[20];
	printf("Enter a string to toggle : ");
	scanf("%s", str);
	toggle_string(str);
	printf("Toggled string is : %s", str); //prints correct because we have passed the addres of the entire string array
	return 0;
}
