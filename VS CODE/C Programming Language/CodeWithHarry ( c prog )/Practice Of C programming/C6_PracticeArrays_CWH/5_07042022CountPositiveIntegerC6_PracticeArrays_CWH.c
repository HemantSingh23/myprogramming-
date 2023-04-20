

//////////////////////////                COUNT POSITIVE INTEGER                    /////////////////////////////////////////

/* Write a program containing functions that counts the number of positive integers in an array. */



#include<stdio.h>
 

int main()
{
    int arr[] = {-10,-5,-4,-3,-2,-1,0,1,2,3,4,5,6,7,8};
    int Positiveinteger = 0 ;

    printf("Positive integers in the array is given below\n" );

    for(int i=0; i<15; i++) 
    {
        if ( arr[i]>0 )
        {
            printf("%d ",arr[i]);
        }
    }

    printf("\n\n");

    for(int i=0; i<15; i++)
    {
        if ( arr[i] > 0 )
        {
            Positiveinteger++;
        }
    }

    printf("The number of positive integers in the array is %d\n\n",Positiveinteger );

    return 0;
}