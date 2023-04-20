

/////////////////////////////////              QUICK QUIZ                ////////////////////////////////////////////// 

/* 

Quick Quiz :: Write a program to store the details of 3 employees from user-defined data. 
Use the structure declared earlier.

*/
//******************************************************************************************************************************************************************************************************************************************************
/* 

Why use structures?

We can create the data types in the employee structure separately but when the number of properties in a structure 
increases, it becomes difficult for us to create data variables without structures. 


In a nutshell:

1. Structures keep the data organized.
2. Structures make data management easy for the programmer.

*/



#include<stdio.h>

struct employee
{
    int code;
    float salary;
    char name[100];
};

int main()
{
    struct employee e1 , e2 , e3 ;
    

    // for e1 

    printf("Enter the value for code of e1 : ");
    scanf("%d",&e1.code);
    
    printf("Enter the value for salary of e1 : ");
    scanf("%f",&e1.salary);

    printf("Enter the value for name of e1 : ");
    scanf("%s", e1.name);

    printf("\n\n");



    // for e2 

    printf("Enter the value for code of e2 : ");
    scanf("%d",&e2.code);
    
    printf("Enter the value for salary of e2 : ");
    scanf("%f",&e2.salary);

    printf("Enter the value for name of e2 : ");
    scanf("%s", e2.name);

    printf("\n\n");



    // for e3

    printf("Enter the value for code of e3 : ");
    scanf("%d",&e3.code);
    
    printf("Enter the value for salary of e3 : ");
    scanf("%f",&e3.salary);

    printf("Enter the value for name of e3 : ");
    scanf("%s", e3.name);

    printf("\n\n");



    // for e1 output
    printf("For enployee e1 ::\n");

    printf("%d\n", e1.code);
    printf("%f\n", e1.salary);
    printf("%s\n\n\n", e1.name);



    // for e2 output
    printf("For enployee e3 ::\n");

    printf("%d\n", e2.code);
    printf("%f\n", e2.salary);
    printf("%s\n\n\n", e2.name);



    // for e3 output
    printf("For enployee e3 ::\n");

    printf("%d\n", e3.code);
    printf("%f\n", e3.salary);
    printf("%s\n\n\n", e3.name);
    
    return 0;
}