/*
Write the program to compute the values of square-roots of the numbers 0 to 100 in
steps 10 and print the O/P in a tabular from as shiwn as.

Number          Square-root          Square
0               0                    0
100             10                   10000
*/

#include<stdio.h>
#include<math.h>

void main()
{
    
    // print the header of the table
    printf("-----------------------------------------\n");
    printf("Number\t\tSquare-root\tSquare\n");
    printf("-----------------------------------------\n");

    for(double i=0.00;i<=100.00;)
    {
        printf("%.2lf\t\t%.2lf\t\t%.2lf\n",i,sqrt(i),pow(i,2)); 
        i += 10;       
    }
    
    printf("-----------------------------------------\n");
}