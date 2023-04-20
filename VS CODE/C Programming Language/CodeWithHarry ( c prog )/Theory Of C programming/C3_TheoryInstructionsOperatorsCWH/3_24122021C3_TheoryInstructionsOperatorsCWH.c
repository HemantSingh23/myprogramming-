
//Type Conversion =================================================================


/* type conversion is an arithmetic operation between int and float.

//Rules ----------------------------------------------------------------

1.   int and int        then    int
2.   int and float      then    float
3.   float and float    then    float

 // int a=3.5; then output is demoted in  3 
 // float a=8; then a will be promoted  in 8.0
 */ 



#include<stdio.h>
int main()
 
{
    printf("the value of 5+6  is %d\n",5+6);
    /*because 5 and 6 both  are integer so int and int 
    also int so 5+6=11 and because 11 is also int and %d is used for int so output also 11 */
    printf("the value of 5+6.5 is %d\n",5+6.5);
    /*5 is int and 6.5 is float so int and float is 
    float so 11.5 but 11.5 is float and %d is used for int so output is 0(zero) because in this 
    case 11.5 comes first and then it goes to %d that's why the output is 0(zero).

    ////But int a=11.5; then output is 11 because in this case we already defined, which will
    assigned in a ,that will be integers that's why  the output of int a=11.5;  will be 11  */ 

   printf("the value of 5.1+6.5 is %f\n",5.2+6.5);
   /* 5.1 and 6.5 both are float so float and float
    will also float and %f is for float that's why output is 11.6   */

    printf("the value of 5/2 is %d\n",5/2); /*5 and 2 both are int and  5/2= 2.5 but int and int 
    will also int so 2.5 will demoted in 2 which is int and %d is for int so outpit is 2*/

    printf("the value of 5/2 is %f\n",5/2);/*5 and 2 both are int and  5/2= 2.5 but int and int 
    will also int so 2.5 will demoted in 2 which is int but %f is use for float so output is 
    garbage value or 0(zero)
    // but float a=2 then output is also 2 why??
    REASON IS SAME AS GIVEN ABOVE FOR THE int a=11.5; CASE */

    return 0;
}
