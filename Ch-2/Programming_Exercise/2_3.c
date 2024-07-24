// write a C program to O/P the following multiplication table :
    /*  5 x 1 = 5
        5 x 2 = 10
        5 x 3 = 15
        *       *
        *       *
        5 x 10 = 50 */


#include<stdio.h>

void main()
{
    // variable initialization
    int num=5,i;

    // loop for print full multiplication table
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",num,i,num*i);
    }

}