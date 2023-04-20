

/////////////////////////////////              USAGE OF free() WITH malloc().                  ////////////////////////////////////////////// 

/* Quick Quiz: Write a program to demonstrate the usage of free() with malloc(). */



#include<stdio.h>
#include <stdlib.h>


int main()
{
    int *ptr ;
    int *ptr2 ;
    ptr = (int*)malloc(600*sizeof(int));

    for(int i=0; i<600; i++)
    {
        ptr2 = (int*)malloc(600000*sizeof(int));
        printf("Enter the value of %d element : ", i+1);
        scanf("%d", &ptr[i]);
        free(ptr2); // it will free the memory on every loop .
        
    }

    for(int i=0; i<600; i++)
    {
        printf("The value of %d element is %d\n", i+1, ptr[i]);
    }

    return 0;
}
