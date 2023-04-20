

/////////////////////////////////               TAKING STRING INPUT            ////////////////////////////////////////////// 


/* 

Taking string input from the user :: 

We can use %s with scanf to take string input from the user -


char st[50];
scanf(“%s”,st);


SCANF AUTOMATICALLY ADDS THE NULL CHARACTER WHEN THE ENTER KEY IS PRESSED.

*/

//*****🤣🤣🤣🤣🤣🤣🤣🤣🤣🤣🤣🤨🤨🤨🤨🤨👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇******************************************************************************************************************************************************************

/* 

Note:

1. The string should be short enough to fit into the array.
2. scanf cannot be used to input multi-word strings with spaces.

*/


#include<stdio.h>

int main()
{
    char s[34] ;   // in string   s   34 characters can be save  
    printf("Enter your name: ");
    scanf("%s",s);

    printf("My name is %s\n\n", s);





    char a[30] ;   // in string   a   30 characters can be save  

    printf("Enter your name: ");
    scanf("%s",a); 
    //scanf cannot be used to input multi-word strings with spaces.
/* means if we enter ' hemant singh '  then only  ' hemant '  will be printed.
That's why we use the gets() and puts() funtion. */

    printf("Your name is %s\n\n", a);

    return 0;
}