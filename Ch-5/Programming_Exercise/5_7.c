/*
Write the program that prints the value 10.45678 in exponential 
format with the following specifications:
(a)correct to two decimal places;
(b)correct to four decimal places; 
(c)correct to eight decimal places;
*/

#include<stdio.h>

void main()
{
    // variable declarations
    float num;

    num = 10.45678;

    //(a)correct to two decimal places;
    printf("(a)correct to two decimal places: %.2f\n", num);

    //(b)correct to four decimal places; 
    printf("(b)correct to four decimal places: %.4f\n",num);

    //(c)correct to eight decimal places;
    printf("(c)correct to eight decimal places: %.8f\n", num);
}