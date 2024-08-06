/*
Write the C Program to input the value of days and convert it into years ,weeks and days.
*/

#include <stdio.h>

void main() {

    int total_days, years, weeks, days;

    // enter the total number of days
    printf("Enter the number of days: ");
    scanf("%d", &total_days);

    // Calculate the number of years
    years = total_days / 365;
    // Calculate the remaining days after converting to years
    total_days = total_days % 365;
    // Calculate the number of weeks
    weeks = total_days / 7;
    // Calculate the remaining days after converting to weeks
    days = total_days % 7;

    // Print the results
    printf("%d years, %d weeks, and %d days\n", years, weeks, days);

    
}
