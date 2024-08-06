/* The price of 1 kg rice is rs.16.75 amd 1 kg of sugar is rs.15 .Write the C Program to get these values 
from the user and display the prices as follows:
***LIST OF ITEMS***
Item       price
Rice       Rs.16.75
Sugar      Rs.15.00
*/

#include<stdio.h>

void main()
{
    // variables declaration
    float price_rice,price_sugar;
    
    // prices get from user
    printf("Enter the price of Rice per KG:");
    scanf("%f",&price_rice);
    printf("Enter the price of Sugar per KG:");
    scanf("%f",&price_sugar);

    // print the list
    printf("\n\n*** LIST OF ITEMS ***");
    printf("\nItems       Prices/KG");
    printf("\nRice        Rs %.2f",price_rice);
    printf("\nSugar       Rs %.2f",price_sugar);

}