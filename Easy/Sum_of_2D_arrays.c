//Program calculates the sum of two dimensional array

#include <stdio.h>

int main() {
    int a[5][5], b[5][5], c[5][5], r, c1, i, j;
    printf("Enter the rows and columns : \n");
    scanf("%d%d", &r, &c1);
    printf("Enter the elements for matrix A : \n");
    for (i=0; i<r; i++) {
        for (j=0; j<c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements for matrix B : \n");
    for (i=0; i<r; i++) {
        for (j=0; j<c1; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for (i=0; i<r; i++) {
        for (j=0; j<c1; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("The resultant matrix is : \n");
    for (i=0; i<r; i++) {
        for (j=0; j<c1; j++) {
            printf("%4d", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
