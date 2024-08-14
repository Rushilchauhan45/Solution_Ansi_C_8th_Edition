/*
Given the string "WORDPROCESSING" , write a program to red the string from the terminal
and display the same in the following formats.
(a)WORD PROCESSING
(b)WORD
   PROCESSING
(c)W.P.
*/

#include<stdio.h>
#include<string.h>

void main()
{
    // variable declarations
    char str[30]="WORDPROCESSING";

    // print the format (a)
    printf("(a):\n");
    for(int i=0;i<strlen(str);i++)
    {
        if(i==4)
        {
            printf(" ");
        }
        printf("%c",str[i]);
    }

    // print the format (b)
    printf("\n(b):\n");
    for(int i=0;i<strlen(str);i++)
    {
        if(i==4)
        {
            printf("\n");
        }
        printf("%c",str[i]);
    }

    // print the format (c) 
    printf("\n(c):\n");
    printf("%c.%c.",str[0],str[4]);
    

}