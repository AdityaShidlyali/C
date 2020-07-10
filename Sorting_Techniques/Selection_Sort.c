/*

The main logic is to take the first element as the smallest element and go on comparing the elements

If there found a smallest element in between the array then swap the elements

This cycle proceeds till (n-1) where n is the number of array elements

*/
#include <stdio.h>

int main() {
    int i, j, n, temp, min;
    printf("Enter number of array elements :");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d array elements one by one : \n",n);
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    printf("--Before sort-- \n");
    for (i=0; i<n; i++) {
        printf("%d  ",a[i]);
    }
    for (i=0; i<n; i++) {
        min = i; // Selecting the minimum value
        for (j=i+1 ;j<n; j++) {
            if (a[min] > a[j]) { // Checking and Changing the minimum value if any in array
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    printf("\n--After sort-- \n");
    for (i=0; i<n; i++) {
        printf("%d  ",a[i]);
    }
    return 0;
}
