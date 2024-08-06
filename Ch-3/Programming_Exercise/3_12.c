/*
Write the C Program to input the amount value and break it into the smallest possible
Indian currency notes.
*/

#include <stdio.h>

void main()
 {
    int amount;
    int notes_500,
        notes_200,
        notes_100,
        notes_50, 
        notes_20, 
        notes_10, 
        coins_5, 
        coins_2, 
        coins_1;
        
    // Get the amount from user
    printf("Enter the amount: ");
    scanf("%d", &amount);

    // Calculate the number of 500 rupee notes
    notes_500 = amount / 500;
    amount %= 500;

    // Calculate the number of 200 rupee notes
    notes_200 = amount / 200;
    amount %= 200;

    // Calculate the number of 100 rupee notes
    notes_100 = amount / 100;
    amount %= 100;

    // Calculate the number of 50 rupee notes
    notes_50 = amount / 50;
    amount %= 50;

    // Calculate the number of 20 rupee notes
    notes_20 = amount / 20;
    amount %= 20;

    // Calculate the number of 10 rupee notes
    notes_10 = amount / 10;
    amount %= 10;

    // Calculate the number of 5 rupee coins
    coins_5 = amount / 5;
    amount %= 5;

    // Calculate the number of 2 rupee coins
    coins_2 = amount / 2;
    amount %= 2;

    // Calculate the number of 1 rupee coins
    coins_1 = amount / 1;
    amount %= 1;

    // Print the result
    printf("The smallest possible Indian currency notes/coins are:\n");
    printf("500 rupee notes: %d\n", notes_500);
    printf("200 rupee notes: %d\n", notes_200);
    printf("100 rupee notes: %d\n", notes_100);
    printf("50 rupee notes: %d\n", notes_50);
    printf("20 rupee notes: %d\n", notes_20);
    printf("10 rupee notes: %d\n", notes_10);
    printf("5 rupee coins: %d\n", coins_5);
    printf("2 rupee coins: %d\n", coins_2);
    printf("1 rupee coins: %d\n", coins_1);

}
