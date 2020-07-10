#include <stdio.h>
int main() {
    int i, j, temp, min, n;
    printf("Enter the number of array elements : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d number of elements one by one : \n",n);
    i=0;
    while (i<n) {
        scanf("%d",&a[i]);
        i++;
    }
    printf("--Before Sort--\n");
    i=0;
    while (i<n) {
        printf("%d  ",a[i]);
        i++;
    }
    i=0;
    while (i<n) {
        min = i;
        j = i+1;
        while (j<n) {
            if (a[min] > a[j]) {
                min = j;
            }
            j++;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
        i++;
    }
    i = 0;
    printf("\n--After Sort--\n");
    while (i<n) {
        printf("%d  ",a[i]);
        i++;
    }    
    return 0;
}
