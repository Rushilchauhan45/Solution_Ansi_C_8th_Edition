/*
Write a C Program to inpute a date value and determine wheather the entered day,month,year values are valid
*/

#include <stdio.h>

void main() {
    
    // variable declarations
    int day, month, year;

    // Input the date
    printf("Enter day: ");
    scanf("%d", &day);
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    // Check if the month is valid
    if (month < 1 || month > 12) {
        printf("Invalid date: month is out of range.\n");
        return 0;
    }

    // Check if the day is valid for each month
    if ((day < 1 || day > 31) ||  // Days must be between 1 and 31
        (month == 2 && day > 29) ||  // February can't have more than 29 days
        (month == 2 && day == 29 && (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0))) ||  // February 29 is only valid in a leap year
        ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)) {  // April, June, September, November can't have more than 30 days
        printf("Invalid date: day is out of range for the given month.\n");
        return 0;
    }

    // If all checks pass, the date is valid
    printf("%d/%d/%d (Entered Date Is Valid.)\n",day, month, year);

}
