

////////////////////////////////            MULTIDIMENSIONAL ARRAYS                    /////////////////////////////////////////

/*
Multidimensional Arrays ::

An array can be of 2 dimension / 3 dimension / n dimensions.

A 2-dimensional array can be defined as:

//                int arr [3][2] = {
//                                  {1,4}
//                                  {7,9}
//                                  {11;22}
//                 };

We can access the elements of this array as arr [0] [0], arr [0] [1] & so on...

At arr [0] [0] value would be 1 and at arr [0] [1] value would be 4.


2-D arrays in Memory :: 

 A 2-d array like a 1-d array is stored in contiguous memory blocks like this:

//         [          ]  => it is a memory block and memory block are continuous
//                   
//
//              arr[0][0]    arr[0][1]    arr[1][0]    arr[1][1]     arr[2][0]      arr[2][1]  
//
//            [     1     ][     4     ][     7     ][     9     ][     11     ][     22     ]
//
//                87224        87228        87232        87236        87238         87240   
//
//
//
//
*/

#include <stdio.h>

int main()
{
    int n_students = 3;
    int n_subjects = 5;

    int marks[3][5];

    for (int i=0; i < n_students; i++)
    {
        for (int j=0; j < n_subjects; j++)
        {
            printf("Enter the marks of student %d in subject %d : ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    for (int i=0; i < n_students; i++) 
    {
        for (int j=0; j < n_subjects; j++)
        {
            printf("The marks of student %d in subject %d is %d\n", i + 1 , j + 1 , marks[i][j]);
        }
    }

    return 0;
}