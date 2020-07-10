//Program to find the modulus without using modulo operator

#include <stdio.h>

int main() {
	int n1, n2;
	printf("Enter two numbers to find the modulo : \n");
	scnaf("%d%d", &n1, &n2);
	while ( n1 >= n2 ) {
		n1 = n1 - n2;
	}
	print("The modulus is : %d", n1);
}
