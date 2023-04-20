
// Logical operator in c
/* used to provide the logic to our program

&&(AND) , ||(OR) , !(NOT)

&&(AND)   TRUE when both the conditions are true then.

||(OR)    TRUE when at least one condition is true.

 !(NOT)   if we use !(NOT) then it change the statement means if the statement is true then the 
 statement will become false.
*/


#include<stdio.h>
int main()

{
    int age ;

    int vipPass=0;
    vipPass=1;


    printf("enter the age\n");
    scanf("%d",&age);
 
    if((age<=75 && age>=18 )|| !(vipPass==1)) 
/* when ! is not present and  if we uncommnet the above instruction vipPass=1 then at 
any age the output will always be 'You can drive' because we placed a ||(OR) operator.
     
but when ! is present and vipPass=1 is comment(means vipPass=1 is not uncomment) so  it
means that vipPass=0,it means vipPass is FALSE so ! will change it into TRUE (because we 
placed ! on a FALSE instruction) and || is also placed and right side statement of 
|| operator has become TRUE so left side statement of || operator can be anything(means
we can enter any age) but after || operator the overall oupput is always TRUE  beacause
 in ||(OR) operator if one is TRUE then output is also always TRUE.  */
    {
        printf("You can drive\n");
    }

else
{
    printf("you can't drive\n");
}

    return 0;
}