

/////////////////////////////////              strcat() LIBRARY FUNCTIONS       ////////////////////////////////////////////// 

/* 
strcat() ::

This function is used to concatenate two strings

char s1[11]= ”Hello”;
char s2[ ]= ”Harry”;
strcat(s1,s2);                 //s1 now contains “Hello Harry” <No space in between>

*/

#include<stdio.h>
#include<string.h>

int main()
{
    char st1[45] = "Hello";
    char *st2 = "Hemant";
    strcat(st1, st2);

    printf("Now the st1 is %s", st1);

    return 0;
}