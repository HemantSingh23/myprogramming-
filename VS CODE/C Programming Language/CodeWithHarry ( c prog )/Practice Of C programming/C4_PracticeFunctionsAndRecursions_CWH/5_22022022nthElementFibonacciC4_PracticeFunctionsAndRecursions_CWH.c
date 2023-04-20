
/////////////////////////                Nth ELEMENT OF THE FIBONACCI SERIES WITH RECURSION                      ////////////////////////////////

/* WRITE A PROGRAM USING RECURSION TO CALCULATE THE NTH ELEMENT OF THE FIBONACCI SERIES. */

/* FIBONACCI SERIES::

In mathematics, the Fibonacci numbers, commonly denoted Fₙ, form a sequence, the Fibonacci sequence,
in which each number is the sum of the two preceding ones. The sequence commonly starts from 0 and 1, although some authors
omit the initial terms and start the sequence from 1 and 1 or from 1 and 2 .    Wikipedia */

/* The Fibonacci numbers are the numbers in the following integer sequence.....

   0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..

its terms are denoted by :-

F0, F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, ........................

here F0 = 0, F1 = 1, F2 = 1, F3 = 2, F4 = 3, F5 = 5, F6 = 8, F7 = 13, F8 = 21, F9 = 34, F10 = 55, F11 = 89, F12 = 114,..........................

In mathematical terms, the sequence Fn of Fibonacci numbers is defined by the recurrence relation

//          Fn = Fn-1 + Fn-2


with seed values given below

//          F0 = 0 and F1 = 1.      */

/* The Fibonacci Sequence is the series of numbers:

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

The next number is found by adding up the two numbers before it:

the 2 is found by adding the two numbers before it (1+1),
the 3 is found by adding the two numbers before it (1+2),
the 5 is (2+3),
and so on!                     */


//////////////          ////////////////            /////////////////          /////////////////           ///////////////            /////////////         //////////               /////////////////
 
// Fn = Fn-1 + Fn-2

#include <stdio.h>

int fib(int x);

int main()
{
   int n;
   printf("Enter the number for which you want to see the respective element of that number in the fibonacci series\n");
   scanf("%d", &n);

   printf("%dth element of the fibonacci series is given below\n", n);

   printf("%d", fib(n) );

   return 0;
}

int fib(int x)
{
   if (x == 0)
   {
      return 0;
   }
 
   else if (x == 1)
   {
      return 1;
   }

   else
   {
      return x = fib(x - 1) + fib(x - 2);
   }
   
}