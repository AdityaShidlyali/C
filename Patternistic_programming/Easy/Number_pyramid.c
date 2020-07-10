/*		 1
       1   2
     1   2   3
   1   2   3   4
*/
#include <stdio.h>
int main(){
    int blk,i,j,n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        for(blk=1;blk<n-i;blk++){
            printf("  ");
        }
        for(j=1;j<=i;j++){
            printf("%4d",j);
        }
        printf("\n");
    }
    return 0;
}
