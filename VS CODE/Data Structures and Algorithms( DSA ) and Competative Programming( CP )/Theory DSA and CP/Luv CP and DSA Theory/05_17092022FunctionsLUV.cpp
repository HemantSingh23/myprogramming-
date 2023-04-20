



#include<bits/stdc++.h>
using namespace std ;


// Function in C++ 

// void printHello()
// {
//     cout << "Hello World" << endl;
// }

// int sum( int a , int b )
// {
//     int result = a + b;
//     return result;
// }

// int main()
// {
//     printHello();
//     cout << sum( 5 , 6 ) << endl;

//     return 0; 
// now return 0 is optional because it only tells that the execution of program has been ended
// but in main() function case modern compiler has already assume that it return 0 so no need to write return 0
// }




/// References in C++ 

// int increment( int n )
// {
//     n++;
//     return n ;
// }

// void increment ( int &n , int n1 )
// {
//     n++ ;
//     n1++ ;
// }

// void swapnumber( int &a , int &b)
// {
//     int temp = a ;
//     a = b;
//     b = temp ;
// }

// void funcstr( string &s)
// {
//     s = "Hemant";
// }



void funcarr( int a[] )
{
    a[0] = 5 ;
}




int main()
{
    // int a = 3;
    // int b = 8;
    // cout << a << b << endl;
// using int increment() methond
    // a = increment(a);
    // cout << a << endl;

// using void increment() methond
    // increment(a , b);
    // cout << a << " " << b << endl; // value of b will not change because 
    // // here in void fuction n1 is pass by value so only copy of the value of b will pass
    // // that's why b will not increment
    // // but n is pass by reference so value of a will change



// swapping of two numbers using void swapnumber
//     int a = 5 ;
//     int b = 10 ;
//     cout << a << " " <<  b << endl;
//     // swapnumber(a , b);
//     // cout << a << " " << b << endl;

// // anyway in C++ swap() function already exit 
//     swap(a , b);
//     cout << a << " " << b << endl;

// // same max() and min() function

//     cout << max(a , b) << endl;
//     cout << min(a , b) << endl;


// datatype string also pass by value and pass by reference
    // string s = "ashdgh";
    // cout << s << endl;
    // funcstr(s);
    // cout << s << endl;



// datatype array always pass by reference

    int a[10];
    a[0] = 7;
    cout << a[0] << endl ;
    funcarr(a);
    cout << a[0] << endl ;

  

}