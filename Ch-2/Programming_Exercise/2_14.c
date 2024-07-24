/* A Point on the Cicumference  of a  circle whose center is (0,0) is (4,5) . Write A C Program
  to Compute perimeter And area of the circle.


[The distance from the center (0,0) to the point (𝑥,𝑦) on the circumference is the radius r of the circle, given by:]
r= sqrt(x*x + y*y)

[The perimeter (circumference)] 

C and area A of the circle are then:
C=2πr
A=π*r*r
*/

#include <stdio.h>
#include <math.h> // For sqrt() and M_PI
#define PI 3.14
void main() {
    
    // Coordinates of the point on the circumference
    double x = 4.0;
    double y = 5.0;
    
    // Calculate the radius using the distance formula
    double radius = sqrt(x * x + y * y);
    
    // Calculate the perimeter (circumference) and area of the circle
    double perimeter = 2 * M_PI * radius;
    double area = PI * radius * radius;
    
    // Print the results
    printf("The radius of the circle is: %.2lf\n", radius);
    printf("The perimeter (circumference) of the circle is: %.2lf\n", perimeter);
    printf("The area of the circle is: %.2lf\n", area);
        
}

