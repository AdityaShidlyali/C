//Program to calculate number of days in month and year

#include <stdio.h>

int main() {
	int year,month;
	printf("Enter month and year : \n");
	scanf("%d%d",&month,&year);
	if (month == 2 && year%4 == 0 || year%400 == 0 && year %100 == 0) {
		printf("number of days in month are 29");
	}
	else if (month == 1 || month == 3 || month == 5 || month ==7 || month == 8 || month == 10 || month == 12) {
		printf("Number of days in month are 31");
	}
	else if (month == 2) {
		printf("Number of days in month are 28");
	}
	else {
		printf("Number of days in month are 30");
	}
	return 0;
}