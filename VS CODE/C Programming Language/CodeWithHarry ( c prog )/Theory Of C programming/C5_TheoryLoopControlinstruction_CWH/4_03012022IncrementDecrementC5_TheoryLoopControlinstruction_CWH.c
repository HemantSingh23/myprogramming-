
//////////////////       INCREMENT AND DECREMENT OPERATOR         ///////////////////

/*
i++   //  i = i + 1    but not complete and also not completly correct */

/*  i++ means FIRST PRINT THEN INCREMENT   */
/*  ++i means FIRST INCREMENT THEN PRINT   */



/*  i-- means FIRST PRINT THEN INCREMENT   */
/*  --i means FIRST INCREMENT THEN PRINT   */

// +++ there is no such operator exixts.

// += is compound assignment operator just like   -=  , *=  ,  /= ,  %=  etc.
/////////////                     /////////////                    ///////////////


#include<stdio.h>
int main()
{
    int i=5;

    printf("The value of i++ is %d\n",i++);//output is 'The value of i++ is 5' .
    /*  i++ means FIRST PRINT THEN INCREMENT   */
    // after this value of i will become 6.


    /*now the value of i has become 6 and  becaue below  we use ++i so now value of i 
    is will be 7 */
    printf("The value of ++i is %d\n",++i);// output is 'The value of ++i is 7'
    /*  ++i means FIRST INCREMENT THEN PRINT   */




    return 0;
}