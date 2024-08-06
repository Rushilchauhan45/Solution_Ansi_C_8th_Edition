/*
Write a C Program to illustrate the use of typedef declaration in a Program.
*/

#include<stdio.h>

// typedef keyword is used to give new names for exiting datatypes
typedef int INTEGER;
typedef float FLOAT;
typedef char CHAR;

// use typedef struct for use new names as datatypes
typedef struct{
    INTEGER id;//use INTEGER as Datatype int
    CHAR name[20];//use CHAR as Datatype char
    FLOAT salary;//use FLOAT as Datatype float

}EMPLOYEE;

void main()
{
    // variable declaration using new names of Datatypes
    INTEGER a=10;
    CHAR b[20]="shyam";
    FLOAT c=20000.00;

    // declare varible of tye EMPLOYEE type
    EMPLOYEE emp1={1,"Ram",30000.00};

    // Print the values of the variables
    printf("Value of a: %d\n", a);
    printf("Value of b: %s\n", b);
    printf("Value of c: %.2f\n", c);
    
    // Print the details of the employee
    printf("Employee ID: %d\n", emp1.id);
    printf("Employee Name: %s\n", emp1.name);
    printf("Employee Salary: %.2f\n", emp1.salary);
}