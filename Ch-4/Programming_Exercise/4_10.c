/*
Given three values , write a program to read three values from keyboard and print 
out the largest of them without using ''if'' statement
*/

#include<stdio.h>

void main()
{
    // variable declarations
    int a,b,c;

    // get three values from Keyboard
    printf("Enter three values :");
    scanf("\n%d \n%d \n%d",&a,&b,&c);

    // compare three values for find largest number
    // Without using ''if'' statement You can use ternary operator like this:
    int bigger = (a > b ? (a > c ? a : c) : (b > c ? b : c) );

    // print the largest number
    printf("\n\nLargest Number : %d ", bigger);





}