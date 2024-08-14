/*
Write a program to read the ANIL KUMAR GUPTA in three parts using the scanf statement 
and to display the same in the following fromat using the printf statement.
(a)ANIL K. GUPTA
(b)A.K. GUPTA
(c)GUPTA A.K.
*/

#include<stdio.h>
#include<string.h>

void main()
{
    // variable declarations
    char name[30]="ANIL KUMAR GUPTA";

    //(a)ANIL K. GUPTA
    for(int i=0;i<4;i++)
    {
        printf("%c",name[i]);
    }
    printf(" %c. ",name[5]);
    for(int i=11;i<strlen(name);i++)
    {
        printf("%c",name[i]);
    }


    //(b)A.K. GUPTA
    printf("\n%c.%c. ",name[0],name[5]);
    for(int i=11;i<strlen(name);i++)
    {
        printf("%c",name[i]);
    }

    //(c)GUPTA A.K.
    printf("\n");
    for(int i=11;i<strlen(name);i++)
    {
        printf("%c",name[i]);
    }
    printf(" %c.%c. ",name[0],name[5]);

    
}