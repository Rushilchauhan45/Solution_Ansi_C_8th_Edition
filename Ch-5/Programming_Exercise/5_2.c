/*
Write the program to read the values of x and y and print the result of the following 
expression in one line.
     x+y         x+y
(a) ----    (b) ----     (c)  (x+y)(x-y)
     x-y          2
*/

#include <stdio.h>

void main()
{
    // variable declarations
    int x,y;

    // get values form user
    printf("Enter the values of x and y:");
    scanf("%d",&x);
    scanf("%d",&y);

     // calculate values
    int exp1=(x+y)/(x-y);
    int exp2=(x+y)/(2);
    int exp3=(x+y)*(x-y);

     // print result
    printf("Expression 1: %d\nExpression 2: %d\nExpression 3: %d", exp1, exp2,exp3);
}