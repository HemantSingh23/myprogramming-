

/////////////////////////////////            INITIALIZING STRUCTURES             ////////////////////////////////////////////// 


/* 

Initializing Structures ::

Structures can also be initialized as follows:

struct employee harry={100,71.22,"Hemant"};
struct employee shubh={0};                   // All the elements set to 0

*/

//*********************************************************************************************************************************************************************************************************************************************888\

/* 
Structures in memory ::

Structures are stored in contiguous memory locations for the structures e1 of type struct employee, memory layout 
looks like this:

//        [  100  ][  71.22  ][  "Harry"  ]   =>   [     ]   it is a memory block .
//          62302     62306       62310       =>   these are address of memory block  


*/



#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[100];
};


int main()
{
    struct employee harry = { 100 , 34.23 , "Hemant" };

    printf("Code is : %d\n", harry.code);
    printf("Salary is : %f\n", harry.salary);
    printf("Name is : %s\n", harry.name);


    return 0;
}