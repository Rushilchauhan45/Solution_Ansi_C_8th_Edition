//Distance Between two Points (x1,y1) and (x2,y2) is governed by the following formula:
//      square(D)=square(x2-x1)+square(y2-y1)
// Compute the value of D given the cordinates of the point.


#include<stdio.h>
#include<math.h>

void main()
{
    int x1,x2,y1,y2;
    float D;

    printf("Enter the value of (x1,y1):");
    scanf("%d \t %d",&x1,&y1);
    printf("Enter the value of (x2,y2):");
    scanf("%d \t %d",&x2,&y2);

    // calculate D
    D=sqrt(pow((x2-x1),2) + pow((y2-y1),2));

    printf(" The Value of D = %.3f",D);
}