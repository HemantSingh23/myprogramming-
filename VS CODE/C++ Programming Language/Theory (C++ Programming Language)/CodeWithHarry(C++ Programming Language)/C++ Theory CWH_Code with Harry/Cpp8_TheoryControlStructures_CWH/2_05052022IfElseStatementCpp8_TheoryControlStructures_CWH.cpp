

//////////////////////                        IF ELSE STATEMENT                         //////////////////////


/* 

If Else Statements in C++ ::

As we have discussed the concepts of the different control structure, If else statements are used to implement a 
selection structure.  */



// Example of  Selection Structure  


#include<iostream>
using namespace std ;

int main()
{
    cout<<"HELLO"<<endl;
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;

    if( (age < 18 ) && (age > 0) )
    {
        cout<<"You can not come to my party"<<endl;
    }

    else if(age == 18 )
    {
        cout<<"You are a kid and you will get a kid pass to the party"<<endl;

    }

    else if ( age < 1 )
    {
         cout<<"You are not yet born"<<endl;
    }

    else
    {
        cout<<"You can come to my party"<<endl;
    }

    return 0;
}

