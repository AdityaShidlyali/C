//By using command line argumets method 1

//This Program shows error but when we execute in command line , shows the correct output

#include <stdio.h>
#include <stdlib.h>

int main(int argc,int *argv[]){
	int a,b,gcd;
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	for(int i=1;i<=a&&i<=b;i++){
		if(a%i==0&&b%i==0){
			gcd=i;
		}
	}
	printf("GCD of %d and %d is %d",a,b,gcd);
	return 0;
}