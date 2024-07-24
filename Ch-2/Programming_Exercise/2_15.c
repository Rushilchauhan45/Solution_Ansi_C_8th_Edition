// The Lines joining the points (2,2) and (5,6) which lie on the cicumference of a 
// circle is the daimeter of the circle.Write A program to Compute The Area of the Circle.

// some formulas for the program :
//  daimeter = sqrt(pow(x2-x1,2) + pow(y2-y1,2)
//  radius = daimeter/2
//  Area = PI * r * r


// Compute the Program
#include <stdio.h>
#include <math.h>
#define PI 3.14

void main()
{
    // variables initialization
    double x1 = 2.0, y1 = 2.0;
    double x2 = 5.0, y2 = 6.0;

    // calculate the daimeter
    double D=sqrt(pow(x1-x2,2) + pow(y2-y1,2));

    // calculate the radius
    double r=D/2.0;

    // calculate the area
    double A= PI * r * r;

    // print the Answer 
    printf("The daimeter of the circle = %.2lf\n",D);
    printf("The Radius of the circle = %.2lf\n",r); 
    printf("The Area of the circle = %.2lf",A); 


}