

///////////////////////          COUNT THE OCCURRENCE OF A GIVEN CHARACTER IN A STRING          /////////////////////////////////////////

/*  Write a program to count the occurrence of a given character in a string. */


#include<stdio.h>

int occurence( char st[], char c)
{
    char *ptr = st;
    int count=0 ;
    while (*ptr != '\0')
    {
        if (*ptr ==c)
        {
            count++; 
        }

        ptr++;  
    }
    return count;
}

int main()
{
    char st[] = "HemantSinghRajawat";

    int count = occurence( st , 'S');

    printf(" Occurrence = %d \n", count );

    return 0;
}
