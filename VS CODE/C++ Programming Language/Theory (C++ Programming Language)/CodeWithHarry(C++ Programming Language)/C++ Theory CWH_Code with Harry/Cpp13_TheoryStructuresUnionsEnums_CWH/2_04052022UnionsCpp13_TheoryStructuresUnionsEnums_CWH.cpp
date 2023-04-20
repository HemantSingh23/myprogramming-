

//////////////////////                                      UNIONS                        //////////////////////


/* 

Unions in C++ ::
Unions are similar to structures but they provide better memory management then structures.  Unions use shared memory 
so only 1 variable can be used at a time. An example program to create unions is shown in Code Snippet 

union money
{
    // data 
    int rice; //4
    char car; //1
    float pounds; //4

}; 

*/



#include<iostream>
using namespace std ;

union money 
{
    int rice; //4 Bytes
    char car; //1 Bytes
    float pounds; //4 Bytes
};
  
int main(){
        union money m1;
        m1.rice = 34;

        cout<<m1.rice;

        return 0;
}