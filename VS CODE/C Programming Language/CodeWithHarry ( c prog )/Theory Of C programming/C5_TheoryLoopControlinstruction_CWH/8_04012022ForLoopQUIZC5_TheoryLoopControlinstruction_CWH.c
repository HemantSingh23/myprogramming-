
////////////////////////         QUIZ FOR LOOP          /////////////////////

/* Write a program to print first n natural numbers using for loop */

#include<stdio.h>
int main()
{
    int n;
        printf("Enter the number\n");
        scanf("%d", &n);
        printf("The first %d natural number is given below\n",n);
    for(int a=1; a<=n; a++)
    {
        printf("%d\n",a);
    }


    return 0;
}