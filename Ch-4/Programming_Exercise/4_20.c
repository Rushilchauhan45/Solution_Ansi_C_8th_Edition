/*
Write the C program to input the sides of A tringle and determine wheather the tringle is icoceles or not.
*/

#include <stdio.h>

void main()
{
    float side1,
          side2,
          side3;

    // Input the sides of the triangle
    printf("Enter the three sides of the triangle:");
    scanf("%f %f\n %f\n", &side1, &side2, &side3);

    // Check if the triangle is isosceles
    if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("The triangle is isosceles.\n");
    } else {
        printf("The triangle is not isosceles.\n");
    }

}
