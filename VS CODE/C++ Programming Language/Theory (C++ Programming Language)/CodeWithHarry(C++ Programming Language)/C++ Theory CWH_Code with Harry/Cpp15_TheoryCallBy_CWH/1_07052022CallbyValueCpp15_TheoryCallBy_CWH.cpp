

//////////////////////                                    CALL BY VALUE                              //////////////////////


/* 

Call by Value in C++  ::

Call by value is a method in C++ to pass the values to the function arguments. In case of call by value the copies of 
actual parameters are sent to the formal parameter, which means that if we change the values inside the function that 
will not affect the actual values. An example program for the call by value is shown in Code Snippet .

void swap(int a, int b){ //temp a b
    int temp = a;        //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
}


*/

#include<iostream>
using namespace std;


int sum(int a, int b)
{
    int c = a + b;
    return c;
}

void swap(int a, int b)  
{                       //temp a b
    int temp = a;       // 4   4  5   
    a = b;              // 4   5  5
    b = temp;           // 4   5  4 
}


// Call by reference using pointers
void swapPointer(int* a, int* b){ //temp a b
    int temp = *a;          //4   4  5   
    *a = *b;               //4   5  5
    *b = temp;            //4   5  4 
}


// Call by reference using C++ reference Variables
// int & 
void swapReferenceVar(int &a, int &b){ //temp a b
    int temp = a;          //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
    // return a;
}



int main()
{
    int x =4, y =5;
    cout<<"The sum of x and y is "<<sum(x,y)<<endl;


    cout<<"The value of x is "<<x<<" The value of y is "<<y<<endl;

    swap(x ,y); // This will not swap x and y
    cout<<"The value of x is "<<x<<" The value of y is "<<y<<endl;


    swapPointer(&x, &y); //This will swap a and b using pointer reference
    cout<<"The value of x is "<<x<<" The value of y is "<<y<<endl;


    swapReferenceVar(x, y); //This will swap a and b using reference variables
    // swapReferenceVar(x, y) = 766; //This will swap a and b using reference variables
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 

    return 0;
}