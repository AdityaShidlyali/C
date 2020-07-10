//Program to check coordinate point lies in system of four quadrant

#include <stdio.h>

int main(){
	int x,y;
	printf("Enter coordinates X and Y\n");
	scanf("%d%d",&x,&y);
	if(x>0 && y>0)
		printf("I quadrant");
	else if(x<0 && y>0)
		printf("II quadrant");
	else if(x<0 && y<0)
		printf("III quadrant");
	else
		printf("IV quadrant");
	return 0;
}