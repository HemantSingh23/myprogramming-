

//////////////////////////////                         CALL BY VALUE                           /////////////////////////////////


/*
Types of function calls ::
Based on the way we pass arguments to the function, function calls are of two types.

1. Call by value -> sending the values of arguments.
2. Call by reference -> sending the address of arguments

************************************************************************************************************************************************

1. Call by value:

Here the values of the arguments are passed to the function. Consider this example:

int c = sum( 3 , 4 );   =>  Assume x=3 and y=4

If sum is defined as sum(int a, int b), the values 3 and 4 are copied to a and b. Now even if we change a and b, nothing
happens to the variables x and y .  This is call by value.

In C, we usually make a call by value.                     */


#include<stdio.h>

int sum(int x , int y);

int main()
{
    int x = 4, y = 7;

    printf("The value of x and y is %d and %d\n", x , y);

    printf("The value of 4+7 is %d\n", sum(x , y) );

    printf("The value of x and y after function call is is %d and %d\n",  x , y );

/* in uper ki teeno statement main ke variabe  x and y ki value change nhi hogi kyuki call by value me (neeche jo function
definition di hui hai ) main ke variabe x and y ki value copy hokr jati hai . isliye neeche function body me jo baad me 
x and y ki value  33 aur 44 ho gyi hai usse  main ke variabe x and y ki value change nhi hogi kyuki koi bhi
funcion , main ke variabe ko change nhi kr skte isliye output 4 aur 7 ke according hi aayega
  */
    return 0;
}


int sum(int x , int y)
{
    int z;
    z= x+y;

    x = 33;
    y = 44;

    return z ;
}

