
// ELSE IF CLAUSE

/*
else if clause

instead of using multiple if statements we can also use else if along with thus forming
an if-else if-else ladder. And last else is optional(see line no 32.)
*/

#include <stdio.h>
int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("number is 1\n\n");
    }

    else if (num == 2)
    {
        printf("number is 2\n\n");
    }

    else if (num == 3)
    {
        printf("number is 3\n\n");
    }
    else// last else is optional
    {
        printf("It is not 1,2 or 3\n\n");
    }



if(num==6)
{
    printf("value is 6\n");
}
 
 else 
 {
     printf("value is not 6\n ");
 }



    return 0;
}