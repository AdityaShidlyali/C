/*
    Program to sort the even number(th) row in ascending order and
    odd number(th) row in descending order
*/

#include <stdio.h>

int m, n;

void sort_ascending (int sub_array[n], int);
void sort_descending (int sub_array[n], int);
void assign_values (int sub_array[n], int arr[m][n], int, int);

int main() {

    //Ask the user to input number of rows and column
	printf("Enter number of rows : ");
	scanf("%d", &m);
	printf("Enter number of columns : ");
	scanf("%d", &n);
	printf("Enter matrix of order %d\n", m*n);
	//---------------------------

	//Initialize array
	int arr[m][n], i, j;
	//---------------------------

    //Take input of array from user
	for ( i = 0 ; i < m ; i++ ) {
		for ( j = 0 ; j < n ; j++ ) {
			scanf("%d", &arr[i][j]);
		}
	}
	//---------------------------

	//Take the input of the array
	printf("Your entered matrix is : \n");
	for ( i = 0 ; i < m ; i++ ) {
		for ( j = 0 ; j < n ; j++ ) {
			printf("%d  ", arr[i][j]);
		}
		printf("\n");
	}
	//---------------------------

    //Main logic
	for ( i = 0 ; i < m ; i++ ) {
		if ( (i+1)%2 == 0 ) {
            int sub_arr[n];
			for ( int k = 0 ; k < n ; k++ ) {
                sub_arr[k] = arr[i][k];
            }
            sort_ascending (sub_arr, n);
            assign_values (sub_arr, arr, i, n);
		}
		else {
            int sub_arr[n];
            for ( int k = 0 ; k < n ; k++ ) {
                sub_arr[k] = arr[i][k];
            }
            sort_descending (sub_arr, n);
            assign_values (sub_arr, arr, i, n);
		}
	}
	//---------------------------

    //Print resulting array
	printf("\nThe resulting array is : \n");
	for ( int i = 0 ; i < m ; i++ ) {
        for ( int j = 0 ; j < n ;  j++ ) {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
	}
	return 0;
}

//Sort the array in ascending order
void sort_ascending (int sub_array[n], int n) {
    int temp;
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int j = i+1 ; j < n ; j++ ) {
            if (sub_array[i] > sub_array[j]) {
                temp = sub_array[i];
                sub_array[i] = sub_array[j];
                sub_array[j] = temp;
            }
        }
    }
}
//---------------------------

//Sort the array in descending order
void sort_descending (int sub_array[n], int n) {
    int temp;
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int j = i+1 ; j < n ; j++ ) {
            if ( sub_array[i] < sub_array[j]) {
                temp = sub_array[i];
                sub_array[i] = sub_array[j];
                sub_array[j] = temp;
            }
        }
    }
}
//---------------------------

//Assign the sorted array
void assign_values (int sub_array[n], int arr[m][n], int row_num, int n) {
    for ( int i = 0 ; i < n ; i++ ) {
        arr[row_num][i] = sub_array[i];
    }
}
//---------------------------

