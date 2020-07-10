//It gives ERROR of implicit declearation
//But run it it will work
//Program to toggle string using built in function

#include <stdio.h>
#include <string.h>

int main() {
	int i = 0;
	char str[20];
	printf("Enter a string : ");
	scanf("%s", str);
	while (str[i] != '\0') {
		if (islower(str[i]) != 0) {
			str[i] = toupper(str[i]);
		}
		else {
			str[i] = tolower(str[i]);
		}
		i++;
	}
	printf("Toggled string is : %s", str);
	return 0;
}
