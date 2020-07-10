//By using command line arguments

#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
	int a=atoi(argv[1]),fact=1;
	for(int i=1;i<=a;i++){
		fact*=i;
	}
	printf("Factorial of %d is %d",a,fact);
	return 0;
}