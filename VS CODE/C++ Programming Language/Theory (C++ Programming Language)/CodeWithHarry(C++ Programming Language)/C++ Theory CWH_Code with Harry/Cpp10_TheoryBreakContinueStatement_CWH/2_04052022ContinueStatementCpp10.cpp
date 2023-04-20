

//////////////////////                         CONTINUE STATEMENT                         //////////////////////


/* 

Continue Statements in C++  ::
Continue statements are somewhat similar to break statements. The main difference is that the break statement entirely 
terminates the loop, but the continue statement only terminates the current iteration. */



#include<iostream>
using namespace std;

int main()
{
    for( int i=0; i<10; i++ )
    {
        if(i==2)
        {
            continue;   // this will skip the 2 and then again continue to printing thr numbers
        }
        cout<<i<<endl;
    }
    return 0;
}