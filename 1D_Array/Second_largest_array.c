//Second largest element in the array list

#include <stdio.h>

int main(){
    int i,size,large,sec_large;
    printf("Enter the number of elements : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d number of elements : \n",size);
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    large=arr[0];
    for(i=0;i<size;i++){
        if(large<arr[i]){
            large=arr[i];
        }
    }
    printf("\nThe largest element is %d",large);
    sec_large=arr[0];
    for(i=0;i<size;i++){
        if(arr[i]!=large&&arr[i]>sec_large){
            sec_large=arr[i];
        }
    }
    printf("\nThe second large element is %d\n",sec_large);
    return 0;
}
