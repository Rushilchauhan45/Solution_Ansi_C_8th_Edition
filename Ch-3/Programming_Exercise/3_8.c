/*
Write a C Program to print the square of number
*/

#include<stdio.h>
#include<math.h>

void main()
{
    float num,square;

    printf("Enter the Number:");
    scanf("%f", &num);

    square=pow(num,2);

    printf("\nThe square of number=%.2f\n", square);
}