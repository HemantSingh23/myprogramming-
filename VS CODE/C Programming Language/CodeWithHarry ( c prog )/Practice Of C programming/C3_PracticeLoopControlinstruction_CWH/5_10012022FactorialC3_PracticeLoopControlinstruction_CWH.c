
/////////       CALCULATE THE FACTORIAL OF A GIVEN NUMBER USING FOR LOOP        //////////

/*  Write a program to calculate the factorial of a given number  */

#include<stdio.h>
int main()

{
    int a, i=1, factorial=1;
    printf("Enter the number :\n");
    scanf("%d",&a);

    printf("The factorial of the %d is given below\n",a);

// while(i,i<=a)
// {
//     factorial *= i; // factorial = factorial
//     i++;
// }

//////////      ///////////          ///////////          /////////////    ///////////

    // for ( int i=1; i<=a; i++ ) 
    // for (i=1; i<=a; i++)
    for (i; i<=a; i++)

    {
       factorial *= i; // factorial = factorial*i;
    }

printf("%d\n",factorial);

    return 0;
}