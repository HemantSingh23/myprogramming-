

////////////////////////////////           INITIALIZATION OF AN ARRAY                        ///////////////////////////////////////// 

/* 
Initialization of an array ::
There are many other ways in which an array can be initialized.

int cgpa[3]={9,8,8}         => Arrays can be initialised while declaration

float marks[]={33,40}



 */

#include<stdio.h>

int main()
{
    int a[] = {34,232,23};

    printf("The value of a[0] is %d\n", a[0] );
    printf("The value of a[1] is %d\n", a[1] );
    printf("The value of a[2] is %d\n\n", a[2] );




    float b[] = {3.4, 2.32,2.3};

    printf("The value of b[0] is %f\n", b[0] );
    printf("The value of b[1] is %f\n", b[1] );
    printf("The value of b[2] is %f\n\n", b[2] );


    char c[] = { 'x' , 'y' , 'z' };

        printf("The value of c[0] is %f\n", c[0] );
        printf("The value of c[1] is %f\n", c[1] );
        printf("The value of c[2] is %f\n", c[2] );


    return 0;
}