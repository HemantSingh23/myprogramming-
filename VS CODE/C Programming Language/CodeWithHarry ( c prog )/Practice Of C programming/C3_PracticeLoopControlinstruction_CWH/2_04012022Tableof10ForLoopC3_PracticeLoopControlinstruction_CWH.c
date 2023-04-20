
////////////////////////////          TABLE OF 10  For Loop        ///////////////////////////

/*  Write a program to print multiplication table of a given number n.  */

#include<stdio.h>
int main()
{
    int n,a=1;
    printf("Enter the number\n");
    scanf("%d",&n);

        printf("The multiplication table of %d is given below\n",n);

    for(n; a<=10; a++)
    {
        printf("%d\n",n*a);

    }
//////////       //////////           ANOTHER WAY           //////////      ///////////

printf("Now, Another way to print the table of already konwn number\n\n");

printf("The multiplication table of 10\n");
 for( int i=10; i; i--)
 {
     printf("10 X %d = %d\n", i,10*i);
 }


    return 0;
}