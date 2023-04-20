

/////////////////////////////////              strcpy() LIBRARY FUNCTIONS       ////////////////////////////////////////////// 

/* 

strcpy()  ::

This function is used to copy the content of second string into first string passed to it.

char source[ ]= "Harry";
char target[30];
strcpy(target,source);    => target now contains "Harry"


Target string should have enough capacity to store the source string. 

*/

#include<stdio.h>
#include<string.h>

int main()
{
    char *st = "Beautiful";
    char st2[45];
    strcpy(st2,st);
    printf("Now the st2 is %s",st2);

    return 0;
}