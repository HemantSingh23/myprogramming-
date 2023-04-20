
/////          Find Leap year        ///////

/*Write a program to find whether a year entered by the user is a leap year or not .
Take year as an input from the user??

/////// To determine whether a year is a leap year, follow these steps:

1. If the year is evenly(totally) divisible by 4, go to step 2. Otherwise, go to step 5.
2. If the year is evenly(totally) divisible by 100, go to step 3. Otherwise, go to step 4.
3. If the year is evenly(totally) divisible by 400, go to step 4. Otherwise, go to step 5.
4. The year is a leap year (it has 366 days).
5. The year is not a leap year (it has 365 days).
 
( here evenly means totally ).


CONCLUSION OF THE ABOVE RULE IS GIVEN BELOW:

1.   IF THE YEAR NUMBER END WITH NO DOUBLE ZERO LIKE 1990, 1992, 2004, 2010, 2020 THEN APPLY BELOW 
     CONCLUSION.

     FIRST CHECH DIVISIBILITY BY 4 IF DIVISIBLE BY 4 THEN CHECK DIVISIBILITY BY 100. IF ANY
     YEAR IS NOT DIVISIBLE BY 100 THEN THAT YEAR IS A LEAP YEAR.  

2.   BUT IF YEAR NUMBER END WITH DOUBLE ZERO  LIKE 1600 1800, 1900, 2000, 2100, 2200. THEN APPLY THE 
     BELOW CONCLUSION.

     FIRST CHECH DIVISIBILITY BY 4 IF DIVISIBLE BY 4 THEN CHECK DIVISIBILITY BY 400. IF ANY
     YEAR IS DIVISIBLE BY 400 THEN THAT YEAR IS A LEAP YEAR.  

 */



#include <stdio.h>
int main()
{
    int Year;
    printf("Enter the Year\n");
    scanf("%d", &Year);

    if ( (Year % 4 == 0 && Year % 100 != 0) || (Year % 4 == 0 && Year % 400 == 0) )
    // if (Year % 4 == 0 || Year % 400 == 0)

    {
        printf("%d is Leap Year\n", Year);
    }
    else
    {
        printf("%d is not Leap Year", Year);
    }

    return 0;
}