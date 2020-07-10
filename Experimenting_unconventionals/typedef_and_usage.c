/*

NOTE : Its the program only to understand how to we can use the typedef keyword
In this program i have decleared the typedef as int_variable and i have used the int_variable to
initialize the integer variable required in this program
NOTE : You can creat typedef not only for int you can create for float double char etc..

Program is to find the key element and its position of n array integer elements using binary search

For BINARY SEARCH algorithm the condition is the array elements should be in the sorted order in ascending

*/

#include <stdio.h>
int main(){
    typedef int int_variables;
    int_variables a[10],b[10]={0},n,i,key,low,high,min,j,temp,mid;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the elements one by one : \n");
    //Taking the elements from the user for array a
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=a[i]; //I have assigned all the elements to array b
    }
    //I have sorted the elements in ascending order for array a (selections sort)
    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[min]>a[j]){
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    //Searching the key element applying the binary search element
    printf("Enter the key element to search : ");
    scanf("%d",&key);
    low=0;
    high=n-1;
    mid=(low+high)/2;
    for(;low<=high;mid=(low+high)/2){
        for(i=0;i<n;i++){
            if(b[i]==key){
                printf("The element %d is found at position %d",key,i);
                return 0;
            }
        }
        if(a[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    printf("The element %d is not found",key);
    return 0;
}