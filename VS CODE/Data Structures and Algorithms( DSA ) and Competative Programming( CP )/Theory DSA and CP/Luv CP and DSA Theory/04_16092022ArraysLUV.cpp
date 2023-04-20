


#include<bits/stdc++.h>
using namespace std ;

const int n = 1e7; 
// here we can declare more no size array 
// but for good practice globally array size should be a range of 1e7 or 10000000
// and localy array size should be 1e5 or 100000

int a[n];

int main()
{
    // int n;
    // cin >> n;
    // int a[n];   // wrong practice

    // int a[5]; // double bool can have any thing except char

    // for ( int i = 0; i < 5; i++)
    // {
    //     cin >> a[i];
    // }
    
    // int sumofarray = 0 ;
    // for ( int i = 0; i < 5; i++)
    // {
    //     sumofarray += a[i];
    // }
    // cout << sumofarray << endl;


    // char a[5]; // it is just like as string   





// 2D Array - 

    // int a[3][4];
    // for (int i = 0; i < 3;i++) 
    // {
    //     for ( int j = 0; j < 4; j++ ) 
    //     {
    //         cin >> a[i][j] ;
    //     }
    // }

    // for (int i = 0; i < 3;i++) 
    // {
    //     for ( int j = 0; j < 4; j++ ) 
    //     {
    //         cout << a[i][j] << " " ;
    //     }
    //     cout << endl;
    // }



// Memory in Array

    // const int n = 1e7; // 1e7 means 10000000
    // it will produce segmentation fault means here we can not declare this much of size 
    // we can declare this much of size if we declare it globally
    // means before the main() function
    // but for good practice globally array size should be a range of 1e7 or 10000000
    // and localy array size should be 1e5 or 100000
    
    // const int n = 1e5; 
    // //  we can declare the size of array  upto 1e5 or 100000
    // int a[n];
    a[n-1] = 7 ;
    cout << a[n-1] << endl;





}
