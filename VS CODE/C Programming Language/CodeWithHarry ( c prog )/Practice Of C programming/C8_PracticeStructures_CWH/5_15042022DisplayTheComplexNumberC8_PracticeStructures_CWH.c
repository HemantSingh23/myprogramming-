

////////////////////////////////            DISPLAY THE COMPLEX NUMBER      /////////////////////////////////////////

/* Create an array of 5 complex numbers created in problem 5 and display them with the help of a display function. The values must 
be taken as an input from the user. */ 


#include<stdio.h>

struct complex
{
    int real ;
    int complex ;
};

void display( struct complex cnums )
{
    printf("The value of real part is %d\n", cnums.real );
    printf("The value of imaginary part is %d\n", cnums.complex );
}

int main()
{
    struct complex cnums[5];  

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real value of %d num \n",i+1);
        scanf("%d", &cnums[i].real );

        printf("Enter the complex value of %d num \n",i+1);
        scanf("%d", &cnums[i].complex );
    }


    for (int i = 0; i < 5; i++)
    {
        display( cnums[i] );
    }
    return 0;
}