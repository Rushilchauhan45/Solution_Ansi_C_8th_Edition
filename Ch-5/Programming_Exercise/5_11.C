/*
Write the C Program print inventry stock report using some sample data. The report
should show intem code, qunity and inventry location as formatted output.
*/


#include <stdio.h>

int main()
{
    // Sample inventory data
    int itemCodes[] = {1243, 1245, 1246, 1247};
    int quantities[] = {50, 20, 100, 75};
    char *locations[] = {"Place A", "Place B", "Place C", "Place D"};

    int numItems = sizeof(itemCodes) / sizeof(itemCodes[0]);

    // Print header
    printf("%-10s %-10s %-15s\n", "Item Code", "Quantity", "Location");
    printf("------------------------------\n");

    // Print each inventory item
    for (int i = 0; i < numItems; i++)
    {
        printf("%-10d %-10d %-15s\n", itemCodes[i], quantities[i], locations[i]);
    }

   return 0; 
}


