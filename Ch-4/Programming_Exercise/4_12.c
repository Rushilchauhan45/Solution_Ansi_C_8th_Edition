/*
Write a program to read three values using scanf statement and print the following results:
(a)sum of the values
(b)Average of the three values
(c)largest of three values
(d)Smallest of three values
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    // variable declarations
    int a, b, c,
        sum=0,
        avg,
        choice;

    while(1)
    {
        printf("(1)Sum of the values\n");
        printf("(2)Average of three values\n");
        printf("(3)Largest of the values\n");
        printf("(4)Smallest of the values\n");
        printf("Enter '0' for exit\n");
        printf("Enter the choice=\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: printf("Enter the three values=\n");
                    scanf("%d \n%d \n%d", &a, &b, &c);

                    sum = a + b + c;

                    printf("\nSum of the three values= %d\n", sum);
            break;
            case 2: printf("Enter the three values=\n");
                    scanf("%d \n%d \n%d", &a, &b, &c);

                    avg = sum / 3;

                    printf("\nAverage of the three values= %d\n", avg);
            break;
            case 3: printf("Enter the three values=\n");
                    scanf("%d \n%d \n%d", &a, &b, &c);

                    int largest = (a > b ? (a > c ? a : c) : (b > c ? b : c) );

                    printf("\nLargets of the three values= %d\n",largest);
            break;
            case 4: printf("Enter the three values=\n");
                    scanf("%d \n%d \n%d", &a, &b, &c);

                    int Smallest = (a < b ? ( a < c ? a : c) : (b < c ? b : c));

                    printf("\nSmallest of the three values= %d\n",Smallest);

            break;
            case 0:exit(0);
        }

    }

}