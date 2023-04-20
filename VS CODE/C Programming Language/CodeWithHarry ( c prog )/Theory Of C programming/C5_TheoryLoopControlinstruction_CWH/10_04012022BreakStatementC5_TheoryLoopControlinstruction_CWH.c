
///////////////////////          BREAK STATEMENT           /////////////////////

/*     Break Statement-- Break means tod dena 
The break statement is used to exist the loop irrespective whether the condotion is
true or false. 
Whenever a "break" is encounted inside the loop the control is sent outside the loop.

ex.
 
for(i=0;i<100;i++)    //////   Output ::    0
{                     //////                1       
    printf("%d\n",i); //////                2
    if(i==5)          //////                3
    {                 //////                4
        break;        //////                5
    }                 //////             
}                     //////    output is not from 0 to 99 because we break statement

 */

#include<stdio.h>
int main()
{
    int i=0;
    do
    {
         printf("The value of i is %d\n",i++);/* if we place the i++ instead of i then 
    'The value of i is 4' will not print beacuse after printing 'The value of i is 3',
    the value of i will become 4 so i==4 so below condition will be satisfied that's why
    loop will be break. ALSO READ THE COMMENT ON LINE NUMBER 36*/
        if(i==4)
        {
            break;
        }
/* if we use i++ here in line 36 instead of using in the 28 line and use i in the line 28 then
'The value of i is 4' will be print beacuse isme 'The value of i is 3' print hone ke
baad i ki value 3 hi rhegi kyuki hmne i use kiya hoga 28 line me jisse if vali condition
satisfied nhi hogi aur the execution i++ me aa jayega jisse i ki value 4 ho jayegi 
aur value 4 hote hi condition satisfied jisse turant hi loop break ho jayega aur phir 
execution printf me jayega aur 'The value of i is 4' print krke program end  ho jayeag.
*/


    } while(i<10);

    return 0;
}