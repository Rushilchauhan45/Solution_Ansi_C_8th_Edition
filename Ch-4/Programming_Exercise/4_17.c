/*
Write the C Program to shift the given data by two bits to the left.
*/

#include<stdio.h>

void main()
{
    // variable declarations
    int num=2;

    printf("Intial Number : %d\n", num);

    // shifting by two bits to the left
    int shifting_number = num << 2;

    printf("After Shifting Number Will be : %d\n",shifting_number);

}