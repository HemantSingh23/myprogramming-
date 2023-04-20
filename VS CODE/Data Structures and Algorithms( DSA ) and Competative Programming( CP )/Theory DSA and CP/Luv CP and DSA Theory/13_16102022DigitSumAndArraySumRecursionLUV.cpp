



// // Sum of elements of Array using Recursion

// #include<bits/stdc++.h>
// using namespace std;

// // sum(n,a) -> sum of elements in array a uptill n index
// // sum(n,a) = a[n] + sum(n-1 , a)
// int sum(int n , int a[])
// {
//     if(n<0) return 0;
//     return sum(n-1 , a) +a[n] ;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int a[n] ;
    
//     for(int i = 0; i<n; i++)
//     {
//         cin>>a[i] ;
//     }
//     cout<<sum(n-2 ,a) ;
// }
// // 1. Number of function call = n
// // 2. What is complexity of each function =>   o(1) + o(1)
// // TIme Complexity = n * ( o(1) + o(1) ) = o(n)  



// Digit Sum using Recursion
// Digit Sum using Recursion
// Digit Sum using Recursion

#include<bits/stdc++.h>
using namespace std;

// digit_sum(n) => digit_sum(n/10) + last_digit
// 1234 =>  digit_sum(123) + 4 
int digit_sum(int n )
{
    if(n==0) return 0;
    return digit_sum(n/10) +( n % 10) ;
}

int main()
{
    int n;
    cin>>n;
    
    cout<<digit_sum(n) ;
    
// 1. Number of function call =>  number of digits in number n = how how many times we divide the number n by 10 =  log(n)
// 2. What is complexity of each function =>   o(1) + o(1)  

// Time Complexity = log(n) * ( o(1) + o(1) ) =   log(n) * o(1)   =   log(n)
}

