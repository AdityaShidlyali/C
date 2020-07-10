/*
Program to search element in the array using the LINEAR SEARCH algorithm
*/

#include <stdio.h>

int main() {
    int a[10], i, key, n, flag=0;
    printf("Enter the number of array elements : ");
    scanf("%d",&n);
    printf("Enter %d number of elements one by one : \n",n);
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    printf("Enter the key element to search : ");
    scanf("%d",&key);
    for(i=0; i<n; i++) {
        if(a[i] == key) {
            flag = 1;
            break;
        }
    }
    if(flag == 1) {
        printf("The element %d is found at position %d",key,i);
    }
    else {
        printf("The element %d is not found",key);
    }
    return 0;
}
