#include <stdio.h>
#include <stdlib.h> //header file for atoi function

int main (int argc, char *argv[]) {
    int sum=0;
    for (int i=2; i<argc; i++) {
        sum += atoi(argv[i]);
        printf("%s  ",argv[i]);
    }
    printf("The sum is %d",sum);
    return 0;
}
