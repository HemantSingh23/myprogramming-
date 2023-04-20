

#include<bits/stdc++.h>
using namespace std;

int main()
{

// conditional statement
    // int a = 2 ;
    // int b = 3 ;
    // int c = 4 ;
    // cout << ( a == b ) << endl ; // output is 0(false)
    // cout << ( (b > a) || (b > c) ); 



// conditions
    // int n;
    // cin >> n ;
    // if( n % 2 == 0 )
    // {
    //     cout << "even no" << endl ; 
    // }

    // else if( n % 3 == 0 )
    // {
    //     cout << "odd no" << endl ; 
    // }

    // else
    // {
    //     cout << "Nothing" << endl ; 
    // }


// loops

    // while loop
    // int i = 1 ;
    // while( i <= 10 )
    // {
    //     cout << i << endl ;
    //     i++;
    // }

    // for loop
    // for ( initialization ; conditions ; operations ) {}
    // the above written conditions inside the for loop is not necessary
    // means we can discard except put ; 

    // for ( int i = 0 ; i <= 10 ; i++ )
    // {
    //     cout << i << endl ;
    // }

    // for ( ; ; )
    // {
    //     // it is infinite for loop
    // }
    // for ( int i = 0 ; ; i++ )
    // {
    //     // it is infinite for loop
    // }
    // for ( int i = 0 ; true ; i++ )
    // {
    //     // it is infinite for loop
    // }

    // 
    // int i = 0 ;
    // for ( ; i <= 10 ; i++ )
    // {
    //     cout << i << endl ;
    // }

    //
    // for ( int i = 0 ; i <= 10 ; cout << i++ << endl  )
    // {
    //     ;
    // }

    // nested  loops
    // int t;
    // cin >> t ;
    // for ( int test = 1 ; test <= t ; test++ )
    // {
    //     int n ;
    //     cin >> n ;
    //     for ( int i = 1 ; i <= n ; i++ )
    //     {
    //         for ( int j = 1 ; j <= i ; j++ )
    //         {
    //             cout << "*" ;
    //         }
    //         cout << endl ;
    //     }   
    // }

    // int t;
    // cin >> t ;
    // while( t-- )
    // {
    //     int n ;
    //     cin >> n ;
    //     for ( int i = 1 ; i <= n ; i++ )
    //     {
    //         for ( int j = 1 ; j <= i ; j++ )
    //         {
    //             cout << "*" ;
    //         }
    //         cout << endl ;
    //     }
    // }

    // Break statement
        // for ( int i = 0 ; i < 10 ; i++ )
        // {
        //     if ( i == 8 )
        //     {
        //         break;
        //     }
        //     cout << i << endl ;
        // }

    // Continue statement  
        // for ( int i = 0 ; i < 10 ; i++ )
        // {
        //     if ( i == 8 )
        //     {
        //         continue;
        //     }
        //     cout << i << endl ;
        // }


    // Question-1 
        // while( true )
        // {
        //     int x ;
        //     cin >> x ;
        //     if( x == 42 ) 
        //     {
        //         break;
        //     }
        //     cout << x << endl ;
        // }

 // Question-2 
        int n ;
        cin >> n ;
        int sum = 0 ;
        int product = 1 ;
        while( n > 0)
        {
            int last_digit = n % 10 ;
            
            sum +=  last_digit ;
            product *= last_digit ;

            n = n / 10 ;
        }

        cout << sum << endl ; 
        cout << product << endl ; 

}