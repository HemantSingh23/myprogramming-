
//////////////////////////////////                    PRINT STARS PATTERNS                               ////////////////////////////////

/*   Write a program using functions to print the following pattern(first n lines):

*
***
*****
*******
*********            */

#include <stdio.h>

void starsPattern(int a);

int main()
{
    int n;
    printf("Please First Enter the number of line in which we want to print the stars pattern :: ");
    scanf("%d", &n);

    starsPattern(n);

    return 0;
}

void starsPattern(int a) // a  represents the line means in how many lines we want to print this stars pattern
{
    if(a==1)
    {
        printf("*\n");
        return;
    }

    starsPattern(a-1);
    for( int i=0;  i<(2*a - 1);  i++ ) /*  2a-1 is the general pattern formula of stars  because in 1st line only 1 star 
    in 2nd line 3 stars , in 3rd line there are 5 stars and so on */ 
    {
        printf("*");
    }


    printf("\n"); /*  isse hr ek stars pattern line ke baad ek line print ho jayegi. Means agar hme do star pattern line ke
    beech me 1 blank line print karani hai to hm \n ko ek baar likheneg nhi to jitni blank line print karani hogi utne hi 
    \n lga denge yha pr*/
}
