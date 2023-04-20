

//////////////////////          VARIABES SCOPE AND DATATYPE         //////////////////////

 

#include<iostream>
using namespace std;

int glo = 6; // here it is work as global variable
void sum()
{
    int a;
    cout<<glo;
} 

int main()
{
    int a = 14;
    int b = 5;
    float pi = 3.14;

    int glo = 9; // here it is work as local variable
    glo = 78;
 
    bool is_true = true;

    // cout <<"This is tutorial 4. \nHere the value of a is "<<a  <<"\nThe value of b is "<<b ;
    // cout <<"\nThe value of pi is "<<pi;

    sum();
    cout<<glo<<is_true;

    // cout<<

    return 0;
}