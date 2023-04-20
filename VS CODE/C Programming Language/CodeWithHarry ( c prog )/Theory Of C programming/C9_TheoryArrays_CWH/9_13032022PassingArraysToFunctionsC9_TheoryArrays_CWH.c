

////////////////////////////////            PASSING ARRAYS TO FUNCTIONS                      /////////////////////////////////////////

/* 
Passing Arrays To Functions ::

Arrays can be passed to the functions like this

printArray(arr,n);                      //     => function call

void printarray(int *i,int n);          //    => function prototype

or

void printarray(int i[] ,int n);

*/ 




#include<stdio.h>

// void printArray(int *ptr , int n)
// {
//     for (int i=0; i<n; i++)
//     {
//         printf("The value of element %d is %d\n", i+1 , *(ptr+i) );
//     }

//     ptr[2] = 5555;
// }



void printArray(int ptr[] , int n)
{
    for (int i=0; i<n; i++)
    {
        printf("The value of element %d is %d\n", i+1 , *(ptr+i) );
    }
 
    ptr[2] = 5555;
}



// void printArray(int ptr[] , int n)
// {
//     for (int i=0; i<n; i++)
//     {
//         printf("The value of element %d is %d\n", i+1 , ptr[i] );
//     }

//     ptr[2] = 5555;
// }

/* Any of the above three functions definition , we can use . All three are correct and give the same output.  */



int main()
{
    int arr[]= {1,2,3543,34,3,645,23}; // size of the array is 7

    printArray(arr,7);      // here 7 is the size of the array
    // printArray(&arr[0],7);     // Thus and the above intruction will give the same output 

    printf("The new value of element 3 is %d", arr[2] ); 
    // the above statement will change the value of element 3 from 3543 to 5555


    // printArray(arr,8);
/* if we use the statement         (  printArray(arr,8);  )            instead of          (  printArray(arr,7);  )   then there is
no errors but program will misbehave means in the output garbage  value will be print in the 8th element. because our array 
size is 7 .
*/


    return 0;
}