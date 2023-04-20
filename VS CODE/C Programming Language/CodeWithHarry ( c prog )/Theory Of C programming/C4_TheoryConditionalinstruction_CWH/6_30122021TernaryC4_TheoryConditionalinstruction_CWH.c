
/////////////     CONDITIONAL OPERATOR   ///////////////

/* Conditional Operator

A short hand 'if-else' can be written using the conditional or ternary operators.

 condition --------------------------
 ?    expression-if-true 
 :    expression-if-false

 here ? and :  are ternary operators

*/


#include<stdio.h>
int main()
{
int a;
printf("enter a\n");
scanf("%d",&a);


(a<5)?printf("%d is less than 5",a):printf("%d is not less than 5",a);

    return 0;
}