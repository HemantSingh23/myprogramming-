

////////////////////////////////          USING typedef REPRESENT A COMPLEX NUMBER       /////////////////////////////////////////


/* Write a program with a structure representing a Complex number  using typedef keyword. */


#include<stdio.h>

typedef struct complex
{
    int real ;
    int complex ;
}comp;

void display( comp c)
{
    printf("The value of real part is %d\n", c.real );
    printf("The value of imaginary part is %d\n", c.complex );
}

int main()
{
    comp cnums[5];

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