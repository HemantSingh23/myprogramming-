

//////////////////////                                      STRUCTURES                        //////////////////////



/* 

Structures in C++  ::
The structure is a user-defined data type that is available in C++. Structures are used to combine different types of 
data types, just like an array is used to combine the same type of data types. An example program for creating a structure 
is SHOWN in Code Snippet 

struct employee
{
    // data 
    int eId; 
    char favChar; 
    float salary; 
}; 





Another way to create structure variables without using the keyword “struct” and the name of the struct is shown in Code Snippet 

typedef struct employee
{
    // data 
    int eId; //4
    char favChar; //1
    float salary; //4
} ep;


we have used a keyword “typedef” before struct and after the closing bracket of structure, we have written “ep”. Now we can 
create structure variables without using the keyword “struct” and name of the struct. An example is shown in Code Snippet 


int main(){
ep harry;
    struct employee shubham;
    struct employee rohanDas;
    harry.eId = 1;
    harry.favChar = 'c';
    harry.salary = 120000000;
    cout<<"The value is "<<harry.eId<<endl; 
    cout<<"The value is "<<harry.favChar<<endl; 
    cout<<"The value is "<<harry.salary<<endl; 
    return 0;
}

*/



#include<iostream>
using namespace std ;

struct employee
{
    int eId;
    char favchar;
    float salary;
};


typedef struct worker
{
    int wId;
    char wchar;
    float wsalary;
}wr;

int main()
{
    struct employee harry;

    harry.eId = 1;
    harry.favchar = 'c' ;
    harry.salary = 12000;

    cout<<harry.eId<<endl;
    cout<<harry.favchar<<endl;
    cout<<harry.salary<<endl;




    wr hemant ;

    hemant.wId = 2;
    hemant.wchar = 'h';
    hemant.wsalary = 20000000;

    cout<<hemant.wId<<endl;
    cout<<hemant.wchar<<endl;
    cout<<hemant.wsalary<<endl;


    return 0;
}