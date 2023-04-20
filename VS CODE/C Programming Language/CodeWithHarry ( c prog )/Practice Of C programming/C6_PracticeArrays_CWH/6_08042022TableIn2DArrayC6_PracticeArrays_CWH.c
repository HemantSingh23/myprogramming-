

//////////////////////////                MULTIDIMENSIONAL ARRAY OF TABLE                    /////////////////////////////////////////


/* Create an array of size 3x10 containing multiplication tables of the numbers 2,7 and 9, respectively. */

/*  we solve this question by using 1-D array concepts. As here are 3 rows so we will make the three 1-D arrays*/



#include<stdio.h>

void printtable(int *arr,int num, int n )   // num is the value whose multiplication table we want and n is the size of the array
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = num *(i+1) ;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int x, y, z, arr[3][10]; // 

    printf("Please enter the value of x, y, z whose multiplication table we want\n");
    scanf("%d%d%d", &x,&y,&z);


    printtable(arr[0], x, 10); // x is the value whose multiplication table we want and 10 is the size of the array

    printf("\n");



    printtable(arr[1], y, 10);

    printf("\n");



    printtable(arr[2], z, 10);

    printf("\n");



    

    return 0;
}