//Continue statement skips the statements hence the values will be skipped off of the 10s multiplies

#include <stdio.h>
int main(){
    int i=1, ten=10;
    while (i <= 100) {
        if (i == ten) {
            ten = ten + 10;
            continue;
        }
        printf("%d  ",i);
        i++;
    }
    return 0;
}
