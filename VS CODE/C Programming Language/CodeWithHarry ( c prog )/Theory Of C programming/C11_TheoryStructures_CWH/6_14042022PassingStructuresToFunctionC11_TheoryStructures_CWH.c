

/////////////////////////////////            PASSING STRUCTURE TO A FUNCTION           ////////////////////////////////////////////// 

/*  

Passing Structure to a function :: 

A structure can be passed to a function just like any other data type.

void show(struct employee e);   //Function prototype


*/

#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[100];
};

void show(struct employee emp)
{
    printf("The code of the employee is: %d\n", emp.code);
    printf("The salary of the employee is: %f\n", emp.salary);
    printf("The name of the employee is: %s\n", emp.name);
    emp.code = 34;  
}



int main()
{
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;

    // (*ptr).code = 101; // here () is must in *ptr because of operator precedence
    ptr->code = 101;    //  This instruction and the above instruction gives the same output 
    ptr->salary = 11.01; 
    strcpy(ptr->name, "Hemant"); 

    show(e1);

    printf("The code of the employee is %d\n", e1.code);
/*we  use this    emp.code = 34;     at the end of the function prototype(above)
still this statement gives same output 101 that means only the copy of the stucture is pass in the function means 
structure is not changing by reference */

    return 0;  
}