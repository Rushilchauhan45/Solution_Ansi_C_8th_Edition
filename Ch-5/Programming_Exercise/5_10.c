/*
Write a program to read and display the following table of data.
Name         Code         Price
Fan          67831        1234.50
Motor        450          5786.70
*/

#include <stdio.h>
#include<string.h>

void main()
{
    // variable declarations
    int items;
    
    printf("How Many Intems You Have Purchase:");
    scanf("%d", &items);

    //declare variables depends of number of items
    int code[items];
    char name[30];
    float price[items];

    //get values
    for(int i=0; i<items; i++)
    {
        // get item name
        printf("Enter Name Of Item:");
        scanf(" %s ", name[i]);
        
        //get code of item
        printf("\nEnter Item Code:");
        scanf(" %d ", &code[i]);

        //get price of item
        printf("\nEnter Price of Item:");
        scanf(" %f ", &price[i]);

    }

    //Display value in tabel format
    printf("\n-----------------------------------------------\n");
    printf("Name\t\tCode\t\tPrice\n");
    printf("-----------------------------------------------\n");
    for(int i=0;i<items;i++)
    {
        printf("%s\t\t%d\t\t%.2f\n",name[i],code[i],price[i]);
    }
}
