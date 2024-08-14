/*
Write the C Program to Print the Following pattern.

5 4 3 2 1
  4 3 2 1 
    3 2 1 
      2 1 
        1
*/




#include <stdio.h>

int main()
{
    int n = 5; // Number of rows

    for (int i = n; i >= 1; i--) 
    {
        // Print leading spaces
        for (int j = n; j > i; j--) 
        {
            printf("  ");
        }

        // Print decreasing numbers
        for (int j = i; j >= 1; j--) 
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
