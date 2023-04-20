

////////////////////////////////              OWN VERSION OF STRLEN             /////////////////////////////////////////

/* Write your own version of strlen function from <string.h> */

#include <stdio.h>
// #include <string.h>

int mystrlen(char st[]) // for this means for my own function of strlen()  do not need #include <string.h> header file
{
   char *ptr = st;
    int i=0;
    while( *ptr != '\0')
    {
        i++;
        ptr++;
    } 
    return i;
}

int main()
{
    char st[] = "Hemant Singh and Pushpendra Singh";

    // printf("With the help of standered library version of strlen\n");

    // strlen(st);
    // printf("The length of string st is %d\n\n\n", strlen(st) );




    // printf("My own version of strlen function\n");

    // char *ptr = st;
    // int i=0;
    // while( *ptr != '\0')
    // {
    //     i++;
    //     ptr++;
    // }
    // printf("The length of string st is %d\n\n\n", i );




    printf("BY my own function of strlen function from <string.h> \n");

    mystrlen(st); // for this means for my own function of strlen()  do not need #include <string.h> header file

    printf("The length of string st is %d\n\n\n", mystrlen(st) );


    return 0; 
}
