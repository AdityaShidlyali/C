/*

This sorting technique start with comparison of the first two elements

The bubble sort is the technique where the first two elements are compared and they are swapped their
location

This process continues till (n-1) times where n is the number of elements in array --> This is for Outer for loop
For inner for loop the process continues till j<(n-1-i)

*/
#include <stdio.h>

void swap (int *j, int *j_next) {
    int temp;
    temp = *j;
    *j = *j_next;
    *j_next = temp;
}

int main() {
    int n, i, j, a[10], temp;
    printf("Enter the number of array elements : ");
    scanf("%d",&n);
    printf("Enter the %d number of elements one by one : \n",n);
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    printf("--Before Sorting--\n");
    for (i=0; i<n; i++) {
        printf("%d  ",a[i]);
    }
    for (i=0; i<n-1; i++) {
        for (j=0; j<(n-1-i); j++) {
            if (a[j] > a[j+1]) {
                swap(&a[j], &a[j+1]);
            }
        }
    }
    printf("\n--After Sort-- \n");
    for (i=0; i<n; i++) {
        printf("%d  ",a[i]);
    }
    return 0;
}

