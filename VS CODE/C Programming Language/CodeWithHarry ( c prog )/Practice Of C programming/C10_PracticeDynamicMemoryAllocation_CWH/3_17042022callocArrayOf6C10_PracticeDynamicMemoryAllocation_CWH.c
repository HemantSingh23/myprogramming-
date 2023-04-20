

////////////////////////////////             USING calloc() AN ARRAY OF SIZE 6 CAPABLE OF STORING 6 INTEGERS           /////////////////////////////////////////



/* Write a program to dynamically create an array of size 6 capable of storing 6 integers using calloc() function  */

#include<Stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr = (int*)calloc(6 , sizeof(int));

    for(int i = 0; i < 6; i++)
    {
        printf("Enetr the value of %d elements : ",i+1);
        scanf("%d", &ptr[i]);
    }

    for(int i = 0; i < 6; i++)
    {
        printf("The value of %d elements  is %d\n",i+1, ptr[i] );
    }

    
    return 0;
}