

//////////////////////                        SWITCH CASE STATEMENT                         //////////////////////





// Example of  Selection Structure  

#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;    

    switch(age)
    {

    case 18:
        cout<<"you are 18"<<endl;
        break;

    case 22:
        cout<<"you are 22"<<endl;
        break;

    case 2:
        cout<<"you are 2"<<endl;
        break;

    default:
        cout<<"No special case"<<endl;
        break;

    }
/* If we don't use break statement then all the cases will be executed */

    return 0;
}
