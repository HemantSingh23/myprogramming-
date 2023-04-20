

////////////////////////////////             USE ARRAY TO STORE INTEGER ENTERED BY THE USER.           /////////////////////////////////////////



/* Use the array in  previous Problem  to store 6 integers entered by the user. */

#include<Stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("How many integer do you want to\n");
    scanf("%d", &n);
 
    ptr = (int*)malloc(n * sizeof(int));

    for(int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d elements : ",i+1);
        scanf("%d", &ptr[i]);
    }

    for(int i = 0; i < 6; i++)
    {
        printf("The value of %d elements  is %d\n",i+1, ptr[i] );
    }

    
    return 0;
}