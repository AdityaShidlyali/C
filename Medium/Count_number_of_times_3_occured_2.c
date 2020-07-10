//Program to calclulate number 3 has occured in range (my logic)

#include <stdio.h>

int main() {
	int n,count=0,temp;
	printf("Enter end value : ");
	scanf("%d", &n);
	for (int i=2; i<=n; i++) {
		temp = i;
		while (temp != 0) {
			if(temp%10 == 3) {
				count++;
			}
			temp /= 10;
		}
	}
	printf("The number of time 3 occered in range 0 to %d is %d", n, count);
	return 0;
}