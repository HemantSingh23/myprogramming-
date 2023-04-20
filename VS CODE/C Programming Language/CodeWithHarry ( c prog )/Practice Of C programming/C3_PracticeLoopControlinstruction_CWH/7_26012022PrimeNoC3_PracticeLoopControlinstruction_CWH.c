
//////////////////////            PRIME NUMBER OR NOT USING LOOPS              /////////////////////// 

/*  Write a program to check given number is prime or not using loops.  */


///////               This is not the best method to solve this problem                   ///////

#include<stdio.h>
int main()
{
    int n, i=2, p ;
    printf("Enter the number :\n");
    scanf("%d",&n);

while(n>1, i<n)
{
    p = n % i ;
    i++;
    if(p==0)
    {
        break;
    }
}
if(p == 0  )
    {
        printf("Number is not prime\n");
    }

    else if (p != 0)
    {
        printf("Number is prime\n");
    }

    // else
    // {
    //     printf("Could not say anything");
    // }

    return 0;
}