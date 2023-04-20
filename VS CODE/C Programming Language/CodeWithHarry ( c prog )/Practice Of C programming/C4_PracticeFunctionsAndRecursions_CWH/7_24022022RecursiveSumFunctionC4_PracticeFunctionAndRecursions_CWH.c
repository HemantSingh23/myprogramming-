

/////////////////////////          RECURSIVE FUNCTION TO SUM OF N NATURAL NUMBERS                          ////////////////////////////////

/* Write a recursive function to calculate the sum of first n natural numbers. */

//  sum of first n natural numbers = n(n+1)/2

#include <stdio.h>

float sum(int a);

int main()
{
    int n;
    printf("Enter the number till when we want the sum of natural numbers\n");
    scanf("%d", &n);

    printf("The value of the sum of first %d natural numbers are %f", n, sum(n));

    return 0;
}

float sum(int a)
{
    if (a == 1)
    {
        return 1;
    }

    else if( a >=2 )
    {
        return ( a * (a+1) ) / 2 ;
    }
}

