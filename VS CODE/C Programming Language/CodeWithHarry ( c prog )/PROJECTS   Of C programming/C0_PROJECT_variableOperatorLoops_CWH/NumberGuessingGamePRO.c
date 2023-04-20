
//////////////////       PROJECT 1: NUMBER GUESSING GAME        ////////////////////

/*

PROBLEM: 

This is going to be fun!!  We will write a program that generates a random number and 
asks the player to guess it. If the player’s guess is higher than the actual number, the program
displays “Lower number please.” Similarly, if the user’s guess is too low, the program prints 
“Higher number please.”

When the user guesses the correct number, the program displays the number of guesses the player
used to arrive at the number.

HINTS:

Use loops
Use a random number generator.               */

///////////   ///////   /////////   ////////   //////////   /////////   /////////  /////////  /////////  //////////  /////////  ////////  /////////


#include<stdio.h>
#include<stdlib.h>  /* it is an library to generate the random number.but it prints only 41
so we initialized it and for this we will use   srand(time(0))   */
#include<time.h>// we use this headerfile because we use time(0) .

int main()
{
    int number, guess, nguesses=1; // nguesses means ' number of guesses ' .
    srand(time(0));/* If we want that program print different-different random numbers
    then we use this line. Here time(0) return the time in seconds and mostly everytime , a 
    different number will print.  */

    // number = rand(); // it generates the random number
    /*if we want that random number are in between 0 and 100 so we use the below line*/
    number = rand()%100 + 1 ;


    // printf("The Number is %d\n", number);


    // now we will use the loop for keep running the loops untill the number is guessed.

    do{
        printf("Guess the number between 1 and 100\n");
        scanf("%d", &guess);
        if(guess>number)
        {
            printf("Please enter the   #$@ LOWER NUMBER #$@\n\n");
        }
        else if(guess<number) 
        {
            printf("Please enter the   #$@ HIGHER NUMBER #$@\n\n");
        }

        else
        {
            printf("You guessed in %d attempts\n", nguesses);
        }
        nguesses ++;

    } while( guess != number ) ;

    return 0;
}