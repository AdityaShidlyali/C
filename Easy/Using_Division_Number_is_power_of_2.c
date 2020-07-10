//Program to check whether number is power of two or not

#include <stdio.h>

int main() {
    int n, sum=0, tmp, c=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    tmp = n;
    while (tmp != 1) {
        if(tmp%2 != 0) {
            c++;
            break;
        }
        tmp = tmp / 2;
    }
    if (c == 0) {
        printf("The number is power of 2");
    }
    else {
        printf("The number is not power of 2");
    }
    return 0;
}
