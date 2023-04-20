

////////////////////////////////            Accessing arrays using pointers                      /////////////////////////////////////////

/*
Accessing arrays using pointers ::

Consider this array,

//                      [7][9][2][8][1]
//                       0  1  2  3  4         => index

If ptr points to index 0, ptr++ will point to index 1 & so on...

This way we can have an integer pointer pointing to the first element of the array like this:

int * ptr = & arr[0];       // int * ptr = arr ;           // these both are same   
ptr++;

*ptr   => will have 9 as it’s value 


*/



#include <stdio.h>

int main()
{
    int marks[4];
    int *ptr;
 
    // ptr = &marks[0];
    ptr = marks;        // this statement and the above statement are the same


    for (int i = 0; i < 4; i++)
    {
        printf("Enter the marks for student %d :: ", i + 1);
        scanf("%d", ptr);  
    // here we are not using the &(ampersand) because in the above statement ptr is already defined as    ptr = &marks[0]; 
        ptr++;
    }


    for (int i = 0; i < 4; i++)
    {
        printf("The marks for student %d  is %d\n", i + 1 , marks[i] );
        
    }

    return 0;
}