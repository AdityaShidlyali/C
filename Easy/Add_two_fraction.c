//Program to add two fraction

#include <stdio.h>

int main(){
    int a,b,c,d,x,y,gcd;
    printf("Enter numerator for first faction : ");
    scanf("%d",&a);
    printf("Enter denominator for second fraction : ");
    scanf("%d",&b);
    printf("Enter numerator for second fraction : ");
    scanf("%d",&c);
    printf("Enter denominator for second fraction : ");
    scanf("%d",&d);
    printf("You have entered following fraction : \n");
    printf("%d/%d + %d/%d",a,b,c,d);
    x=(a*d)+(c*b);
    y=(b*d);
    for(int i=1;i<=x&&i<=y;i++){
        if(x%i==0&&y%i==0){
            gcd=i;
        }
    }
    printf("\nThe resultant fraction is : %d/%d",x/gcd,y/gcd);
    return 0;
}