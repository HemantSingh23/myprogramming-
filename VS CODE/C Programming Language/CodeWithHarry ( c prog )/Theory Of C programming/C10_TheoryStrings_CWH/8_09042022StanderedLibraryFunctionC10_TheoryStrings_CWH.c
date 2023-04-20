

/////////////////////////////////              STANDARD LIBRARY FUNCTIONS FOR STRINGS        ////////////////////////////////////////////// 


/* 

Standard library functions for Strings ::

C provides a set of standard library functions for strings manipulation.
Some of the most commonly used string functions are:

strlen() :- This function is used to count the number of characters in the string 👉👉excluding👈👈 the null ('\0') character.

int length=strlen(st);

These functions are declared under <string.h> header file. If we  do not use this header file then compiler will give the warning

*/

#include<stdio.h>
#include<string.h>

int main()
{
    char *st = "HemantSingh" ;
    // int a = strlen(st);

    // printf("The length of string st is %d", a);
    printf("The length of string st is %d", strlen(st) );


    return 0;   
} 