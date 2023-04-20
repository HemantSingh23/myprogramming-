

/////////////////////////////////               WHAT IS STRING ??                  ////////////////////////////////////////////// 


/* 
String :: 
A string is a 1-d character array terminated by a null(‘\0’).

in normal words :- As we make the array by using integers,flotes etc.same as if we make  an array of characters then that 
array is called strings but at the end  of the aaray, a null character( '\0' ) must be there .

NULL character( '\0 ') :
The null character is used to denote string termination, characters are stored in contiguous memory locations.

null character( '\0' ) tells us that characters has ended or the string has ended 

*/



/* 
Initializing Strings::

Since string is an array of characters, it can be initialized as follows:

char s[]={'H','A','R','R','Y','\0'} 


There is another shortcut for initializing strings in c language:

char s[]="HARRY";    => In this case C adds a null character automatically.

*/


#include<stdio.h>

int main()
{
    
    // char str[] = {'H', 'a', 'r', 'r', 'y', '\0' };

    char str[] = "Harry";

// Both the above instructions are same . Only the way of writing is different.

/*  
char str[] = "Harry";   in this instruction we are not using the null character( '\0' ) because we are using 
the double quote ( " " ) 

*/
 
    return 0;
}



//***************************************************************************************************************************************************************************************************************************************


/* 
Strings in memory :: 

A string is sorted just like an array in the memory as shown below :



//       [  H  ][  A  ][  R  ][  R  ][  Y  ][  \0  ]     =>     [     ]   it is a memory block . And  '\0' is a null character.
//        82210  82211  82212  82213  82214  82215       =>     these are address of memory block  
//
//            contiguous block in memory
*/ 

