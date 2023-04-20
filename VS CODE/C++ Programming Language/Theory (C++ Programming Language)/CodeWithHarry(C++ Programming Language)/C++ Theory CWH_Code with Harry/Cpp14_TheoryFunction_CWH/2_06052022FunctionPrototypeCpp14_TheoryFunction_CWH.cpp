

//////////////////////                          FUNCTION  PROTOTYPE                           //////////////////////


/* 


Function Prototype in C++  ::
The function prototype is the template of the function which tells the details of the function e.g(name, parameters) to 
the compiler. Function prototypes help us to define a function after the function call. An example of a function prototype 
is shown in Code Snippet .

// Function prototype
    int sum(int a, int b); 
    


Formal Parameters ::
The variables which are declared in the function are called a formal parameter. For example, as shown in Code Snippet , 
the variables "a" and "b" are the formal parameters.


Actual Parameters ::
The values which are passed to the function are called actual parameters. For example, as shown in Code Snippet , 
the variables "num1" and "num2" are the actual parameters.
The function doesn't need to have parameters or it should return some value. An example of the void function is 
shown in Code Snippet .


void g(){
    cout<<"\nHello, Good Morning";
}


*/


#include<iostream>
using namespace std;

// Function prototype
// int sum(int a, int b);  //Acceptable
int sum(int , int );    //Acceptable because a , b are not actual arguments
// int sum(int a, b);  // Not Acceptable



void g();
// void g(void); //--> Acceptable 

int main()
{
    int num1, num2;
    // num1 and num2 are actual parameters

    cout<<"Enter first number num1 "<<endl;
    cin>>num1;

    cout<<"Enter first number num1 "<<endl;
    cin>>num2;

    cout<<"The sum of the two numbers num1 and num2 is "<<sum(num1 , num2)<<endl;

    g();

    return 0;
}




int sum(int a, int b)
// Formal Parameters a and b will be taking values from actual parameters num1 and num2.
{
    int c = a+b;
    return c;
}

void g(){
    cout<<"\nHello, Good Morning";
}








