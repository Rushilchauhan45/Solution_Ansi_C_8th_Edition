/*
Given an integer number, write a program that display the number as follows.
First Line       :All digits
Second Line      :All except first digit
Third line       :All except first two digits
......
Last Line        :All Last digits

Example, the number is 5678 will be displayed as:
5678
678
78
8
*/

#include <stdio.h>

void main() {
    
    int number;
    
    // Get number from user
    printf("Enter the number: ");
    scanf("%d", &number);

    int temp = number;
    int divisor = 1;

    // Count the number of digits in the number
    while (temp > 0) {
        temp /= 10;
        divisor *= 10;
    }

    // For loop to print the digits in the given pattern
    temp = number;
    while (divisor > 0) {
        printf("%d\n", temp % divisor);
        divisor /= 10;
        
    }
}
    

