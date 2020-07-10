//Program to sort the string using bubble sort

#include <stdio.h>

int main() {
	char str[20], temp;
	int i, j;
	printf("Enter a string to sort : ");
	scanf("%s", str);
	for (i=0; str[i] != '\0'; i++) {
		for (j=i+1; str[j] != '\0'; j++) {
			if (str[i] > str[j]) {
				temp = str[i];
				str[i] =str[j];
				str[j] = temp;
			}
		}
	}
	printf("Sorted string is : %s", str);
	return 0;
}
