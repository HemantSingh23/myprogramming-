

////////////////////////////////            realloc() TABLE OF 7           /////////////////////////////////////////



/* Create an array of the multiplication table of 7 up to 10 (7x10=70). Use realloc to make it store 15 
numbers(from 7x1 to 7x15).. */

#include<Stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;


    ptr = (int*)malloc(10 * sizeof(int));

    for(int i = 0; i < 10; i++)
    {
        printf("The value of %d elements  is 7 X %d\n",i+1, 7*(i+1) );
    }




    printf("\nAfter reallocation\n\n");



    ptr = realloc( ptr , 15*sizeof(int));

    for(int i = 0; i < 15; i++)
    {
        printf("The value of %d elements  is 7 X  %d\n",i+1, 7*(i+1)  );
    }


    return 0;
}