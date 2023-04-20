

////////////////////////////////            PRINT 2D - ARRAY                   /////////////////////////////////////////

/* Create a 2-d array by taking input from the user. Write a display function to print the content of this 2-d array on
the screen. */

#include <stdio.h>

int main()
{
    int row, column;

    printf("Enter the number of rows : ");
    scanf("%d", &row);

    printf("Enter the number of column : ");
    scanf("%d", &column);

    int array[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter the value of %dth row and %dth column : ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("The value in %dth row and %dth column is : %d\n", i, j, array[i][j]);
        }
    }

    printf("\n 2-D Array in the array format\n\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}






