/*
wriote the C Program to Input an integer and print its table.
*/

#include<stdio.h>

void main()
{
    // variable initialization
    int num,i;

    // get number from user
    printf("Enter Number :");
    scanf("%d",&num);

    // loop for print full multiplication table
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",num,i,num*i);
    }

}