/*
The cost of one type of mobile service is Rs. 250 plus Rs. 1.25 for each call made over 
and above 100 calls. Write a program to read customer codes and calls made and print bill for ewch customer .
*/

#include <stdio.h>

void main() {
    
    // variables declaration
    float customer_bill;
    int customer_codes, calls_made;

    // get customer code and number of calls made
    printf("Enter customer code: ");
    scanf("%d", &customer_codes);

    printf("Enter number of calls made: ");
    scanf("%d", &calls_made);

    // initial bill amount
    customer_bill = 250.00;

    // if calls made above 100 then cunstomer get extra charge 1.25
    if (calls_made > 100) 
    {
        customer_bill = customer_bill + ((calls_made - 100) * 1.25);
    }

    // Print the bill for the customer
    printf("------------------------------\n");
    printf("      TOTAL CALLING BILL      \n");
    printf("------------------------------\n");
    printf("Customer code: %d\n", customer_codes);
    printf("Total bill: Rs. %.2f\n", customer_bill);
    printf("------------------------------\n");


}
