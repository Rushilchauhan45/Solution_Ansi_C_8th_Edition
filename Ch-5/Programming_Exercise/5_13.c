/*
Write the c Program to input a currency value in Dollars and Display its equivelent 
Euro and INR amounts.You may use current exchange rate for conversion purpose.
*/

#include<stdio.h>
#define Dollar_to_Euro  0.9073;  
#define Dollar_to_INR  82.74; 


void main()
{
    //variable declaration
    double Dollar,Euro,INR;

    //get the dollar amount
    printf("Enter the Dollar Amount:");
    scanf("%lf",&Dollar);


    //convert into Euro
    Euro = Dollar * Dollar_to_Euro;
    INR  = Dollar * Dollar_to_INR;

    //print the amount
    printf("\n\nDollar to Euro : %.2lf EUR",Euro);
    printf("\nDollar to INR : %.2lf INR",INR);


}