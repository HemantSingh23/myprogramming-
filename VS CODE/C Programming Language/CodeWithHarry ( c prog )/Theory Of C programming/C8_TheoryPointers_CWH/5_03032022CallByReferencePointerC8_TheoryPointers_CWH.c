

////////////////////////                         CALL BY REFERENCE                             ////////////////////////

/*

2. Call by reference ::

Here the address of the variable is passed to the function as arguments.

Now since the addresses are passed to the function, the function can now modify the value of a variable in calling function
using * and & operators. Example:


void swap(int *x, int *y)
{
int temp;
temp= *x;
*x = *y;
*y = temp;
}


This function is capable of swapping the values passed to it. If a=3 and b=4 before a call to swap(a,b), a=4 and b=3
after calling swap.


int main()
{
int a=3;	// a is 3 and b is 4
int b=4;
swap(a,b)
return 0;	// now a is 4 and b is 3
}

*/

// **************************************************************************************************************************************************************************************************

#include <stdio.h>

void wrong_swap(int a, int b);

void swap(int *a, int *b);

int main()
{
    int x = 3, y = 4;

    printf("The value of x and y before swap is %d and %d\n", x, y);

    // wrong_swap(x, y);
    /*  x and y ki value change nhi hogi kyuki ye wrong swap hai aur hm 'call by value' kr rhe hai aur x aur y ki sirf copy
    jayegi. isliye hm wrong_swap ka use nhi karenge.isliye swap ka use karenge wo bhi & ke sath kyuki ye bina &(ampersand) ke
    use krne pr ye value ko swap nhi kr rha hai isliye hme &(ampersand) use krna pd rha hai lekin hme value chahiye
    x aur y ki isliye function definition me *(star) ka bhi use krna pdega .(see the below statement) */

    swap(&x, &y);
    /* Kyuki hm log &x use kr rhe hai aur &x ek addres hai isliye value ke liye function definition me int *  use karenge
    kykui &x ek address hai aur address int * type ke variable me sore me hota hai means kisi ke address ko store
    pointer krta hai aur pointer ko int * krke likhate hai isliye hm &x aur &y ko store krne ke liye function definition me
    int *a    aur    int *b    use kr rhe hai. */

    // PLEASE ALSO READ THE COMMENT GIVEN IN THE function definition       void swap( int *a , int *b )

    printf("The value of x and y after swap is %d and %d\n", x, y);

    return 0;
}

void wrong_swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a; /* Yha pr jo *a aur  int *a   hai dono me *a ka meaning alag alag alag hai , int *a   me sirf  a   &x   ko store
    kr rha hai aur &x ek address hai aur address ko store krne valie variable ko hm * lga kr likhate hai  isliye yha int *a 
    likha gya hai kyuki address ko store krne vala pointer hota aur pointer jo *a krke likhate isiliye ye int *a likh hai

    pr     temp = *a      isme jo *a hai wo value bta rha mtlb ki yha pr jo     a     hai wo bhi     int *a     vale a ki
    tarah &x ko store kr rha hai lekin yha   temp = *a   isme  a  me lga hua   *    ,   a    me store address(&x) me store
    value ke liye lagaya gya hai kyuki hme value swap krna hai 

       */
    *a = *b;
    *b = temp; // yha temp me star isliye nhi lga kyuki temp ka type int hai.
}