

/////////////////////////////////            POINTER STRUCTURES             ////////////////////////////////////////////// 

/* 

Pointer to structures :: 

A pointer to the structure can be created as follows:

struct employee *ptr;
ptr=&e1;


Now we can print structure elements using:-

printf("%d",(*ptr).code);


Arrow operator:-
Instead of writing (*ptr).code, we can use an arrow operator to access structure properties as follows

(*ptr).code or ptr->code

Here -> is known as an arrow operator.


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
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;

    // (*ptr).code = 101; // here () is must in *ptr because of operator precedence
    ptr->code = 101;    //  This instruction and thge above instruction gives the same output 

    printf("%d\n",e1.code);

    return 0;  
}