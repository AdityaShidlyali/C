/* Comparing the character whether its vowel or consonent using switch and case statement.

    Comparing using switch case statement the switch and case statement allows
    only the integers and character values to compare.
*/

#include <stdio.h>

int main(){
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    switch(ch){
        case 'a': case 'e': case 'i': case 'o': case 'u' :
        case 'A': case 'E': case 'I': case 'O': case 'U':
        printf("Entered character is vowel");
        break;

        default : printf("Entered character is consonent");
    }
    return 0;
}