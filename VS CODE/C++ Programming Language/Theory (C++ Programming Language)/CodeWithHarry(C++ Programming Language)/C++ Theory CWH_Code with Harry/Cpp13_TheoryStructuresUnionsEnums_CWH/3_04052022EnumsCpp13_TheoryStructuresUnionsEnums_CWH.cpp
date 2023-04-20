

//////////////////////                                      ENUMS                        //////////////////////


/* 

Enums in C++ ::
Enums are user-defined types which consist of named constants. Enums are used to make the program more readable. 
An example program for enums is shown in Code Snippet .

int main(){
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<m1;
    return 0;
}
     

*/






#include<iostream>
using namespace std ;

  
int main()
{

//  Enums in C++
    enum Meal{ breakfast, lunch, dinner};

    cout<<breakfast<<endl;  // output will be 0
    cout<<lunch<<endl;      // output will be 1
    cout<<dinner<<endl;     // output will be 2


    cout<<"Using Datatype m1 , m2 ,m3"<<endl;
    Meal m1 = breakfast;
    Meal m2 = lunch;
    Meal m3 = dinner;

    cout<<m1<<endl;
    cout<<m2<<endl;
    cout<<m3<<endl;


    return 0;
}