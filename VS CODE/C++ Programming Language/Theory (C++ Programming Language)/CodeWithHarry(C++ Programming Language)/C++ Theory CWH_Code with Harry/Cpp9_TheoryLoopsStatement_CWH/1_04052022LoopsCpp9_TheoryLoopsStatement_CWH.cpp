

//////////////////////                         LOOPS                         //////////////////////


/*  

Loops in C++ ::
Loops are block statements, which keeps on repeatedly executing until a specified condition is met. There are three 
types of loops in C++ .

1. For loop in C++
2. While loop in C++
3. Do While in C++


1. For Loop in C++ :
For loop help us to run some specific code repeatedly until the specified condition is met. */


#include<iostream>
using namespace std;

int main()
{

    /*For loop in C++*/

    // Syntax for for loop
    // for(initialization; condition; updation)
    // {
    //     loop body(C++ code);
    // }

    // for(int i = 0; i <= 10; i++)
    // {
    //     cout<<i<<endl;
    // }

    // Example of infinite for loop 

    // for(int i = 0; 9 <= 10; i++)
    // {
    //     cout<<i<<endl;
    // }


//**************************************************************

    /*While loop in C++*/
    // Syntax:
    // while(condition)
    // {
    //     C++ statements;
    // }
     
    // int i = 1;
    // while(i<=20)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }




    // Example of infinite while loop 
    // int i = 1;
    // while(true)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }



//**************************************************************


    /* do While loop in C++*/
    // Syntax:
    // do
    // {
    //     C++ statements;
    // }while(condition);



    // int i = 1;
    // do
    // {
    //     cout<<i<<endl;
    //     i++;
    // }while(i<=20) ;



//**************************************************************


    cout<<"The multiplication table of 60 is given below"<<endl;

    for (int i=1; i<=10; i++)
    {
        cout<<60*i<<endl;
    }


    return 0;
}