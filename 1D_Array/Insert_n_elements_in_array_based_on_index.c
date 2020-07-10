#include <stdio.h>
#include <stdlib.h>

int main() {
	//Take input from the user
	int n, *arr;
	printf("Enter the number of elements : ");
	scanf("%d", &n);
	//------------------------

	//Assign memory based number of elements
	arr = (int *) calloc (n, n * sizeof(int));
	printf("Enter %d number of elements one by one : \n", n);
	for (int i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	//------------------------
	
	//Taking the input from the user to insert element and reallocate the memory
	int key, ind, no_ele;
	printf("Enter number of elements you want to insert : ");
	scanf("%d", &no_ele);
	arr = (void *) realloc (arr, no_ele * sizeof(int));
	//------------------------

	//takin the extra n elements in other array ext 
	int *ext;
	ext = (int *) calloc (no_ele, no_ele * sizeof(int));
	printf("Enter the %d number of elements you want to insert : \n",no_ele);
	for (int i=0; i<no_ele; i++){
		scanf("%d", &ext[i]);
	}
	//------------------------

	//Inputting the index from user to insert above elements in previous elements
	printf("Enter the index you want to insert : ");
	scanf("%d", &ind);
	n += no_ele;
	for (int i=n; i!=ind; i--) {
		arr[i] = arr[i-no_ele];
	}
	for (int i=ind,j=0; i<ind+no_ele; i++,j++) {
		arr[i] = ext[j];
	}
	printf("The new array list is : \n");
	for (int i=0; i<n; i++) {
		printf("%d  ",arr[i]);
	}	
	//------------------------

	return 0;
	
}