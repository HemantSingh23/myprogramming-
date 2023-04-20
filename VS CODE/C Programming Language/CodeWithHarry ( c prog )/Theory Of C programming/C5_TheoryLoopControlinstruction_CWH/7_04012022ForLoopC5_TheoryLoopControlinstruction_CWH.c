
///////////////////               FOR LOOP                  //////////////////////

/* For Loop------ 
Syntax of for loop is given below 

for(initialized ; test ; increment or decrement)
{
    //code;
    //code;
    //code
}

*/

#include<stdio.h>
int main()
{
for(int a=0; a<10; a++) /*first int a=0; will be execute so a will be 0 means a=0 and 
then a<10; will be executed so it will check whether a is less than 10 or not and 
because till now a=0 that's why a<10 will be true so 'The value of a is 0' will
be print. and then a++ will be executed so a will become 1 (because a++ so, a=a+1=0+1=1) 
and then a<10; will again be execute and it will again check whether a is less than 10
but because no a has become 1 so a is less than 10 so it is true that's whys 'The value
of a is 1' will be print.
The same procedure will be continued untill condition a<10 does not be false.*/
{
    printf("The value of a is %d\n",a);
}

    return 0;
}
