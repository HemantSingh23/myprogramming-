#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the value of a is\n");
    scanf("%d", &a); /* scanf is also a function. it takes the value from the user. %d is called
      format specifier. And & is called ampersand. and also & is 'address of'  for compiler means
       address of a .     */
    printf("enter the value of b is\n");
    scanf("%d", &b);
     printf("The sum of a and b is %d", a+b);
     return 0;
}