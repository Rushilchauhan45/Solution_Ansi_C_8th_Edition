/*
In invetory managment , the Economic order quantity for a single item is given by 
                            -----------------------------
                           / 2 * demandrate * setup costs
                   EOQ=   /  ----------------------------
                        \/  Holding cost per item per unit time

and the optimal time between orders
                            ----------------------------------------------
                           /               2  * setup costs
                   TBO=   /  ----------------------------------------------
                        \/  demandrate * Holding cost per item per unit time

write the program to compute EOQ and TBO , and given demandrate, setup costs and the holding cost
*/

#include<stdio.h>
#include<math.h>

void main()
{
    // variable declarations
    float demandrate;
    float holding_costs;
    float setup_costs;
    float TBO,EOQ;

    // get values from user
    printf("Enter Demand Rate:");
    scanf("%f",&demandrate);
    printf("\nEnter Setup Costs:");
    scanf("%f",&setup_costs);
    printf("\nEnter Holding Costs:");
    scanf("%f",&holding_costs);

    // Calculate TBO and EOQ
    EOQ = sqrt((2*demandrate*setup_costs)/holding_costs);
    TBO = sqrt((2*setup_costs)/(demandrate*holding_costs));

    // print TBO and EOQ
    printf("\n\nEOQ : %.2f \nTBO :%.2f ",EOQ, TBO);

}