/* Write the C Program to find the Sum of the following harmonic series for a given value of n.
            1+1/2+1/3+....+1/n
    The value of n should be given interactively through the terminal
*/

#include<stdio.h>

void main()
{
    //variable declarations
    int i;
    float n,dt;
    float sum=0.00;

    // input the value of n
    printf("Enter the value of n="); 
    scanf("%f",&n);

    dt=1.00;
    for(i=1;i<=n;i++)
    {
        sum+= 1/dt;
        dt=dt+1.00;
    }

    printf("The sum of the Harmonic series is=%.2f",sum);
}//end of main function