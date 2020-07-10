//Deleting the array element based on values

#include <stdio.h>

int main(){
    int n,key,pos,i;
    printf("Enter number of array elements :");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d number of elements : \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Your Entered array list is : \n");
    for(i=0;i<n;i++){
        printf("%d | ",a[i]);
    }
    printf("\nEnter the element you entered to delete : ");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
            pos=i;
            break;
        }
    }
    for(i=pos;i<=n-1;i++){
        a[i]=a[i+1];
    }
    printf("The new array list is : \n");
    for(i=0;i<n-1;i++){
        printf("%d | ",a[i]);
    }
    return 0;
}
