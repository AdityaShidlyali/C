//Another logic to find the number is power of two or not

#include <stdio.h>

int main() {
    int n, sum=0, tmp=1, c=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    while (tmp <= (n/2)) { //to reduce the number of CPU cycle invoke "n/2" otherwise "n"
        if (tmp == (n/2)) { //to reduce the number of CPU cycle invoke "n/2" otherwise "n"
            c++;
            break;
        }
        tmp = tmp*2;
    }
    if (c == 1) {
        printf("The number is power of 2");
    }
    else {
        printf("The number is not power of 2");
    }
    return 0;
}
