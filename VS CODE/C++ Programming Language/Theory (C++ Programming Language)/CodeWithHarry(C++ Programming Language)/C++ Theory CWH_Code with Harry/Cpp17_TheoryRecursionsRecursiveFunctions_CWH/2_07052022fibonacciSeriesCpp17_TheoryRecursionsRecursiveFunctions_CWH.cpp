

//////////////////////                                    FIBONACCI SERIES                              //////////////////////

#include<iostream>
using namespace std ;

int fib(int n)
{
    if (n<=2)
    {
        return 1;
    }
    return   fib(n-1) + fib(n-2) ;
}


int main()
{
    int a;
    cout<<"Enter the term of the fibonacci number"<<endl;
    cin>>a;

    cout<<"The number in fibonacci series at "<<a<< "th term  is "<<fib(a)<<endl;


    return 0;
}