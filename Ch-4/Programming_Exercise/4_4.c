/*
The straight line method of computing the yearly deprecition of the
value of an item is given by 
            Depreciation = Purchase Price - Salvage Value
                           ----------------------------
                                 Years of Service 
write the program to determine the salvage value of an item when the 
purchase price , years of service and the anual depreciation are given 
*/


#include<stdio.h>

void main()
{
    // variable declarations
    float Depreciation,Purchase_Price,Years_Service;
    float Salvage_Value;

    // get values from user
    printf("Enter the Purchase Price:");
    scanf("%f\n",&Purchase_Price);
    printf("Enter the years of service:"); 
    scanf("%f\n",&Years_Service);
    printf("Enter the value of Depreciation:");
    scanf("%f\n",&Depreciation);

    // calculate the salvage value from the given equation
    Salvage_Value = Purchase_Price - (Depreciation*Years_Service);

    // print the salvage value
    printf("\n\nThe Salvage Value :%.2f ",Salvage_Value);
    
}