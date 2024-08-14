/*
Write the program to print the value 347.6789 in fixed point format with the following specifications.
(a)correct to two deciaml places;
(b)correct to five  deciaml places;
(c)correct to zero deciaml place 
*/

#include<stdio.h>

void main()
{
    // variable declarations
    double num;

    num=347.6789;

    // (a)correct to two deciaml places;
    printf("(a)correct to two deciaml places: %.2lf\n", num);

    //(b)correct to five  deciaml places;
    printf("(b)correct to five  deciaml places: %.5lf\n", num);

    //(c)correct to zero deciaml place
    printf("(c)correct to zero deciaml places: %.0lf\n", num);
}