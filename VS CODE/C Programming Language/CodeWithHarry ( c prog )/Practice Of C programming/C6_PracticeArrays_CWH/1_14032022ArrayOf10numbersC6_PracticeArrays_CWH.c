

////////////////////////////////           ARRAY OF 10 NUMBERS                    /////////////////////////////////////////

/* Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is
a pointer pointing to the first element of the array. */

#include <stdio.h>

int main()
{
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the %d element of the array : ", i+1 );
        scanf("%d", &arr[i] );
    }


    printf("The required array is given below\n{");
    for (int i = 0; i < 10; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("}\n");


    // int *ptr = &arr[0];    // it is given that ptr is a pointer pointing to the first element of the array.
    int *ptr = arr;           
    /* Output of the both the line are same because    &arr[0];   means address of first element of array. 
    and same   arr;  also means address of first element of array.  */


    ptr = ptr + 2;

    if( ptr == &arr[2])
    {
        printf("(ptr+2) points to the third element of array that is %d", arr[2] );
    }

    else
    {
        printf("(ptr+2) does not points to the third element of array\n");
    }


    return 0;
}