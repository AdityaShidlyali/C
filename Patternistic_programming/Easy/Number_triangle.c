/*   1
   1   2
   1   2   3
   1   2   3   4
   1   2   3   4   5
*/

#include <stdio.h>
int main(){
    int n,i,j;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%4d",j);
        }
        printf("\n");
    }
    return 0;
}
