//Grouping of statements
#include <stdio.h>
int main(){
    int i=1;
    {
        {
            printf("%d\n",i);
            printf("Hi\n");
            printf("Hello\n");
        }
        printf("%d\n",i);
    }
    printf("%d\n",i);
    return 0;
}