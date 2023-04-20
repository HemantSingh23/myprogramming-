

//////////////////////                        POINTER ARRAYS                       //////////////////////



/* 
Pointers and Arrays
Storing the address of an array into pointer is different than storing the address of a variable into the pointer because 
the name of the array is an address of the first index of an array. So to use ampersand "&" with the array name for assigning 
the address to a pointer is wrong.

&Marks --> Wrong
Marks  --> address of the first block



An example program for storing the starting address of an array in the pointer is shown in code snippet 4.

int* p = marks;
cout<<"The value of marks[0] is "<<*p<<endl;

*/



#include<iostream>
using namespace std;


int main()
{
    int marks[] = {23, 45, 56, 89};

    int* p = marks;

    // cout<<"The value of marks[0] is "<<*p<<endl;
    // cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    // cout<<"The value of marks[2]) is "<<*(p+2)<<endl;
    // cout<<"The value of marks[3 ] is "<<*(p+3)<<endl; 


    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<*(p+1)<<endl; // this and the below statement are the same
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl; 


    // cout<<*(p++)<<endl;
    // cout<<*(p)<<endl;

    cout<<*(++p)<<endl;
    cout<<*(p)<<endl;


    return 0;
}