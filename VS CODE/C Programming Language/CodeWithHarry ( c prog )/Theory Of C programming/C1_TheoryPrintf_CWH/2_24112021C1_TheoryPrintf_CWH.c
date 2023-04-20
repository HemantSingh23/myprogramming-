#include <stdio.h>

int main()
{
  int a = 3;
  float b = 5.5;
  char c = 'h';

  printf("The value of a is %d\n %d\n", a, a); // \n print a new line
  // first %d is for first a and second %d if for second a AND same for \n
  printf("The value of b is %f\n", b);
  printf("The value of c is %c\n", c);
  printf("The sum is %f\n", a + b);
  /* if we use %d instead of %f then output of this statement is 0 whether
   we use a+b or a*b   */
  printf("The value is %f\n", a - b);
  printf("The value is %f\n", a * b);
  printf("The value is %f\n", a / b);

  printf("The sum is %d\n", a + c);
  /* here a+c  and c assigned as 'h' so if we add a+c then in the place of a and c
  the value 3 and 104 will come because here we add c with a so it takes the ASCII
  value of lowercase h which is 104. */

  printf("The sum is %c\n", a + c); /*output of this line =" The sum is k " because
    here a=3 and c= 'h'= ASCII value of lowercase h = 104 so a+c is 107 and 107 is the
    ASCII value of lowercase k */

  return 0;
}