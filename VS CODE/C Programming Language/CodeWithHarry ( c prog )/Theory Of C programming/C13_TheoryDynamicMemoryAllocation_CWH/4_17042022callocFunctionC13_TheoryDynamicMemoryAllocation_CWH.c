

/////////////////////////////////              calloc() FUNCTION                  ////////////////////////////////////////////// 

/* 

calloc() function ::

calloc stands for continuous allocation.
It initializes EACH memory block with a default value of 0.


Syntax:

ptr = (float*) calloc(30*sizeof(int)) //Allocates Contiguous space in memory for 30 blocks

calloc takes two arguments for example in above statement first is 30 and second is sizeof(int)


If the space is not sufficient, memory allocation fails and a NULL pointer is returned. 


*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int*)calloc(6 , sizeof(int));

/* void pointer  and NULL pointer  both are different things */

    // for(int i=0; i<6; i++)
    // {
    //     printf("Enter the value of %d element : ", i+1);
    //     scanf("%d", &ptr[i]);
    // }

/* if we does not run the above for loop then calloc will initialize each memory block with a default value of 0.
And in the below loop 0 will be printed*/

    for(int i=0; i<6; i++)
    {
        printf("The value of %d element is %d\n", i+1, ptr[i]);
    }

    return 0;
}