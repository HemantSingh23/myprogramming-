

//////////////////////                       REFERENCE VARIABLE  AND TYPECASTING                        //////////////////////


// *********       REFERENCE VARIABLE         **********

// Rohan Das -----> Monty -----> Rahu ------> Dangerous Coder

#include<iostream>
using namespace std;

int main()
{
    float x = 455;
    float &y = x ;
    cout<<x<<endl;
    cout<<y<<endl;



// *********       TYPECASTING      **********

    int a = 45;
    float b = 45.46;

    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;

    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;

    int c = int (b);
    // int c = int b;    // wrong statement

    cout<<"The expression is "<< a + b <<endl ;
    cout<<"The expression is "<< a + int(b) <<endl ;
    cout<<"The expression is "<< a + (int)b <<endl ;



    
    return 0;
}






