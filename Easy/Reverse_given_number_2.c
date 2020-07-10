//By using recursion
//Time Complexity - O(log(n))

#include <stdio.h>

int reverse_number(int);

int main(){
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("Reversed number is : %d",reverse_number(num));
	return 0;
}

int reverse_number(int num){
	static int rev_no=0,base_pos=1;
	if(num>0){
		reverse_number(num/10);
		rev_no+=(num%10)*base_pos;
		base_pos*=10;
	}
	return rev_no;
}