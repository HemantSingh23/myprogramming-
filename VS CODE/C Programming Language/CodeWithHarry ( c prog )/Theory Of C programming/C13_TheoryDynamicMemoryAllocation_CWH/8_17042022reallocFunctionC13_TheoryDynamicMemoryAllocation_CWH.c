

/////////////////////////////////              realloc() FUNCTION                  ////////////////////////////////////////////// 

/* 

realloc() function ::

Sometimes the dynamically allocated memory is insufficient or more than required.
realloc is used to allocate memory of new size using the previous pointer and size.

Syntax:

ptr = realloc(ptr,newSize);
ptr = realloc(ptr, 3* sizeof(int)) //ptr now points to this new block of memory, which is capable of storing 3 int 


*/


#include<stdio.h>
#include <stdlib.h>


int main()
{
    int *ptr ;
    ptr = (int*)malloc(6*sizeof(int));

    for(int i=0; i<6; i++)
    {
        printf("Enter the value of %d element : ", i+1);
        scanf("%d", &ptr[i]);        
    }

    for(int i=0; i<6; i++)
    {
        printf("The value of %d element is %d\n", i+1, ptr[i]);
    }


// Reallocate ptr using realloc()

    ptr = realloc(ptr, 10 * sizeof(int)) ;
    
    for(int i=0; i<10; i++)
    {
        printf("Enter the value of %d element : ", i+1);
        scanf("%d", &ptr[i]);        
    }

    for(int i=0; i<10; i++)
    {
        printf("The value of %d element is %d\n", i+1, ptr[i]);
    }

    return 0;
}
