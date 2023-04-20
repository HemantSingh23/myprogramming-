
/////////////////////////                        WHAT IS RECURSION  ??                                  //////////////////////// 


/*       What is Recursion ?   
A Function  defined in C can call itself. This is called recursion.
A function calling itself is also called Recursive Function. 

//            Recursion = function ke andar same vhi function   

Example of Recursion:-

A very good example of the Recursion is Factorial.

factorial(n) = 1x 2 x 3...........x n
factorial(n)= 1 x 2 x 3...........n-1 x n
factorial(n)= factorial of (n-1) x n  

Since we can write factorial of a number in terms of itself, we can program it using recursion.      */


/////////       ALSO READ THE LAST LINES  VERY IMPORTANT ( how does it works ? )    /////////////    ///////////      ///////////    ////////////// 
 


#include<stdio.h>             // PLEASE ALSO READ THE LAST LINES

int factorial (int x);

int main ()                  // PLEASE ALSO READ THE LAST LINES
{
    int a ;
    printf("Enter the number for which we want the factorial :\n");
    scanf("%d", &a);

    printf("The value of factorial of %d is %d\n", a , factorial(a) );


    return 0;

}                             // PLEASE ALSO READ THE LAST LINES


int factorial (int x)
{
    printf("Calling factorial %d\n",x ); // PLEASE ALSO READ THE LAST LINES


    if(x==1 || x==0)
    {
        return 1;
    }

    else
    {
        return x * factorial(x-1) ; 
    }

}

////////////       ////////////////            //////////////////           ////////////            ///////////////          ///////////////////////


/*  How does it Works ?

factorial(5)        // factorial 5  phle 5 aur factorial 4 me jayega uske baad same factorial 4 bhi hoga jaisa neche diya hai

5 x factorial(4)

5 x 4 x factorial(3)

5 x 4 x 3 x factorial(2)

5 x 4 x 3 x 2 x factorial(1)

5 x 4 x 3 x 2 x 1  


IMPORTANT NOTES:

1. Recursion is sometimes the most direct way to code an algorithm

2. The condition which doesn’t call the function any further in a recursive function is called the base condition.

3. Sometimes, due to a mistake made by the programmer, a recursive function can keep running without returning, 
   resulting in a memory error.


*/