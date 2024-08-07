/*
For a certain electrical circuit with an inductance L and resistance R , the damped natural frequency 
is given by ,                           --------------------
                        Frequency =    /  1      R^2
                                      /  ---  _  ------
                                    \/   LC      4(C^2)
It is desired to study the variation of this frequency with C . Write a Program to calculate the 
frequency for different values of C starting from 0.01 to 0.1 in steps of 0.01 
*/

#include<stdio.h>
#include<math.h>

float calculate_frequency(float R, float L, float C)
{
    float term1 = 1/(L*C);
    float term2 = (R*R)/(4*C*C);

    return sqrt(term1 - term2);
}

void main()
{
    // variable declarations
    float R,L,C;

    // get values from user
    printf("Enter R(resistance):");
    scanf("%f",&R);
    printf("Enter L(inductance):");
    scanf("%f",&L);

    
     // Print header
    printf("\n\nCapacitance (C)\tFrequency\n");
    printf("----------------------------\n");
    
    // loop for dynamic values of C
    for( C = 0.01 ; C <= 0.1 ;  )
    { 
        float frequency = calculate_frequency(L,R,C);
         if (frequency == 0)
         {
            printf("\n%.2f\t\tInvalid frequency",C);
         }else
         {
            printf("\n%.2f\t\t%.2f",C,frequency);
         }
         C = C + 0.01;
    }
}