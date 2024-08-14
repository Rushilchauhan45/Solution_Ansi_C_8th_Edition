/*
Write a program to read three integers from the keyboard using one scanf 
statement and output them on onr line using:
(a)three printf statement
(b)only one printf with conversion specifiers , and
(c)only one printf without conversion specifiers
*/

#include<stdio.h>

void main()
{
    // variables declaration
    int a,b,c;

    // get the number using scanf statement
    printf("Enter the Three Numbers:");
    scanf("%d %d %d",&a,&b,&c);

    //(a)three printf statement
    printf("a:%d",a);
    printf("b:%d",b);
    printf("c:%d",c);

    //(b)only one printf with conversion specifiers , and
    printf("\na:%d\nb:%d\nc:%d\n",a,b,c);

    //(c)only one printf without conversion specifiers
    printf(a);
    printf(b);
    printf(c);
}