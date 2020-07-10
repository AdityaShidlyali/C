#include <stdio.h>
#include <stdbool.h>

int length(char *str) {
	int i = 0, count = 0;
	while (str[i] != '\0') {
		count++;
		i++;
	}
	return count;
}

bool compare(char *str1, char *str2) {
	int i = 0, count1 = 0, count2 = 0;
	while (str1[i] != '\0') {
		if (str1[i] != str2[i])	{
			return false;
		}
		i++;
	}
	return true;
}

void rotate(char *str1, int len) {
	char temp = str1[0];
	int i;
	for(i=0; i<len-1; i++) {
		str1[i] = str1[i+1];
	}
	str1[len - 1] = temp;
}

int main() {
	char str1[100];
	char str2[100];
	
	printf("Enter first string : ");
	scanf("%s", str1);
	printf("Enter second string : ");
	scanf("%s", str2);
	
	int len_str1 = length(str1);
	int len_str2 = length(str2);
	
	if (len_str1 != len_str2) {
		printf("Enter strings of same length");
	}
	else {
		int flag = 0, i;
		for (i=0; i<len_str1; i++) {
			if (compare(str1, str2) == true) {
				flag = 1;
				break;
			}
			rotate(str1, len_str1);
		}
		
		if (flag == 1) {
			printf("Entered strings are the rotations of each other");
		}
		else {
			printf("Entered strings are not the rotations of each other");
		}
	}
		
	return 0;
}
