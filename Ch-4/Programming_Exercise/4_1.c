/*
Write the program  that reads a floating-point number and then displays
 the right-most digit of the integral part of the number.
*/

#include <stdio.h>

void main()
{

    // declare floating variable
    float number;
    
    // Get the floating-point number from the user
    printf("Enter a floating-point number: ");
    scanf("%f", &number);
    
    // Convert the number to an integer to get the integral part
    int integer_num = (int)number;
    
    // Get the right-most digit of the integral part
    int right_most_digit = integer_num % 10;
    
    // Display the right-most digit
    printf("The right-most digit of the integral part is: %d\n", right_most_digit);
    
}
