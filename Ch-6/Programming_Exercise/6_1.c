/*
Write a program to determine whether a given number is 'odd' or 'even' and print the message 
NUNBER IS EVEN 
or
NUMBER IS ODD
(a) without using else option . and (b) with else.
*/

#include<stdio.h>

void main()
{
    //variables declarations
    int num;

    printf("Enter the number:");
    scanf(" %d", &num);

//(a) without using else option . and (b) with else.

    if(num%2==0)
    {
        printf("NUMBER IS ODD\n");
        
    }

    if(num%2!=0)
    {
        printf("NUMBER IS EVEN\n");
      
    }

//(b) with else.
    if(num%2==0)
    {
        printf("NUMBER IS ODD\n");

    }else
    {
        printf("NUMBER IS EVEN\n");

    }

}

