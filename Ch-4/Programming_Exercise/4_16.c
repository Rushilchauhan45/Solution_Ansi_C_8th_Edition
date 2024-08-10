/*
Write a program to illustrate the use of cast operator in real life situation.
*/

#include <stdio.h>

void main()
{
    int fahrenheit;
    float celsius;

    // Example temperature in Fahrenheit
    fahrenheit = 100;

    // Convert Fahrenheit to Celsius using the formula
    // Celsius = (Fahrenheit - 32) * 5/9
    celsius = (float)(fahrenheit - 32) * 5 / 9;

    // Display the results
    printf("Temperature in Fahrenheit: %d°F\n", fahrenheit);
    printf("Temperature in Celsius: %.2f°C\n", celsius);

    
}
