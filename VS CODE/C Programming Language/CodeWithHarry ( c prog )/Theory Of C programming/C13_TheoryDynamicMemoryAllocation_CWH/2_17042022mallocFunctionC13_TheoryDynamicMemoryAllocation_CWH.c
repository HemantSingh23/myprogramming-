

/////////////////////////////////              malloc() FUNCTION                  ////////////////////////////////////////////// 


/* 

malloc() function ::

Malloc stands for memory allocation. It takes number of bytes to be allocated as an input and returns a pointer of 
type void.


Syntax:

//            ptr = (int*)malloc(30*sizeof(int));
//
//  
//          (int*)     here            int     =>   casting Void Pointer to int
//  30*sizeof(int)     here             30     =>   space for 30 ints and
//  30*sizeof(int)     here              *     =>   multiplication 
//  30*sizeof(int)     here    sizeof(int)     =>   Returns the size of 1 int



The expression returns a NULL pointer if the memory cannot be allocated.

*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    // ptr = malloc(6 * 4); //  here 6 is space for 30 ints and 4 is the size of 1 int( in this architecture ot machine)
/* is is not a right way because it is not an optimal way to allocate a dynamically memory because
For this architecture ot machine the above statement is correct but for other architecture ot machine this statement
can be wrong due to size of 1 int because in other architecture ot machine   size of 1 int can be 2 or 4 or anyother thing
but here size of 1 int is 4 so this statement can be correct , that't why we use size sizeof() operator .  */

    // ptr =  malloc(6 * sizeof(int)); // it ia s correct statement
    // sizeof(int) this will give the size of 1 int , in which architecture ot machine we use this 




// use of  sizeof() operator in c language

    printf("The size of int on my pc is %d\n", sizeof(int) );   // 
    printf("The size of int on my pc is %d\n", sizeof(float) );
    printf("The size of int on my pc is %d\n", sizeof(char) );





    ptr = (int*)malloc(6 * sizeof(int));
/* malloc returns the void pointer so we are required to typecast it. Because we  are allocating it for integer so 
we will typecast  it  in   (int*)       */


/* void pointer  and NULL pointer  both are different things */

    for(int i=0; i<6; i++)
    {
        printf("Enter the value of %d element : ", i+1);
        scanf("%d", &ptr[i]);
    }


    for(int i=0; i<6; i++)
    {
        printf("The value of %d element is %d\n", i+1, ptr[i]);
    }

    return 0;
}