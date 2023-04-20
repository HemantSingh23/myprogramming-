

//////////////////////////                 REVERSES THE ARRAY                  /////////////////////////////////////////

/* Write a program containing a function that reverses the array passed to it. */




// Please  also see the 2nd Method  which is given in tha last



/* 👇👇👇👇👇👇👇 1st Method 👇👇👇👇👇👇👇*/

// #include <stdio.h>

// void reversethearray(int arr[] , int a)
// {
//     printf("\nPlease enter the values which we want to stored in the required array : \n");

//     for (int j = a-1; j >= 0 ; j--)
//     {
//         printf("%d ", arr[j] );
//     }
//     printf("\n\n\n");
// }

// int main()
// {
//     int n ;

//     printf("Enter the value of n means the Size of the array: ");
//     scanf("%d", &n);

//     int arr[n];

//     printf("\nPlease enter the values which we want to stored in the required array : \n");

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i] );
//     }
//     printf("\n");

//     printf("The required array is given below : \n{ ");

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d  ",arr[i]);
//     }

//     printf("} \n\n");

//     reversethearray( &arr[0] , n );

//     return 0;
// }

/*  👆👆👆👆👆👆 1st Method  👆👆👆👆👆👆 */





/* 🤣🤣🤣🤣🤣🤔🤔🤔🤔🤔🤔🤔🤔🤔🤔🤔🤔🤨🤨🤨🤨🤨🤨🤨🤨🤨🤨🤣🤣🤣🤣🤣🤣🤣 */




/* 👇👇👇👇👇👇👇 2nd Method 👇👇👇👇👇👇👇*/

#include <stdio.h>

void reverseArray(int *arr, int n)
{
    int temp;

    for (int i = 0; i < (n/2); i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp ;

    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

    reverseArray(arr, 8);

    for(int i = 0; i < 8; i++)
    {
    printf("The value of %d element is : %d\n", i, arr[i] );
    }

    return 0;
}
