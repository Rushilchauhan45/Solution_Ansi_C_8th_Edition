/*
write the C Program to input the distance travelled by a car and fuel 
consumed .Next , Compute te milege of the car.
*/

#include <stdio.h>

void main() {
    
    float distance, fuel, mileage;

    // enter the distance travelled by the car
    printf("Enter the distance travelled by the car (in KM): ");
    scanf("%f", &distance);

    //  enter the fuel consumed by the car
    printf("Enter the fuel consumed by the car (in liters): ");
    scanf("%f", &fuel);

    // Calculate the mileage of the car
    mileage = distance / fuel;

    // Print the mileage of the car
    printf("The mileage of the car is %.2f kilometers per liter.\n", mileage);


}

