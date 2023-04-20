

//////////////////////                         POINTERS                        //////////////////////



/* 

Pointers in C++ :: 

A pointer is a data type which holds the address of other data type. The "&" operator is called "address off" operator, and 
the "*" operator is called "value at" dereference operator.  */




#include<iostream>
using namespace std;

int main()
{
    int a =3;



    // int* b = &a;

    int* b;
    b = &a;

    // & --->  Address of operator



    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
    



    // * --->  Dereference operator
 
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<*b<<endl;


    // Pointer to pointer 

    int**c = &b;

    cout<<"The address of b is "<<&b<<endl; 
    cout<<"The address of b is "<<c<<endl;

    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of b is "<<*c<<endl;

    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;


    return 0;
}