

//////////////////////                CHANGE THE VALUE BY TEN TIMES                           ////////////////////////////////


/* Write a program to change the value of a variable to ten times its current value. Write a function and 
pass the value by reference. */

#include<stdio.h>



// int value(int *a) 
// /*here  a  store the   &i   that is address and   a   store the address that's why we are using the   int *a   because   a   is 
// the pointer  */ 
// {  
//     *a = *a  *  10 ;
//     return *a ;
// }



/* in the above and below function defition we can use anyone to solve our question ,  both funciton definition return the
10 times of the value of i  */



void value(int *a) 
{
    *a = *a  *  10 ;
    
}



int main()
{
    int i;
    printf("Enter the value of i\n");
    scanf("%d",&i);

    printf("Initial vaulue of i is %d\n", i);

    value(&i);   

    printf("Now, after pass the value, i will become 10 times ,so new vaulue of i is %d\n", i );

    return 0;
}

