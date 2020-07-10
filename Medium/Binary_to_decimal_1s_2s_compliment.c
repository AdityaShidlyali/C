//Program which calculates the 1's compliment and as well 2's compliment

#include <stdio.h>
#include <string.h>

int main() {
    int a[32],n,d,i=0,j,len;
    char b[32];
    printf("Enter the positive decimal number : ");
    scanf("%d",&n);
    while (n != 0) {
        d = n%2;
        a[i] = d;
        n /= 2;
        i++;
    }
    printf("Equivalent binary number is : ");
    for (j=i-1; j>=0; j--) {
        printf("%d",a[j]);
    }
    printf("\nEquivalent 1s complement is : ");
    for (j=i-1; j>=0; j--) {
        if (a[j] == 0) {
            a[j] = 1;
        }
        else {
            a[j] = 0;
        }
        printf("%d",a[j]);
    }
    printf("\nEnter the above 1s complement to get its 2s compliment : ");
    gets(b);
    len = strlen(b);
    for (i=len-1; b[i]!='1'; i--);
    for (j=i-1; j>=0; j--) {
        if (b[j]=='1') {
            b[j] = '0';
        }
        else{
            b[j] = '1';
        }
    }
    printf("\nEquivalent 2s complement is : %s",b);
    return 0;
}
