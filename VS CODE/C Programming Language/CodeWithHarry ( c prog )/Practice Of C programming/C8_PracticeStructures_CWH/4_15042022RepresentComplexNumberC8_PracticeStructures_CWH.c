

////////////////////////////////             REPRESENT A COMPLEX NUMBER      /////////////////////////////////////////

/* Write a program with a structure representing a Complex number. */


#include<stdio.h>

struct Complex
{
    int realNumber;
    int complexNumber;
};

int main ()
{
    struct Complex ComNum;

    ComNum.realNumber = 343;
    ComNum.complexNumber = 40 ;

    printf("The real part of the complexNumber is %d\n", ComNum.realNumber );
    printf("The Complex part of the complexNumber is %di\n", ComNum.complexNumber );



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



    printf("\nNow, using pointer stucture and Arrow Operator \n");

    struct Complex *ptr;

    ptr = &ComNum;

    (*ptr).realNumber = 6457;
    (*ptr).complexNumber = 100;

    printf("The real part of the complexNumber is %d\n", ComNum.realNumber );
    printf("The Complex part of the complexNumber is %di\n", ComNum.complexNumber );



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



    printf("\nNow, using pointer stucture and Member Access Operators \n");

    ptr -> realNumber = 653;
    ptr -> complexNumber = 50;

    printf("The real part of the complexNumber is %d\n", ComNum.realNumber );
    printf("The Complex part of the complexNumber is %di\n", ComNum.complexNumber );

    

    return 0;
}