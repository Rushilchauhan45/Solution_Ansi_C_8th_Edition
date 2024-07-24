// write a C program to print the current system date.


#include <stdio.h>
#include <time.h> //for get the current time

void main() {

    // Get the current time
    time_t now;
    time(&now);

    // Convert it to local time representation
    struct tm *local = localtime(&now);

    // Print the current date
    printf("Current date: %02d-%02d-%04d\n", local->tm_mday, local->tm_mon + 1, local->tm_year + 1900);

}
