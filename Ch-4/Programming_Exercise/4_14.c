/*
Write the program to print a table of sin and cos functions for the intervel
from 0 to 180 degrees in icrements of 15 a shown as:

x(degree)             sin(x)             cos(x)
0                     ....               ....
15                    ....               ....
....                  ....               ....
....                  ....               ....
180                   ....               ....
*/

#include<stdio.h>
#include<math.h>

void main()
{
    // variable declarations
    double Value_cos , Value_sin;
    double x;

    // print tha table heading
    printf("--------------------------------------\n");
    printf("x(degree)\tsin(x)\t\tcos(x)\n");
    printf("--------------------------------------\n");

    for(x=0; x<=180 ;)
    {
        Value_sin = sin(x);
        Value_cos = cos(x);
        printf("%.2lf\t\t%.2lf\t\t%.2lf\n",x,Value_sin,Value_cos);
        x = x + 15 ;
    }
    printf("--------------------------------------\n");
    
}