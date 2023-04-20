
#include<iostream>
using namespace std;

int main()
{
    cout<<"Here we will print the stars with spaces in the Pyramid Form .\n"<<endl;
    cout<<endl;

    for( int i=1; i<=5; i++)
    {
        for( int j=1; j<=9; j++ )
        {
            if( j >=6 - i && j <= 4 +i  )
            {             
                cout<<"*";
            }  

           else
            {
                cout<<" ";
            }
        }
            cout<<endl;

    }

    return 0;
}