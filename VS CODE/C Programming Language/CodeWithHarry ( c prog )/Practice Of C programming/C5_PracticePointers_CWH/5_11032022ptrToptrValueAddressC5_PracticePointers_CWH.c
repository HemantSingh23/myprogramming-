

//////////////////////              POINTER TO POINTER VALUE AND ADDRESS                       ////////////////////////////////


/* Write a program to print the value of a variable i by using the "pointer to pointer" type of variable. */


// TO SEE THE BETTER  WHOLE OUTPUT OF THIS program PLEASW EXPLAND THE PANEL(terminal)

#include<stdio.h>

int main ()
{
    int i;           // integer type

    int *j = &i ;    // pointer to integer type

    int **k = &j;    // pointer to pointer type
    

    printf("Enter the value of i\n");

    scanf("%d",&i);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//          FOR the value and address of i

    printf("The value of i is %d\n",*j);
    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n\n",**k);

    printf("The Address of i is %u\n",&i);
    printf("The Address of i is %u\n",j);
    printf("The Address of i is %u\n\n\n\n\n",*k);


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//          FOR the value and address of j

    printf("The value of j is %d\n",j);
    printf("The value of j is %d\n\n",*k);

    printf("The Address of j is %u\n",&j);
    printf("The Address of j is %u\n\n\n\n\n",k);


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//          FOR the value and address of k

    printf("The value of k is %d\n",k);

    printf("The Address of k is %u\n\n\n",&k);
    

    return 0;
}