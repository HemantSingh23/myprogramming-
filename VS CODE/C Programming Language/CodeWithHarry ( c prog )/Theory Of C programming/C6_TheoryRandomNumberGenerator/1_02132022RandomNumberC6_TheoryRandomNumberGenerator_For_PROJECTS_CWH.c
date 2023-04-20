
//////////////////////            RANDOM NUMBER GENERATE THEORY           ////////////////////////

//      This theory is for PROJECT 1(number guessing game).

#include<stdio.h>
#include<stdlib.h>  /* it is an library to generate the random number.but it prints only 41
so we initialized it and for this we will use   srand(time(0))   */
#include<time.h> // we use this headerfile because we use time(0) .

int main()
{
    int number;
    srand(time(0));/* If we want that program print different-different random numbers that's
    why we use this line. Here time(0) return the time in seconds and mostly everytime , a 
    different number will print.  */

    // number = rand(); // it generates the random number
    /*if we want that random number are in between 0 and 100 so we use the below line*/
    number = rand()%100 + 1 ;


    printf("The Number is %d", number);

    return 0;
}