/*
Input the values of 4 variables a,b,c and d  and compute the resultant 
value the following expressions.

(a+b)*(c/d)
(a+b)*c/d
a+(b*c)/d

*/

#include<stdio.h>

int main()
{
    // variable declarations
    int a,b,c,d;
    int exp1,exp2,exp3;

    // get values from user
    printf("Enter values of a :");
    scanf("%d",a);
    printf("Enter values of b :");
    scanf("%d",b);
    printf("Enter values of c :");
    scanf(" %d",c);
    printf("Enter values of d :");
    scanf(" %d",d);


    // perfom the expressions
    exp1=(a+b)*(c/d);
    exp2=(a+b)*c/d;
    exp3=a+(b*c)/d;

    // print the answer
    printf("\n\n(a+b)*(c/d)= %d\n(a+b)*c/d= %d\n a+(b*c)/d= %d ",exp1,exp2,exp3);
                           
   return 0; 
}