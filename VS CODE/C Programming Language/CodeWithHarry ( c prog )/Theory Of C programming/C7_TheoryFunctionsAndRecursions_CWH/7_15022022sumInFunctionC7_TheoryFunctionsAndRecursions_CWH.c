
/////////////////             ////////////////           //////////////////              ///////////////// 




/* Please Also Read The Last Lines Of the Program For Difference Between Arguments and Parameters */

#include<stdio.h>

int sum(int a , int b);              // Function Prototype

 /* sum is a function which takes a and b as input and returns an integer as an output. */


int main()
{
    int c;
    c = sum(2,5); /*  Here 2 , 5 are the the arguments. */
    printf("The value of c is %d\n",c);
    
    return 0;
}

int sum (int a , int b)
{
    int result = 0;
    result = a+b;

    return result;
}

/* ARGUMENT:- Argument are the Actual Values. In the 19th Line, c = sum(2,5);   2 ,5 are the
 arguments.
 
 PARAMETERS:- Parameters are the not the Actual Values

ex. ( int a , int b )  here  a , b are the Parameters*/