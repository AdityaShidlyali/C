/* _ _ * _ = _ _ + _ _ = _ _
Program should generate the digits in blanks for above conditions
*/

#include<stdio.h>
#include<stdlib.h>
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permute(int *a, int l, int r) {
    int i, n1, n2, n3, n4, n5, mul, sum;
    if (l == r) {
        n1 = a[0]*10 + a[1];
        n2 = a[2];
        if(n1 * n2 == (a[3]*10 + a[4])) {
            if(n1 * n2 + a[5]*10 + a[6] == a[7]*10 + a[8])
                for(int k = 0 ; k < 9 ; k++)
                    printf("%d ",a[k]);
        }
    }
    else {
        for (i = l; i <= r; i++) {
            swap((a+l), (a+i));
            permute(a, l+1, r);
            swap((a+l), (a+i)); //backtrack
        }
    }
}
int main() {
    int a[9], i, n = 9;
    for(i = 1 ; i < 10 ; i++)
        a[i-1] = i;
    permute(a, 0, n-1);
    return 0;
}
