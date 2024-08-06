/*
Write the C program to input an integer between 0 and 128 and print its ASCII characters
*/

#include<stdio.h>

void main()
{
    int num;

    printf("Enter the integer number between 0 to 128=");
    scanf("%d", &num);

    if(num>=0 && num<=128)
    {
        printf("\n\nthe ASCII character of the integer %d = %c",num,(char)num);
    }else
    {
        printf("\n\nError:pls Enter number between 0 to 128");
    }
}