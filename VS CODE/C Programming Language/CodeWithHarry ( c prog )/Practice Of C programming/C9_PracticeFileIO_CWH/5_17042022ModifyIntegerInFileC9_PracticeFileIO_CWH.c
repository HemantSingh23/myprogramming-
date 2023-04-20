

////////////////////////////////            MODIFY  INTEGER TO DOUBLE ITS VALUE IN THE FILE       /////////////////////////////////////////


/* Write a program to modify a file containing an integer to double its value.
    If old value = 2, then new file value = 4
*/


#include<stdio.h>

int main()
{
    FILE *ptr ;

    int num;

    printf("\nPlease enter the integer value in the 5_integer.txt file which we want to double\n\n");

    ptr = fopen("5_integer.txt", "r");

    fscanf( ptr , "%d", &num);

    ptr = fopen("5_integer.txt", "w");
     
    fprintf( ptr , " %d\n ", num*2 );

    printf("The modified value in the 5_integer.txt file should be %d . And please see the 5_integer.txt file for final output\n\n", num*2);


    fclose(ptr);

    return 0;
}