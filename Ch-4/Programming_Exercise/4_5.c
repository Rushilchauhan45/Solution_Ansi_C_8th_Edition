/*
Write a Program that will read a real number from the keyboard and 
print the following output in one line:
Smallest integr          The given           Largest integer
not less than            number              not greater than
the number                                   the number
*/

#include <stdio.h>
#include <math.h>

void main() {
    
    double number;
    
    // Get the real number from the user
    printf("Enter the number: ");
    scanf("%lf", &number);
    
    // Calculate the smallest integer not less than the number
    
    // Calculate the largest integer not greater than the number
    int largestInteger = (int)ceil(number);//ceil() function located in math.h header file
                                            // it's use tp find largest and nearest (means Approx number) number from the number 
    
    int smallestInteger = (int)floor(number);//floor() function located in math.h header file
                                            // it's use tp find smallest Approx and nearest number from the number 
    
    // Print the results
    printf("Smallest integer not less than the number: %d\n", smallestInteger);
    printf("The given number: %f\n", number);
    printf("Largest integer not greater than the number: %d\n", largestInteger);
    

}
