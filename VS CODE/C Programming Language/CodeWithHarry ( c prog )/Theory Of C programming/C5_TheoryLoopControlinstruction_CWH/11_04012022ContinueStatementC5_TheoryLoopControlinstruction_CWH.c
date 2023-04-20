
///////////////////////           CONTINUE STATEMENT           ////////////////////// 

/*Continue Statement-----
The continue statement is used to immideately move to the next iteration[repetition of
a process or utterance(uchcharan)]of the loop.
The control is taken to the to the next iteration thus skipping everything below 
"continue" inside the loop for the iteration. 

ex.

int skip=5;
int i=0;

while(i<10)
{
    i++;
    if(i != skip)
    {
    continue;
    }

    else
    {
    printf("%d",i);
    }
}

The Output of the above code is 5.

ALSO READ THE LAST LINE COMMENTS
 */

#include<stdio.h>
int main()
{
    int skip=10;
    int i=0;

while(i<10)
{
    i++;
    if(i != skip)
    {
        continue;
    }
    
    else
    {
        printf("%d\n",i);
    }

}

return 0;
}

////////////////////           ////////////////               ////////////////////

/////////////////////               VERY IMPORTANT                /////////////////////

/* 
1. Sometimes the name of the variable might not include the behaviour of the program.
like in the above code 'skip' but it does not skip the 5. 
2. break statement completely exits the loop.
3. continue statement skips the particular iteration of the loop.
*/