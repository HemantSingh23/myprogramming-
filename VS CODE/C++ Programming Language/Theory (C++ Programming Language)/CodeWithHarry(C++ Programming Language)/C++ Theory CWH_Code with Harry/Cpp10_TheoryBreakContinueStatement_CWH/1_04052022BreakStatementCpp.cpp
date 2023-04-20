

//////////////////////                         BREAK STATEMENT                         //////////////////////

/* 

Break Statements in C++ ::
We had already discussed a little bit about break statements in switch statements. Today we will see the working of break 
statements in loops. Break statements in loops are used to terminate the loop. */



#include<iostream>
using namespace std;

int main()
{

// in the below for loop , 2 will be printed
    for (int i = 0; i < 4; i++)
    {
        cout<<i<<endl;
        if(i ==2 )
        {
            break;
        }
    }


// in the below for loop , 2 will not be printed
    for (int i = 0; i < 4; i++)
    {
        if(i ==2 )
        {
            break;
        }

        cout<<i<<endl;
    }


    return 0;
}