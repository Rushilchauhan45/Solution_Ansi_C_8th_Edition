/*
Write the C Program to illustrate the use of Symbolic constant in a real-life application.
*/

#include<stdio.h>
#define PI 3.14//define symbolic constant PI

void  main()
{
    // variable declarations
    float radius,area;

    printf("Enter radiusof the circle:");
    scanf("%f", &radius);

    area = PI* radius * radius; //use symbolic constant PI to calculate area of circle

    printf("\nThe Area of the circle=%.2f", area);
}