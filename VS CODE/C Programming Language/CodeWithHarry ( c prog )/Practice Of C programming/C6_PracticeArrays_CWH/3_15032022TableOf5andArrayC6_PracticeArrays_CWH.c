

//////////////////////////                 TABLE OF 5 AND ARRAY OF 10 INTEGERS                  /////////////////////////////////////////


/* Write a program to create an array of 10 integers and store a multiplication table of 5 in it. */




#include<stdio.h>

int main()
{
    int n , mul[10] ; // here n is the number whose multiplication table we want

    printf("Enter the value of n ( here n is the number whose multiplication table we want ) : ");
    scanf("%d", &n);
    for(int i = 0; i < 10; i++)
    {
        mul[i] = n * (i+1);
    }


    printf("\nArray of 10 integers that store a multiplication table of %d in it is given below\n{  " , n);

    for(int j = 0; j < 10; j++)
    {
        printf( "%d  ", mul[j] );
    }

    printf("}\n\n");
    
    printf("Multiplication table of %d which is stored in the above array of 10 integers\n" , n );

    for(int i = 0; i < 10; i++)
    {
    printf("%d X %d = %d\n", n , i+1 , mul[i] );
    
    }


    return 0;
}



