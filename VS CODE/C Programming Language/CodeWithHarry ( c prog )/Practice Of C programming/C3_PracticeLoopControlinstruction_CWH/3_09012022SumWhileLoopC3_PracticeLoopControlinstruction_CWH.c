
///////////////        Sum OF 10 Natural NUMBERS WHILE-LOOP            ////////////////

/*  Write a program to sum of 10 natural numbers using while loop.  */

#include<stdio.h>

int main()
{ 
    int a=10 , sum=0,i=0;
    
// while(i<=a)
// {
//     sum+=i; // sum = sum + i
//     i++;
// }
//     printf("The sum of the 10 natural numbers is %d\n",sum);

////////////////////////////////                 ////////////////////////////////

// for(i=0;i<=a;i++)
// {
//      sum+=i; // sum = sum + i

// }
// printf("The sum of the 10 natural numbers is %d\n",sum);

////////////            ///////////            /////////////               /////////////////

do
{
    sum+=i;
    i++;
}
  while (i<=a);

  printf("The sum of the 10 natural numbers is %d\n",sum);

    return 0;
}

