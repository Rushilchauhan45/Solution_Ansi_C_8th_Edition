/*Write the program to do following :
(a)Declare x and y as integer variables and z as a short integer variable.
(b)Assign two 6 digit numbers to x and y .
(c)Assign the sum of x and y  to z
(d)output the values of x,y and z  Comment on the output.
*/

#include<stdio.h>

void main()
{
    // variables declaration
    int x,y;
    short int z;

    x=123456;
    y=123456;

    z=x+y;

    // (d) Output the values of x, y, and z. Comment on the output.
    printf("Value of x: %d\n", x);
    printf("Value of y: %d\n", y);
    printf("Value of z: %d\n", z);
    
}