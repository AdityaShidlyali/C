/* Checking whether the entered character is vowel or consonent using if else

using LOGICAL OR OPERATOR
*/

#include <stdio.h>

int main(){
    char ch;
    printf("Enter a character :");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("Entered characer is vowel");
    }
    else{
        printf("Entered character is consonent");
    }
    return 0;
}