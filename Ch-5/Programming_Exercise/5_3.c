/*
write the program to read the following numbers. round them off to nearest
integers and print out the result in integer form:
    35.7     50.21    -23.73    -46.45
*/

#include<stdio.h>
#include<math.h>

void main()
{
    // floating variable
    float num;
    int roundoff;

    // get numner from user
    printf("Enter the Number:");
    scanf("%f", &num);

    // round off the number
    roundoff=round(num);

    // print the number
    printf("Rounding Off: %d", roundoff);

   
}