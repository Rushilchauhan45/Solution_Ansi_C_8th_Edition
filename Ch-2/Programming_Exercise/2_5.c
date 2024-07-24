//Write a C program that reads the value of distance travelled by a car and the time 
// taken for the same next , compute the speed at which the car travelled 

#include<stdio.h>

void main()
{
    // variables initialization
    float distance;
    float time;
    float speed;

    printf("Read The distance in meters=");
    scanf("%f", &distance);
    printf("Read the time in seconds=");
    scanf("%f", &time);

    // calculate the speed
    speed=distance/time;

    // print the speed
    printf("Speed=%.2f m/s", speed);


}