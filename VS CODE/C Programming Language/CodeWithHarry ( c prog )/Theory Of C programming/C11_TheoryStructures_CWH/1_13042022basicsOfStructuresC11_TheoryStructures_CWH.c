

/////////////////////////////////               WHAT IS STRUCTURES ??                  ////////////////////////////////////////////// 

/*  

Structures :: 

Arrays and Strings   => Similar data (int, float, char)

Structures can hold  => dissimilar data



**********************************************************************************************************************************************************************************************************************************************************


Syntax for creating Structure

A C Structure can be created as follows:-


struct employee{
int code;                          => this declares a new user-defined datatype
float salary;
char name[10];
};                                 //     semicolon is important




**********************************************************************************************************************************************************************************************************************************************************



We can use this user-defined data type as follows:-


struct employee e1;          // creating a structure variable
strcpy(e1.name,"harry");
e1.code=100;                 // Dot ( . ) is a  member access operators
e1.salary=71.22;



 
👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈

SO A STRUCTURE IN C IS A COLLECTION OF VARIABLES OF DIFFERENT TYPES UNDER A SINGLE NAME.

👆👆👆👆👆👆🎈🎈🎈🎈🎈🎈🎈🦻🦻🦻👆👆👆🎈🎈🎈👆👆👆👆👆🎈🎈🎈🎈🎈🎈🎈🎈🎈


*/



//*********************************************************************************************************************************************************************************************************************************************************



/* 

Member Access Operators ::

Dot ( . ) is a  member access operators

lets take the example of the above user-defined data type ( struct employee e1; )

employee e1 ka jo code hai use set kr do 100
employee e1 ki jo salary hai use set kr do 34.454  
employee e1 ka jo name hai use set kr do Hemant  using strcpy 

*/

#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary ;
    char name[10] ;
};
 
int main()
{

    struct employee e1;

    e1.code = 100;
    e1.salary = 34.454; 
    // e1.name = "Hemant";        
    /*The above instructions Won't work because it is a character array not character pointer so we cant make a string like this  */

    strcpy(e1.name, "Hemant");



    printf("%d\n", e1.code);
    printf("%f\n", e1.salary);
    printf("%s\n", e1.name);


    return 0;
}


   




















