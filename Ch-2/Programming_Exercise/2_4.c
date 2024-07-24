/* Given the values of three variables a , b , c, write a program to compute and display the value of x , where 
                                  x= a/b-c
    =>execute the program for the following values
    (a) a=250,b=85,c =25
    (b) a= 300,b=70,c=70 */

#include <stdio.h>

void main()
{
    // variables initialization
    int a,b,c,x;

    printf("Enter value of a , b , c According your question in sequence=");
    scanf("%d\t%d\t%d",&a,&b,&c);

    // print the values of a b c
    printf(" a = %d\n b = %d\n c = %d\n",a,b,c);

    x= a / (b-c);
    
    // print the value of x
    printf(" \nx = %d\n",x);

}