
//////////////////////                   THREE NUMBERS AVERAGE USING FUNCTION                           ////////////////////////////////

/*  Write a program using function to find average of the three numbers.    */

#include<stdio.h>

float average( int a, int b, int c); 


int main()
{
    int x, y, z;
    printf("Enter the value of x\n");
    scanf("%d", &x);

    printf("Enter the value of y\n");
    scanf("%d", &y);

    printf("Enter the value of z\n");
    scanf("%d", &z);

    average(x,y,z); // this is not mandatory

    printf("The average of three number is %f\n", average(x,y,z) );

    return 0;
}

float average( int a, int b, int c)
{
    float result ;

    // result = (a + b + c)/3;   
    /* if we use this line instead of (  result = (float)(a + b + c)/3; ) then the output may be wrong because here we are using 
    int (ex. int a, int b, int c) and also write float before result in 30th line(float result ;) that's why output is being 
    wrong. Now to resolve it either we float (float a, float b, float c) or we use TYPECAST ( result = (float)(a + b + c)/3; )
     or enter the numbers whose output(average) is totally divisible by 3 */
          

    result = (float)(a + b + c)/3;


    return result;
}