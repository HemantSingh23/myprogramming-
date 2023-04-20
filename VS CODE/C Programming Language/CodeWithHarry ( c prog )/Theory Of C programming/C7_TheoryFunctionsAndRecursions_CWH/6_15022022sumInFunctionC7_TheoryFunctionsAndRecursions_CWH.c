
/////////////////             ////////////////           //////////////////              ///////////////// 



// PLESE ALSO READ THE LAST LINE OF THE CODE .

#include<stdio.h>

int sum ( int a , int b );          // Function Prototype

/* sum is a function which takes a and b as input and returns an integer as an output. */
 

int main()
{
    sum(2,5);  // Function Call
    
    return 0;
}

int sum (int a , int b)
{
    int result ;
    result = a+b;

    return result;
}

// THIS PROGRAM DOESN'T RETURN ANY OUTPUT BECAUSE  WE HAVE NOT PRINTED ANYTHING