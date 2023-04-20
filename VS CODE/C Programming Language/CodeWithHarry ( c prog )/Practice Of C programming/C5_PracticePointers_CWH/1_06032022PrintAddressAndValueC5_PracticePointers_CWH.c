

//////////////////////                 PRINT THE ADDRESS AND VALUE                          ////////////////////////////////

/* Write a program to print the address of a variable. Use this address to get the value of this variable. */

#include<stdio.h>



int main()
{
    int i;
    printf("Enter the value of i\n");
    scanf("%d", &i);

    int *j = &i;

    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);


    printf("The Address of i is %d\n", &i);
    printf("The Address of i is %d\n", j);



    printf("The Address of i is %u\n", &i); // FORMAT SPECIFIER FOR PRINTING POINTER ADDRESS IS %u
    printf("The Address of i is %u\n", j);  // FORMAT SPECIFIER FOR PRINTING POINTER ADDRESS IS %u



    printf("The Address of i is %x\n", &i); // address in hexadecimal format
    printf("The Address of i is %x\n", j);





    return 0;
}