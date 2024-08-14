/*
Write an intractive programm to demonstrate the peocess of multiplication .the program should ask the user 
to enter two-digit integers and print the product as shown below.

                            45
                        x   37
                        ------
             7 x 45 is     315
             3 x 45 is     135
                       -------
              Add Them    1665
                       -------          
*/

#include <stdio.h>

void main()
{
    //variable declaration
    int num1, num2;
    int ones, tens;
    int product1, product2, Answer;

    // get two digit numbers from user
    printf("Enter the 1st two-digit integer: ");
    scanf("%d", &num1);

    printf("Enter the 2nd two-digit integer: ");
    scanf("%d", &num2);

    // break the two digits of 2nd number for multiplication with 1st number
    ones = num2 % 10;     
    tens = num2 / 10;

    //Calculate the internal products
    product1 = num1 * ones;
    product2 = num1 * tens;
    Answer = product1 + product2 * 10;

    // Print the multiplication process
    printf("\n   \t\t   %d\n", num1);
    printf("\t\tx  %d\n", num2);
    printf("\t\t------\n");
    printf("  %d x %d is \t   %d\n", ones, num1, product1);
    printf("  %d x %d is \t   %d\n", tens, num1, product2);
    printf("\t\t-------\n");
    printf("   Add Them   \t   %d\n",Answer);
    printf("\t\t-------\n");

    
}
