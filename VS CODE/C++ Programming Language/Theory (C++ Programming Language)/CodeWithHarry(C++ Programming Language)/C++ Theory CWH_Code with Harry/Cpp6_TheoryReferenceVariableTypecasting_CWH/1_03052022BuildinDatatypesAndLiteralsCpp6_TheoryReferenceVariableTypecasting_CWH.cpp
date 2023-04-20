

//////////////////////             BUILD IN DATATYPES  AND LITERALS       //////////////////////


#include<iostream> 

using namespace std;

int c = 45;

int main()
{
    // *******       Build in Datatypes       ********

    // int a , b ,c ;   
   
    // cout<<"Enter the value of a :"<<endl;
    // cin>>a;

    // cout<<"Enter the value of b :"<<endl;
    // cin>>b;

    // c = a + b;   
    // cout<<"The Sum is "<<c<<endl;

    // cout<<"The global c is "<<::c;




    // *******       float , double and long double literals     ********

    float d = 34.4 ; // we can also write  float d = 34.4f ;  or   float d = 34.4F ; 
    long double e = 34.4 ;   // we can also write  long double e = 34.4l ;  or  long double e = 34.4L ;
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;


    cout<<"The size of 34.4  is " << sizeof(34.4)<<endl ;
    cout<<"The size of 34.4f is " << sizeof(34.4f)<<endl ;
    cout<<"The size of 34.4F is " << sizeof(34.4F)<<endl ;
    cout<<"The size of 34.4l is " << sizeof(34.4l)<<endl ;
    cout<<"The size of 34.4L is " << sizeof(34.4L)<<endl ;



    
    // int c = int(b);

    // cout<<"The expression is "<<a + b<<endl;
    // cout<<"The expression is "<<a + int(b)<<endl;
    // cout<<"The expression is "<<a + (int)b<<endl;


    return 0;
}
