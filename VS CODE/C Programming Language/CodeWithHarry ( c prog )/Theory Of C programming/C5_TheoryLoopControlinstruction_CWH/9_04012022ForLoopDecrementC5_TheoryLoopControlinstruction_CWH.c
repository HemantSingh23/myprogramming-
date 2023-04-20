
/////////////////////////        FOR LOOP DECREMENT       ///////////////////////////

/*for loop Decrement---------


for(i=5; i; i--)
printf("%d\n",i);


This for loop will keep in running untill i becomes 0.

The Loop runs in following steps:
1. i is initialized to 5.
2. The condition " i " (0 or none)  is tested.And any none 0 is true.
3. The code is executed.
4. i is decremented.
5. Condition i is checked again and code is executed  again if it is not not 0.
6. and so on untill i is non 0.

 */

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    for(int i=n; i; i--)
    {
       printf("The value iof i is %d\n",i);
    }

    return 0;
} 