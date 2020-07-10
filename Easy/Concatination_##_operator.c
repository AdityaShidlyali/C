/*
	## is called strigising operator
*/

#include<stdio.h>
 
#define concatination(a,b) a ## b
 
int main () {
   int a_b = 1000;
   printf("The concatenated value is:%d \n",concatination(a,b));
   return 0;
}
