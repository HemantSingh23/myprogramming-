
// MODULO DIVISION OPERATOR--

/*   % is called modular devision operator . it returns the remainder and CAN NOT APPLIED FOR
 float.AND important thing is that the sign of the output remainder is  same as the sign of
 numerator of the question[means ex. 5%2 in this output sign is same as the sign of 5(numerator)]
 EX. 5%2 then output is 1
    -5%2 then output is -1
     5%-2 then output is 1
     */

#include <stdio.h>
int main()

{
    printf(" 5 devided by 2 equal to %d\n", 5 % 2);
    printf("-5 devided by 2 equal to %d\n", -5 % 2);
    printf(" 5 devided by-2 equal to %d\n", 5 % -2);

    return 0;
}