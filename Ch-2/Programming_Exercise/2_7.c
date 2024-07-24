// Given two integers 20 and 10 . write a program that uses a function add() to add these two
// numbers  and sub() to find the difference of these two numbers and then display the sum 
// and difference in the following form:
//             20+10=30
//             20-10=10

#include <stdio.h>

//take num1 ,num2 as Argument from main function
int add(int num1, int num2)
{
    //return sum to main function
    return num1+num2;
}
//take num1 ,num2 as Argument from main function
int sub(int num1, int num2)
{
    //return sum to main function
    return num1-num2;
}

int main()
{
    int num1=20;
    int num2=10;

    int addition=add(num1,num2);
    int subtraction=sub(num1,num2);

    // print the answer
    printf("%d + %d = %d\n",num1,num2,addition);
    printf("%d -%d =%d\n",num1,num2,subtraction);

    return 0;
}