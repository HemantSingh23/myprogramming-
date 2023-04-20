

////////////////////////////////           USE calloc() TO STORE 10 INTEGERS            /////////////////////////////////////////


/* Create an array dynamically capable of storing 5 integers. Now use realloc so that it can now store 10 
integers using calloc() function */

/* Attempt problem 4 using calloc() function */

#include<Stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr = (int*)malloc(6 * sizeof(int));

    for(int i = 0; i < 6; i++)
    {
        printf("Enetr the value of %d elements : ",i+1);
        scanf("%d", &ptr[i]);
    }

    for(int i = 0; i < 6; i++)
    {
        printf("The value of %d elements  is %d\n",i+1, ptr[i] );
    }


    printf("\nAfter reallocation\n\n");


    ptr = (int*)calloc(6 , sizeof(int));

    for(int i = 0; i < 10; i++)
    {
        printf("Enetr the value of %d elements : ",i+1);
        scanf("%d", &ptr[i]);
    }

    for(int i = 0; i < 10; i++)
    {
        printf("The value of %d elements  is %d\n",i+1, ptr[i] );
    }


    return 0;
}