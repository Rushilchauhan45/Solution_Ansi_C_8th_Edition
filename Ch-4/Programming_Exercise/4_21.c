/*
Write the C program thatr reads two numbers and performs their divison .if the divison 
is not posiible then an error message , 'Divison is not posiible' is displayed.
*/

#include <stdio.h>

void main()
{
    // variable declarations
    float numerator, denominator, divison;

    // Input the numerator and denominator
    printf("Enter the numerator: ");
    scanf("%f", &numerator);
    printf("Enter the denominator: ");
    scanf("%f", &denominator);

    // Check if the denominator is zero
    if (denominator == 0) {
        printf("Division is not possible: denominator is zero.\n");
    } else {
        // Perform division and display the result
       divison = numerator / denominator;
        printf("Result of division: %.2f\n", divison);
    }

}
