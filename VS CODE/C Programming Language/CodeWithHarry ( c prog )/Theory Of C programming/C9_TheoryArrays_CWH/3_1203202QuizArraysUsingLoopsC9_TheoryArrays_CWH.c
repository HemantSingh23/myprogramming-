  

////////////////////////////////           QUIZ  ARRAY USING LOOPS                         ///////////////////////////////////////// 


/*      Quick Quiz: Write a program to accept marks of five students in an array and print them to the screen.        */

#include<stdio.h>

int main()
{
    int marks[5];

    for( int i=0 ; i<5 ; i++ )
    {
    printf("Enter the marks of student %d : ", i+1 );
    /*if we will   write i+1   then in output   1 2 3 4 5   will come but if we will write i then in output   0 1 2 3 4   
    will come that's why we are using    i+1  .*/

    scanf("%d", &marks[i] ); // here we are mandatory to write i because index start with 0 .
    }


    for( int i=0 ; i<5 ; i++ )
    {

    printf("The marks of the student %d is : %d \n", i+1 , marks[i] );
    
    }

    return 0;
}