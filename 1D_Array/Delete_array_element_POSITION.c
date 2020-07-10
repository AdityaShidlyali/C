//Program to delete the array element based on position

#include <stdio.h>

int main(){
    int n,i,pos;
    printf("Enter number of array elements : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d number of elements : \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Your entered array list is : \n");
    for(i=0;i<n;i++){
        printf("%d | ",a[i]);
    }
    printf("\nEnter array index you want to delete the element : ");
    scanf("%d",&pos);
    for(i=pos-1;i<=n-1;i++){
        a[i]=a[i+1];
    }
    printf("The new array list is : \n");
    for(i=0;i<n-1;i++){
        printf("%d | ",a[i]);
    }
    return 0;
}