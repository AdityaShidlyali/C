#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("Enter number of array elements : ");
	scanf("%d", &n);
	printf("Enter %d number of array elements : \n", n);
	int *a = (int *) calloc (n, n*sizeof(int));
	int i, sum = 0;
	for ( i = 0 ; i < n ; i++ ) {
		scanf("%d", &a[i]);
		sum += a[i];
	}
	printf("The sum of the all array elements is : %d", sum);
	return 0;
}
