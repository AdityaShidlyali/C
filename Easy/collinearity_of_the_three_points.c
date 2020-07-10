/* Program to find the collinearity of the three points */

#include <stdio.h>

int main(){
    int x1, x2, x3, y1, y2, y3, area;
    printf("Enter the point x1 and y1 : \n");
    scanf("%d%d",&x1,&y1);
    printf("Enter the point x2 and y2 : \n");
    scanf("%d%d",&x2,&y2);
    printf("Enter the point x3 and y3 : \n");
    scanf("%d%d",&x3,&y3);
    area = ((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)));
    if (area==0) {
        printf("The points (%d,%d) , (%d,%d) and (%d,%d) are collinear",x1,y1,x2,y2,x3,y3);
    }
    else {
        printf("The points (%d,%d) , (%d,%d) and (%d,%d) are not collinear",x1,y1,x2,y2,x3,y3);
    }
    return 0;
}
