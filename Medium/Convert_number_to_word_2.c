//Program to convert number to words (my logic)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	char num[10],
		 *unit[] = { "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
					 "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" },
		
		 *tens[] = { "", "twenty", "thirty", "fourty", "fifity", "sixty", "seventy", "eighty", "ninety" };

	printf("Enter a number from 1 to 99 : ");
	scanf("%s", num);
	char *i = num;
	int no_digits = log10 (atoi(i)) + 1;	

	if (atoi(i) == 0){
		printf("You entered : zero");
		return 0;
	}
	else {
		while (*i != '\0') {
			if (atoi(i) >= 1 && atoi(i) <= 19) {
				printf("You have entered : %s", unit[atoi(i)]);
				return 0;
			}
			else if (atoi(i) >=20 && atoi(i) <= 99) {
				printf("You have entered : %s %s", tens[atoi(i) / 10 - 1], unit[atoi(i) % 10]);
				return 0;
			}
			else if (no_digits == 3) {
				int tenth_digit = (atoi(i) / 10) % 10;
				printf("You have entered : %s hundred %s %s", unit[atoi(i) / 100], tens[tenth_digit - 1], unit[atoi(i) % 10]);
				return 0;
			}
			i++;
		}
	}
	return 0;
}