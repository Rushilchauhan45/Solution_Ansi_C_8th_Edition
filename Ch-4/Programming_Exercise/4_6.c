/*
The total distance travelled by a vehical in t seconds is given by
    distance = ut + (at)^2 /2
where u is the initial velocity(m/s) , a is acceleration(m/s^2) . Write the program 
to eveluate the distance travelled at regular intervels of time , given the values of u and a
The Program should provide the flexibility to user to select his own time intervels and repeat 
the calculation for different values of u and a.
*/

#include <stdio.h>
#include<stdlib.h>

void calculate_distance()
{
    float u, a, t;
    float distance;
    
        // Get the initial velocity from the user
        printf("Enter the initial velocity (u) in m/s: ");
        scanf("%f", &u);

        // Get the acceleration from the user
        printf("Enter the acceleration (a) in m/s^2: ");
        scanf("%f", &a);

        // Get the time interval from the user
        printf("Enter the time interval (t) in seconds: ");
        scanf("%f", &t);

        // Calculate the distance using the formula: distance = ut + (at^2)/2
        distance = u * t + (a * t * t) / 2;

        // Display the calculated distance
        printf("The distance traveled in %.2f seconds is: %.2f meters\n", t, distance);

}

void main()
{
    int choice;

    while(1)
    {
        // Ask the user if they want to perform another calculation
        printf("Do You Want to Perform  Calculation? Enter 1 if you want otherwise Enter 0: ");
        scanf(" %d", &choice);  // Notice the space before %c to consume any trailing whitespace
        
        switch(choice)
        {
            case 1:calculate_distance();
            break;
            case 0:exit(0);
        }
    }
}
