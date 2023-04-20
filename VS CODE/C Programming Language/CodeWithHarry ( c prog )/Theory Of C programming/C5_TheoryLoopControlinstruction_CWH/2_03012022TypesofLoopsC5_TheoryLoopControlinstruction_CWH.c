
///////////////////           TYPES OF LOOPS             ///////////////////

/*Types Of Loops----
Primarily, thereare three types of loops in C language.

1. while loop
2. do-while loops
3. for Loop
 */

/*
1. while loop ----

while(condition is true){
    // code
    //code
}
// the block keeps executing as long as the condition is true

IE THE CONDITION NEVER BECOMES FALSE, THE WHILE LOOP KEEPS GETTING EXECUTED. SUCH A
LOOP IS KNOWN AS AN INFINITE LOOP. For example see line 45 of the code
*/

#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    // while (a < 10)
 /*first if we enter the value of a equal to 0 then in 1st round while loops check 
    whether condition(a<10) is true or not (means value of a is less than 10 or not) and if 
    because a<10 so in the 1st round condition(a<10) is true then the  code, 
    inside the curly braces  will be executed and it will print the required output

    But below we  also use a++ so now the value of a will be 1 (0+1=1) then in the 2nd
    round also while loops again check whether condition is true or not.if true then
    code,inside the curly braces  will be executed and it will print the required output
    
    the above process will be continue untill condition does not false and then code, 
    inside the curly braces  will not be executed and it will not print output

    */
   while(a>0)//IT WILL LEAD TO AN INFINITE LOOP
    {
        printf("%d\n", a);
        a++; // if we not use it program print the 1, 9times.
    }

    return 0;
}