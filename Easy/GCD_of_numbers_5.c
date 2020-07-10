//By using command line arguments method 2

#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
	int a,b,small;
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	small = a > b ? a : b;
	for(int i=small;i>=1;i--){
		if(a%i==0&&b%i==0){
			printf("GCD of %d and %d is %d",a,b,i);
			break;
		}
	}
	return 0;
}
