
///////////////   SUM OF THE NUMBERS OCCURING IN THE MULTIPLICATION TABLE OF 8          ////////////////

/*  Write a program to sum of the  numbers occuring in the table of 8.  */

#include<stdio.h>
int main ()
{
int a,i=1;

printf("Enter the number : \n");
scanf("%d",&a);

printf("The multiplication table of %d is given below\n",a);

while(i<=10)
{
    printf("%d\n",a*i);
    i++;
}


// Now ,main question is starting from the below 

//We want the sum of the numbers occurs in the multiplication table 8 or in any table

int sum=0;

// while(i--)
// {
//     sum += a*i; // sum = sum + a*i;
//     // i++;
// }

// for (int i=0; i<=10; i++)
for (i=0; i<=10; i++)
// for (i; i<=10; i++)
{
       sum += a*i; // sum = sum + a*i;

}

 printf("The Sum Of The Number Occures In The Multiplication Table Of %d is %d\n",a,sum);

    return 0;
}