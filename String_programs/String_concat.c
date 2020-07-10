//Program to concatinate the two strings without using built in function

#include <stdio.h>

void do_concat(char *,char *);

int main() {
    char str_1[30], str_2[15];
    printf("Enter first string : ");
    scanf("%s", str_1);
    printf("Enter second string to comcatinate : ");
    scanf("%s", str_2);
    do_concat(str_1,str_2);
    return 0;
}

void do_concat(char str_1[30],char str_2[15]) {
    int i = 0, j, str_1_count = 0;
    while (str_1[i] != '\0') {
        str_1_count++; //To count the number of characters in string
        i++;
    }
    for (i=0, j=str_1_count; str_2[i] != '\0'; i++, j++) {
        str_1[j] = str_2[i];
    }
    str_1[j+1] = '\0'; //Place the null value in last position of the string
    printf("Concatinated string is %s", str_1);
}