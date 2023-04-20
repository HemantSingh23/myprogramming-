

////////////////////////////////              COMPARE TWO STRINGS              /////////////////////////////////////////



/* 
1. Which of the following is used to appropriately read a multi-word string-
Gets()
Puts()
Printf()
Scanf()
  

answer is gets .
But scanf() can also read a multi-word string using some inputs but not appropriately
printf() and puts() already out because they only print

*/



/* 2.   Write a program to take a string as an input from the user using %c and %s. Confirm that the strings are equal. */

/*  */

#include<stdio.h>
#include<string.h>

int main()
{
    char st1[50] ;
    char st2[50] ;

    printf("Enter the value of 1st string st1 :: ");
    scanf("%s",st1);


    printf("Enter the value of 2nd string st2 character by character :: ");
    scanf("%c",&st2);

    char c ;
    int i=0;
    while(c != '\n' )
    {
        fflush(stdin);
        scanf("%c",&c);
        st2[i] = c;
        i++;
    }
    st2[i-1] = '\0';   // if we want that  strcmp return 0 as an output
    // st2[i] = '\0';     // if we want that  strcmp return -1 as an output

    printf("The value of 1st and 2nd string is %s and %s\n", st1, st2);
    
    printf("strcmp for these stings return is %d", strcmp(st1, st2));

/* the above line will give the -1 as an output because  if st2[i] = '\0';  and  1st string is "This"  and 2nd string is 
also "This" then just because we enter the 2nd string character by characters and after entering t h i s we again press 
the  enter button also which is a line and line comes from \n that's why  2nd string becomes this\n that's the reason
that's why strcmp return -1 as an output.
*/
/* Now if we want that  strcmp return 0 as an output then we will have to use  st2[i-1] = '\0'; */


    return 0;
}







