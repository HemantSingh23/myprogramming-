

//////////////////////                                     FUNCTION                             //////////////////////


/* 

Functions in C++ :: 
Functions are the main part of top-down structured programming. We break the code into small pieces and make functions 
of that code. Functions help us to reuse the code easily.


int sum(int a, int b)
{
 int c = a+b;
    return c;
}


*/


#include<iostream>
using namespace std;

int  sum(int a, int b)
{
    int c = a+b;

    return c;
}

int main()
{
    int num1, num2;

    cout<<"Enter first number num1 "<<endl;
    cin>>num1;

    cout<<"Enter first number num1 "<<endl;
    cin>>num2;

    cout<<"The sum of the two numbers num1 and num2 is "<<sum(num1 , num2)<<endl;


    return 0;
}








