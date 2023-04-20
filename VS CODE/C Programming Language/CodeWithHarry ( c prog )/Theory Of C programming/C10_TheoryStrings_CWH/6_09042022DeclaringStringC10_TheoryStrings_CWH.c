

/////////////////////////////////               DECLARING A STRING USING POINTERS          ////////////////////////////////////////////// 

/* 

Declaring a string using pointers ::

We can declare strings using pointers

char *ptr= ”Harry”;

This tells the compilers to store the string in the memory and the assigned address is stored in a char pointer.


 👉👉👉👉👉👉👉👉👉👉👉👉👉👉👉👉👉👉👉

Note:

1. Once a string is defined using char st[]= ”harry”, it cannot be initialized to something else.
2. A string defined using pointers can be reinitialized.   => ptr=”rohan”;

*/


#include<stdio.h>

int main()
{
    // char *ptr = "Hemant Singh" ;
    char ptr[] = "Hemant Singh" ;

// both the above instruction are same
  
    // ptr ="Hemant Singh";
    printf("%s", ptr);
    /*  %s is a format specifier just like %d , %f , %c  etc. */

    return 0;
}