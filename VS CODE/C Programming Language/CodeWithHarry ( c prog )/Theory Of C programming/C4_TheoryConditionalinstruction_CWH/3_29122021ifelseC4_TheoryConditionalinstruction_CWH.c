
// Relational operator in c
/*it is used to check the comdition are true ot false.

Example of Relational operator

==(equal), <(Lessthan), >(Greaterthan), >=(Greaterthanequal), <=(Lessthanequal),
!=(Notequalto) */


#include<stdio.h>
int main()

{
    int age ;
    printf("enter the age\n");
    scanf("%d",&age);
    if(age<=75)

    {
        printf("You can drive\n");
    }

else
{
    printf("you can't drive\n");
}

//if(age=50)
/*first of all = is assignment operator and ic c language any non-zero number
is considered as true and because it is true , its ouput will be 'Half Century' which
we want to print.And that's why it will not give any error .
we enter 50 or any other non zero number  it is alsways true and output is also 
'Half Century' */
if(age==50)
{
    printf("Half century\n");
}
    return 0;
}