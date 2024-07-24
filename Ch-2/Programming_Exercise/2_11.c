// Area of Tringle is given by the formula
//               A= root(S(S-a)(S-b)(S-c))
//Where a,b,c are sides of tringle and 2S= a+b+c Write a program to compute thye area of
// the tringle from given values of a,b,c..

#include <stdio.h>
#include <math.h> // For sqrt() function

void main() {

    double a, b, c;
    double s, area;

    // Input the sides of the triangle
    printf("Enter the lengths of the sides of the triangle:\n");
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);

    // Calculate the semi-perimeter
    s = (a + b + c) / 2.0;

    // Calculate the area using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Print the area of the triangle
    printf("The area of the triangle is: %.2lf\n", area);

    
}
