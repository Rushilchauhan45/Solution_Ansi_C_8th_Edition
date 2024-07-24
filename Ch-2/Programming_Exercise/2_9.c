// write the C program to use one print statement to the print following pattern.
        // *
        // *   *
        // *   *   *
        // *   *   *   *

#include <stdio.h>

void main()
{
    int i,j;

    for(i=1;i<=4;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("*\t ");
        }
    printf("\n");
    }

}