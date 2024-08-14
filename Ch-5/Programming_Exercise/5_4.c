/*
Write the progrsm that reads 4 floating point values in the range , 0.0 to 20.0 and prints a horizontal bar chart
to represent these values using the character * as the fill chracter . for the purpose of the chart , the values
may be rounded off to the nearest integer . for example , the values 4.36 should be represented as follows:

*   *   *   *
*   *   *   *   4.36
*   *   *   *

note that actual values are shown at the end of each bar.
*/
#include<stdio.h>
#include<math.h>

void main()
{
    // variable declarations
    float point_value[4];
    float round_off_values[4];

    // get the floating number from user
    for(int i=0;i<4;i++)
    {
        printf("Enter %d Number (0.0 to 20.0):",i+1);
        scanf("%f",&point_value[i]);

        round_off_values[i] = round(point_value[i]);
    }

    // print the bar chart
    printf("\nThe Horizontally Bar chart:\n");
    for(int i=0;i<4;i++)
    {
        // print *
        for(int j=0;j<round_off_values[i];j++)
        {
            printf("* ");
        }

        // print the original value
        printf("%.2f\n",point_value[i]);
    }

}