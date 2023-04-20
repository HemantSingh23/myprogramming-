
// if-else use 
// check a number is even or odd

#include<stdio.h>

int main()
{
    int a;
printf("enter the number \n");
scanf("%d",&a);

if( a%2==0 )
// {
/*IF there are only one statementn after the if statement then we can also run without 
curly braces{} in if statement  but it only for single statement */
    printf("%d is even\n",a);
// }
else
{
    printf("%d is odd\n",a);
}


return 0;
}