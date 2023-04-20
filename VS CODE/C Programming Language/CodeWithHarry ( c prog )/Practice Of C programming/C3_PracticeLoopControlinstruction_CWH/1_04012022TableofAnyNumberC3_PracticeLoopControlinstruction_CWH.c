
///////////////////////          TABLE OF 10 While Loop         //////////////////////

/*  Write a program to print multiplication table of a given number n.  */

#include<stdio.h>
int main()
{
 int n,i=1,table;
 printf("Enter the number\n");
 scanf("%d",&n);

printf("The multiplication table of %d is given below\n",n);

 while(i<=10)
 {
     table=n*i;
     printf("%d\n",table,i++);
    //  i++;
 }


    return 0;
}