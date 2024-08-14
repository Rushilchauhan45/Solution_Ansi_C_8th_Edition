/*
Write the C Program to Diaplay Pascal's Triangle
*/

#include <stdio.h>

void main() 
{
    int rows, coeficient = 1;

    // get the number of rows 
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++)
    {
        // Print leading spaces
        for (int space = 1; space <= rows - i; space++)
        {
            printf("  ");
        }

        // Calculate and print each value in the row
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
            {
                coeficient = 1;
            } 
            else
            {
                coeficient = coeficient * (i - j + 1) / j;
            }
            printf("%4d", coeficient);
        }
        printf("\n");
    }

   
}
