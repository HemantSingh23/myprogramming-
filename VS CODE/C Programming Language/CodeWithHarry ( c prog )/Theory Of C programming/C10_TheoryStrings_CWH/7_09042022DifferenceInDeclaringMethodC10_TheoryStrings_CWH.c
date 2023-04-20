

/////////////////////////////////              DIFFERENCE IN DECLARING METHOD          ////////////////////////////////////////////// 

//              PLEASE SEE THIS TILL LAST LINES and before run the code please comment out any one of these code

/* 👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇


👉👉👉👉👉👉DECLARING A STRING USING ARRAY 👈👈👈👈👈👈👈::

We can declare strings using array

char ptr[] = "Harry";



Once a string is defined using char st[]= "Harry"; it cannot be initialized to something else.
 
ptr="rohan";

*/


// #include<stdio.h>

// int main()
// {
//     // char *ptr = "Hemant Singh" ;
//     char ptr[] = "Hemant Singh" ;    // Declaring a string using array
  
//     // ptr ="Pushpendra Singh";      // Can not  reinitialized a string using array that's why this instruction is showing error.
    
//     printf("%s", ptr);   

//     return 0;
// }

//👆👆👆👆👆👆👆👆👆👆👆👆👆👆👆👆👆👆👆👆 






//****************😀😀😀😀**********************************🤔🤔🤔🤔*************************************🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈****************************//******************************************************************************************************************

//😀😀😀😀😀😀😀😀😀😀😀😀😀😀🤔🤔🤔🤔🤔🤔🤔🤔🤔🤔🤔🤔🤔🤔🤔🤔🤔🤔🤔🤣🤣🤣🤣🤣🤣🤣🤣🤨🤨🤨🤨🤨🤨🤨🎈🎈🎈🎈🎈🎈🎈🎈🤣🤣🤣🤣🤣🤣🤣🤣🤣🤣😀😀😀😀😀😀😀

//****************😀😀😀😀**********************************🤔🤔🤔🤔**************************************🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈**************************//********************************************************************************************************************








/* 👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇

👉👉👉👉👉👉Declaring a string using pointers👈👈👈👈👈👈👈 ::

We can declare strings using pointers

char *ptr= "Harry";


A string defined using pointers can be reinitialized.   
 
ptr="rohan";

*/

#include<stdio.h>

int main()
{
    char *ptr = "Hemant Singh" ;      // Declaring a string using pointers
    // char ptr[] = "Hemant Singh" ;    
  
    ptr ="Pushpendra Singh";              // Reinitialized a string using pointers
    
    printf("%s", ptr);   

    return 0;
}

//👆👆👆👆👆👆👆👆👆👆👆👆👆👆👆👆👆👆👆👆👆👆👆👆👆👆👆
