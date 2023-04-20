

////////////////////////////////             GENERATE A MULTIPLICATION TABLE IN FILE          /////////////////////////////////////////

/* Write a program to generate a multiplication table of a given number in text format. Make sure that the file is readable 
and well-formatted. */

#include<stdio.h>

int main()
{
    FILE *ptr;
    int num;
    printf("Enter the integer you need the table of\n");
    scanf("%d", &num);

    ptr = fopen ("2Table.txt" , "w");

    for ( int i=0; i<10; i++ )
    {
        fprintf(ptr, "%d X %d = %d\n", num , i+1 , num*(i+1) );
    }
    fclose(ptr);

    printf("Successfully Generated Table of %d", num);
    return 0;
}