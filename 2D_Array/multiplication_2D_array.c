//Program for multiplication of 2D array

#include <stdio.h>

int main() {
    int a[5][5], b[5][5], c[5][5], i, j, k, m, n, p, q;
    printf("Enter the rows and columns for matrix A : \n");
    scanf("%d%d", &m, &n);
    printf("Enter the rows and columns for matrix B : \n");
    scanf("%d%d", &p, &q);
    if (n!=p) {
        printf("The multiplication is not possible\nTry again !");
    }
    else {
        printf("Enter the %d number of elements for matrix A : \n",m*n);
        for (i=0; i<m; i++) {
            for (j=0; j<n; j++) {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the %d number of elements for matrix B : \n",p*q);
        for (i=0; i<p; i++) {
            for (j=0; j<q; j++) {
                scanf("%d",&b[i][j]);
            }
        }
        printf("The matrix A is : \n");
        for (i=0; i<m; i++) {
            for (j=0; j<n; j++) {
                printf("%4d",a[i][j]);
            }
            printf("\n");
        }
        printf("The matrix B is : \n");
        for (i=0; i<p; i++) {
            for (j=0;j<q; j++) {
                printf("%4d",b[i][j]);
            }
            printf("\n");
        }
        for (i=0; i<n; i++) {
            for (j=0; j<q; j++) {
                c[i][j] = 0;
                for (k=0; k<n; k++) {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }
            }
        }
        printf("The resultant matrix is : \n");
        for (i=0; i<n; i++) {
            for (j=0; j<q; j++) {
                printf("%4d",c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
