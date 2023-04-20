
//  OPERATOR PRECEDENCE IN C ----------------------------------------------------------------

/*here Mathematics Rule BODMAS[[ Brackets, Orders(powers/indices,root), Division, Multiplication,
Addition , Subtraction ]] will not apply. */

/*  Operator Precedence  --        valid only if parenthesis is absent.
      
   * / %    these are in the 1st position of priority order
   + -      these are in the 2nd position of priority order
   =        this  is in the 3rd position of priority order

  ////// these are valid only if the parenthesis is absent.//////
 */

/*   Operator Associativity  -- 
  when operator of same priority present in the expression (ex. * / % ) then we will go through
  the expression-
   in the case of * and / operator we follow the  LEFT TO RIGHT  ASSOCIATIVITY   .

  x*y/z  then  (x*y) / z

  x/y*z  then   (x/y) * z
*/

#include<stdio.h>
int main()

{  
    int a=2, b=3;

    printf("the value of 3*a - 8*b is %d\n",3*a - 8*b);/*  in mathematics the value of 3*a - 8*b
    is according to BODMAS rule. Means 3*a - 8*b = 3*2 - 8*3 = 9- 24 = -18 and the value 
    in the output is also -18. IT IS JUST A COINCIDENCE. */

    printf("the value of 8*b / 3*a is %d",8*b / 3*a);/*in maths the value of 8*b / 3*a 
    = 8*3 / 3*2 = 24 / 6 = 4 . But the output value is different because of operator
     Associativity means 8*b / 3*a = (8*b) / 3 * a =   (8*3)  / 3 * 2 = (24) / 3 * 2 = (24/3) * 2
     = (8) * 2  = (8*2) = (16) = 16
     */

    return 0;
}