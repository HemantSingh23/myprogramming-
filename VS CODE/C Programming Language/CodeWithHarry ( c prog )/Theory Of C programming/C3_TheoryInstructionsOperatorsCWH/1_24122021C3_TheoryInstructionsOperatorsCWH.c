

/* INSTRUCTIONS =================================================

 A C program is set of instruction just like a recepie.


 // TYPES OF INSTRUCTIONS----------------------------------------------------------------

1. Type declaration Instruction - int a;  ,  float b;   , char c;  etc.

2. Arithmetic instruction - add to numbers , subtract two numbers , etc.
ex. int 3*4 + 5 ; // here * and + are operators.And 3,4,5 means integers are operands.

  operands are int/float etc. means any real number(integers or in decimal format).
  operators ==  +,-,*,/ are arithmetic operators.
3. Control instruction - for loop, while loop etc. === it tells us which things execute first or second etc .


 */ 
#include<stdio.h>

int main()
{
    int a=4 , b=5;
    int z=a*b;/* = is a assignment operator aur  isme left side(z) vale ki  value ko  right side 
    (a*b) vale ki value de/kr  ex. isme z ki value ko a*b kr di gyi hai mtlb z ki value 20
     kr di gyi hai */

    // int z;
    //  a*b=z;
      /*it is wrong because = is a assignment operator and it says that  left side(a*b) vale ki 
      value ko right side(z) ki value de do aur yha z phle se hi declared nhi hai  isliye 
       ye run nhi hoga  */
    printf("the value of z is %d",z);
    return 0;
}