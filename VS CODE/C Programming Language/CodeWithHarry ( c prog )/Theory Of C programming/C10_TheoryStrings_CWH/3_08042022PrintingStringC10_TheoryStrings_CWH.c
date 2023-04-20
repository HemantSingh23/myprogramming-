

/////////////////////////////////               PRINTING STRINGS             ////////////////////////////////////////////// 


/* 

Printing Strings :: 

A string can be printed character by character using printf and   %c (format specifier for characters).
But there is another convenient way to print strings in C language 



char st[] = ”HARRY”;
printf(“%s”,st);          //  prints the entire string.


here %s is the format specifier for printing the entire string
Also %s can take the input from the user .

*/


#include<stdio.h>

int main()
{
    // char *ptr = "Hemant Singh" ;
    char ptr[] = "Hemant Singh" ;

// both the above instruction are same 

    printf("%s", ptr);
    /*  %s is a format specifier just like %d , %f , %c  etc. */

    return 0;
}