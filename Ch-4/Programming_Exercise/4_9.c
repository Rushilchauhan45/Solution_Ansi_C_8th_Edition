/*
Write the program to read a four digit integer and print he sum of digits.
Hint : use / and % operators
*/

#include<stdio.h>

void main()
{
    // variable declarations
    int num,temp,sum=0;

    // get the number from user
    printf("Enter the number=");
    scanf("%d",&num);

    //while loop for break every digit from number and perform the sum
    while(num > 0)
    {
        temp= num % 10;
        sum += temp;
        num /= 10;
    } 

    // print the sum of digits
    printf("\nThe sum of digits= %d\n",sum);
}