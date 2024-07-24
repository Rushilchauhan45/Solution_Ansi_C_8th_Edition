// write C program to displa a simple calculator 
/*
        x=            y=
        sum=          Difference=
        Prouct=       Divison=

*/

#include <stdio.h>

void main()
{
    double x, y;

    printf("Enter X: ");
    scanf("%lf", &x);
    printf("Enter Y: ");
    scanf("%lf", &y);

    // print the calculation
    printf("  X= %lf                y= %lf\n", x, y);
    printf("  Sum= %lf              Difference= %lf \n",x+y,x-y);
    printf("  Product= %lf          Divison= %lf  ",x*y,x/y);
}