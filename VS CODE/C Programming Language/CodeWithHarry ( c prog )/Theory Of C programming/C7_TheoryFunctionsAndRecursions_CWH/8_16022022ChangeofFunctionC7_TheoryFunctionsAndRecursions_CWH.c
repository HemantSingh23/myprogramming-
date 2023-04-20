
///////////////        //////////////////               //////////////             /////////////////       ///////////////// ///////////////// ///////////////// //////////////


#include<stdio.h>

void change(int a);

int main()
{
    int b=344;
    printf("The value of b before change is %d\n",b);
    change(b);
    printf("The value of b after change is %d\n",b); /* this line print the value of b is 344 not 77 becasue in 13th line 
    change(b);  only the COPY of the value of the b is passsed, Actual value is not passed.   */

    return 0;
}


void change(int a)
{
    a=77;
}


