/*when we will have some condition  for any work*/

/*
//Decision Making instruction in C programming-

1. if-else  statement
2. Switch statement

in if-else statement,  else block is not necessary we can use if alon.
 */


//USE OF IF ALON 
#include <stdio.h>
int main()
{
    int a;
    printf("enter a number \n");
    scanf("%d", &a);

    if (a%2== 0)/*if a is even only then it print it even otherwise it print the no only*/
    { 
    
    printf("%d is even\n",a);
    } 

    return 0;
}