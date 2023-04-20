

////////////////////////////////             USE OF AN ARROW OPERATOR ( -> )      /////////////////////////////////////////

/* Question 1 =  Twenty integers are to be stored in memory. What will you prefer- Array or Structure?


Answer :: The answer is Array because we want to store twenty inegers and all twenty integers are same data type ehich is integers 
Because we know that Array store the similar data and stuctures store the dissimilar data that's why answer is Array .

*/

//********************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************


/*  QUESTION 2 = WRITE A PROGRAM TO ILLUSTRATE THE USE OF AN ARROW OPERATOR -> IN C.    */

#include<stdio.h>
#include<string.h>

struct student 
{
int RollNumber ;
float Fees;
char Name[100];
};

int main()
{
    struct student s1 ;

    s1.RollNumber = 20323;
    s1.Fees = 99324;
    strcpy( s1.Name , "HemantSingh");

    printf("%d\n", s1.RollNumber);
    printf("%f\n", s1.Fees);
    printf("%s\n\n", s1.Name);


    printf("\nNow, using pointer stucture and Arrow Operator \n");

    struct student *ptr ;

    ptr = &s1;

    ptr -> RollNumber = 23;   // This instruction and thge above instruction gives the same output 

    printf("%d\n", s1.RollNumber);



    printf("\nNow, using pointer stucture and Member Access Operators \n");

    (*ptr).RollNumber = 23;

    printf("%d\n", s1.RollNumber);


    return 0;
}