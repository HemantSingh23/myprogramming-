

////////////////////////////////             UPPER RIGHT VERTEX      RIGHT ANGLE TRINGLE  STAR PATTERN                   //////////////////////////////////////////////////////////////


 

#include<iostream>
using namespace std ;


int main()
{
    int n ;

    cout<<"Here we will print the stars in the Right Angle Tringle Form .\n"<<endl;
    cout<<"In the Right Angle Tringle , VERTEX IS AT THE UPPER RIGHT SIDE "<<endl;


    cout<<"\nHere n is the number of Rows or stars use in the hight of the right angle tringle "<<endl;
    cout<<"Please enter the value of n  "<<endl;
    cin>>n;
    cout<<endl;

        // for(int j=1; j<=n; j++)
        // {
        //     for(int k=1; k<=n-j; k++)
        //     {
        //         cout<<" ";
        //     }
            
        //     for(int l=1; l<=j; l++)
        //     {
        //         cout<<"*";
        //     }
        // cout<<endl;
        // }



//************************************************************************************************



    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=n; j++)
    //     {
    //         if(j<=n-i)
    //         {
    //             cout<<" ";
    //         }

    //         else 
    //         {
    //             cout<<"*";

    //         }
    //     }
    //     cout<<endl;
    // }



//************************************************************************************************



    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(j>n-i)
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






























