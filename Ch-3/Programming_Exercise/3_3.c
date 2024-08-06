/*Write C Program to count and print the number of negative and positive numbers 
in a given set of numbers.Test your program with a suitable set of numbers . Use 'scanf'
to read the numbers .Reading should the terminated when the value 0 is encountered 
*/

#include <stdio.h>

void main() 
{
    int neg_count = 0, posi_count = 0;
    float num, read_positive[100], read_negative[100];

    printf("Enter numbers (terminate with 0):\n");

    while (1)
    {
        scanf("%f", &num);
        if (num == 0) break;
        if (num > 0) {
            read_positive[posi_count++] = num;
        } else {
            read_negative[neg_count++] = num;
        }
    }

    printf("\nPositive numbers count: %d\n", posi_count);
    printf("Positive Numbers:\n");
    for (int i = 0; i < posi_count; i++) {
        printf("%.2f\n", read_positive[i]);
    }

    printf("\nNegative numbers count: %d\n", neg_count);
    printf("Negative Numbers:\n");
    for (int i = 0; i < neg_count; i++) {
        printf("%.2f\n", read_negative[i]);
    }
}
