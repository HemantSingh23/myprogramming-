
///////          SWITCH-CASE CONTROL INSTRUCTION        ////////

/*  Switch- Case Control Instructions *******************************
 Switch-case is used when we have to make a choice between number of alternatives
 for a given variable.


*/

#include <stdio.h>
int main()
{
    int rating;
    printf("enter your rating in between 1 to 5\n");
    scanf("%d",&rating);

    switch (rating) /* we can change the order of the cases means case1: can be in the 
    middle or case5: can be in the fist position also means order can be in any format. */
    {
    case 1:/*here instead of 1 we can also put anything that can typecast automatically
    into integers like characters (ex. 'a'  'b'  'h'  'r'  'w' etc.  ).
    Between case and 1 there may or may not be space. */

        printf("your rating is 1\n");
        break; /*if we don't use break then it runs all the cases no matter what value 
        we enter. */
    case 2:
        printf("your rating is 2\n");
        break;
    case 3:
        printf("your rating is 3\n");
        break;
    case 4:
        printf("your rating is 4\n");
        break;
    case 5:
        printf("your rating is 5\n");
        break;
    default: /*if no case match then default case will be run for example if we put 8
    then  'Invalid rating' will be the output */
        printf("Invalid rating\n");
        break;

    }


    return 0;
}