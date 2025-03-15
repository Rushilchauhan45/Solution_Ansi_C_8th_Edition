/*
write a program to find the number of a sum of all integers greater than 100 nd less than 200 that are divisible by 7
*/

//few implemetation is left...

#include <stdio.h>

void main()
{
    //variable declarations
    int num, sum=0;

    //get the number from user
    printf("Enter the number:");
    scanf("%d",&num);
    int dup=num;

    //find sum of the given number
    while(num>0)
    {
        int temp= num%10;
        sum= sum+temp;
        num=num/10;
    }

    //chek the sum is between 100 or 200
    if(sum>=100 && sum<=200)
    {
        if(sum%7==0)
        {
            printf("%d is Divisiible by 7",dup);
        }else
        {
            printf("%d is Not Divisiible by 7",dup);

        }
    }else
    {
        printf("The sum Of Number %d is not In Range(100 to 200)",sum);
    }

}//eomf