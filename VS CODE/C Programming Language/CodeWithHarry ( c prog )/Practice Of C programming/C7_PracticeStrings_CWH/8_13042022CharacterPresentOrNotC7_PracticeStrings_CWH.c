

///////////////////////          CHECK WHETHER A GIVEN CHARACTER IS PRESENT IN A STRING OR NOT          /////////////////////////////////////////

/*  Write a program to check whether a given character is present in a string or not. */


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

    if(count>0)
    {
        printf("\n\nRequired character are present in the string\n\n");

    }

    else if (count=0)
    {
        printf("\n\nRequired character are not present in the string\n\n");

    }

    return 0;
}
