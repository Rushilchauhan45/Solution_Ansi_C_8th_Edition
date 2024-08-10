/*
Write a program to read two integer values m and n and to decide 
and print whether m is a multiple of n .
*/

#include<stdio.h>

void main()
{
    // variable declarations
    int m,n;

    // get values of m and n
    printf("Enter the values of m And n=");
    scanf("\n%d \n%d",&m,&n);

    // cheack wheather
    if( n != 0 && m % n == 0 ) 
    {
        printf("\n%d is multiple of %d \n",m,n);
    }else
    {
        printf("\n%d is not multiple of %d \n",m,n);
    }


}