

//////////////////////////                ADDRESS OF ELEMENTS IN 3D ARRAY                  /////////////////////////////////////////

#include<stdio.h>

int main()
{
    int arr[2][3][4];

    // printf("Please enter the values of the array\n");

    // for (int i=0; i<2; i++)
    // {
    //     for(int j=0; j<3; j++)
    //     {
    //         for(int k=0; k<4; k++)
    //         {
    //             scanf("%d", &arr[i][j][k]);
    //         }
    //     }
    // }
// there is no need to input the value of array

    printf("The addresses of the elements of the 3-D array are given below\n");

    for (int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<4; k++)
            {
                printf("The address of the arr[%d][%d][%d] is %u\n", i, j, k, &arr[i][j][k]);
            }
        }
    }

    return 0;
}