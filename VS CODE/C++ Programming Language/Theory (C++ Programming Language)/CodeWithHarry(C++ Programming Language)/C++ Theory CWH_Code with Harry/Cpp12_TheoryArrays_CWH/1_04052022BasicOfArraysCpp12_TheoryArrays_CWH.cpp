

//////////////////////                        BASICS OF ARRAYS                       //////////////////////


/* 

What are Arrays in C++ ::

An array is a collection of items which are of the similar type stored in contiguous memory locations.
Sometimes, a simple variable is not enough to hold all the data.
For example, let’s say we want to store the marks of 2500 students; initializing 2500 different variable for this task is not feasible.
To solve this problem, we can define an array with size 2500 that can hold the marks of all students.
For example int marks[2500]; 

*/


#include<iostream>
using namespace std;

int main()
{ 
    int marks[4] = {23, 45, 56, 89};

    int mathmarks[4] ;

    mathmarks[0] = 2278;
    mathmarks[1] = 738;
    mathmarks[2] = 378;
    mathmarks[3] = 578;


    cout<<"These are the math marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;


    // You can change the value of an array
    marks[2] = 467;

    cout<<"These are the marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;


//********************************************************************************************************

    // cout<<"These are the marks using for loop"<<endl;
    // for( int i=0; i<4; i++ )
    // {
    //    cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl; 
    // }



//********************************************************************************************************


    // cout<<"These are the marks using while loop"<<endl;

    // int i=0;
    // while(i<4)
    // {
    //    cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //    i++;
    // }


//********************************************************************************************************


    cout<<"These are the marks using do-while loop"<<endl;

    int i = 0;
    do
    {
       cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
       i++;

    }while(i<4);

    return 0;
}