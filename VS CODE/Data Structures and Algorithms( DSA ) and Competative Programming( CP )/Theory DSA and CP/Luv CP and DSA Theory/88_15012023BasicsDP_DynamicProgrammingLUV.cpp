


//
//
//  // Dynamic Programming(DP) ==>
//
// 
// Dynamic Programming(DP) is way to find the optimal
// solution of problems 
//
//
//

//
//
// DP contvert Higher Time Complexity to Lower Time Complexity
// which is given below ==> 
//
// 1. Factorial time complexity to exponential time complexity 
//
// O(N!) => O(2^x)
//
// 2. Exponential time complexity to linear time complexity and
//
// O(2^x) => O(N)
//
// 
//






//
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
// Lets write a program of fibonacci numbers using 
// simple recursion
//
// 0 1 1 2 3 5 8 13 21 ...........
//



// #include<bits/stdc++.h>
// using namespace std;
//
// int fib(int n)
// {
//     if(n==0) return 0;
//     if(n==1) return 1;
//     else return fib(n-1) + fib(n-2) ;
// }
//
//
// int main()
// {
//     int n  ;
//     cin>>n;
//     cout<<fib(n)<<endl ;
// }


//
//
// Time Compleixty == O(2^n)  (too high complexity)
//
// in this when we calculate time compleixity then in 
// each function call , the function call increase
// two times the previous function call
//
// 1 + 2+ 4 + 8 + 16 + ......................
//
// it is approx 2^(n+1) which is O(2^n) 
// which is  exponential time complexity
//
//
// menas if we want to calculate nth number fibbonachi number
// then time complexity will be O(2^n)  which is too high
//
// because time complexity is O(2^n) so we can't calculate
// fibonacci number more that 20 because then time complexity
// will be O(2^20) is equal to about 10^6 so we can calculate
// fibonacci number more than  20
//
//














//
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 
//
//
// Because above method time compleixty is  O(2^n) so we can't
// calculate fibonacci numbers for big numbers because
// there are too more function calls
//
//  
// So to solve above problem we use Dynamic Programming
// to optimized it using store the value of function call
// so next time we use it without calling the function again
//
// so in this maximum call can be n means  so 
// 
// Time Complexity == O(n) 
// which is linear time complexity
//
//
//
// It is a Top-Down Approach in which we we solve big
// problem using small problems
//
//
//


#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10 ;

int dp[N] ;


//  // Top-Down Approach ==>
//  // Top-Down Approach ==>
//  // Top-Down Approach ==>


// int fib(int n)
// {
//     if(n==0) return 0;
//     if(n==1) return 1;
//     if(dp[n] != -1) return dp[n] ;// it is called memoise
//     // or it is memoisation 
//
//     return dp[n] = fib(n-1) + fib(n-2) ;
//     // tin the return statement assignment operator(=) has
//     // return value which is its assign value  and here we 
//     // assign dp[n] from   fib(n-1) + fib(n-2) so here it
//     // return  fib(n-1) + fib(n-2) and also assign dp[n] 
// }


//
// // TOP-DOWN ==> in this only O(n) function call will be there
// //              because here we store the value in dp array   
//



int main()
{
    // this memset function work only for -1
    memset(dp, -1, sizeof(dp)) ;// this memset() function
    // will fill all the dp array with value -1 
    //
    // we can also use for loop for assigning values of 
    // dp array equal to -1 



    int n  ;
    cin>>n;



// // // Top-Down Approach ==>
// // // Top-Down Approach ==>
// // // Top-Down Approach ==>
//
// // // Time Complexity ==>  TOP-DOWN ==>  O(N)   
// // // Time Complexity ==>  TOP-DOWN ==>  O(N)   
//
// // // only n function call will be there 
//


    // cout<<fib(n)<<endl ;






//
// // // Bottom-Up Approach ==>
// // // Bottom-Up Approach ==>
// // // Bottom-Up Approach ==>
//
// // // Time Complexity ==>  Bottom-Up  ==>  O(N)   
// // // Time Complexity ==>  Bottom-Up  ==>  O(N)   
//

    dp[0] =0;
    dp[1] =1;
    for(int i =2; i<=n; i++)
    {
        dp[i] = dp[i-1] + dp[i-2] ;
    }
    cout<<dp[n]<<endl; 



}



























