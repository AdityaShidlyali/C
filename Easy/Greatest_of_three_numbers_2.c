//By using only if...else

#include <stdio.h>

int main(){
	int a,b,c;
	printf("Enter three numbers : \n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		if(a>c){
			printf("%d is greater",a);
		}
	}
	if(b>a){
		if(b>c){
			printf("%d is greater",b);
		}
		else{
			printf("%d is greater",c);
		}
	}
	return 0;
}