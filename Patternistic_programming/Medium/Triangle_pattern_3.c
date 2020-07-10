/*Program to print following pattern : 

		    *
                   * *
		  * * *
		 * * * *
		* * * * *
*/

#include <stdio.h>

int main() { 
	int row,col,i,j;
	printf("Enter number of rows : ");
	scanf("%d", &row);
	printf("Enter number of columns : ");
	scanf("%d", &col);
	for (i=1; i<=row+1; i++) {
		for (j=col; j>=1; j--) {
			if (i >= j){
				printf(" *  ");
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}
