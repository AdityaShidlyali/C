/*Program to count the number of times 3 has occured in digit
	Time complexity is O(n)
*/

#include <stdio.h>

int count_3s (int n) {
	int count = 0;
	while (n != 0) {
		if (n%10 == 3) {
			count++;
		}
		n /= 10;
	}
	return count;
}

int count_in_range (int n) {
	int count = 0;
	for (int i=2; i<=n; i++){
		count += count_3s(i);
	}
	return count;
}

int main() {
	int n;
	printf("Enter end value : ");
	scanf("%d", &n);
	printf("The number of times the 3 has occured in range 0 to %d is %d", n, count_in_range(n));
	return 0;
}