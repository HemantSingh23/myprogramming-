





/* 
given T test cases and in each test cases a number N .
Print its factorial for each test case % M
where  M = 10^9+7

constraints
1<=T<=10^5
1<=N<=10^5 */


// #include<bits/stdc++.h>
// using namespace std;

// const int M = 1e9+7;

// // 2nd approach Of PreComputation
// const int N = 1e5+10;
// long long fact[N];


// int main()
// {

// // 1st approach 
//     // int t ;
//     // cin>>t;
//     // while(t--)
//     // {
//     //     int n;
//     //     cin>>n;
//     //     long long int fact =1;
//     //     for(int i=1; i<=n; i++)
//     //     {
//     //         fact = (fact * i)%M;
//     //     }
//     //     cout<<fact<<endl;
//     // }
// // Time complexity = o(t*n) = 10^5 *10^5 = 10^10
// // this code will not run in 1 second so this approach will not work


///////// For PreComputation ////////////////
// // 2nd approach For PreComputation  // // 2nd approach For PreComputation

//     fact[0] = fact[1]  = 1;
//     for(int i=2; i<=N; i++)
//     {
//         fact[i] = fact[i-1] * i;
//     }

//     int t ;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         cout<<fact[n]<<endl;
//     }
// // Time complexity =
// // o(t) + o(n) = 10^5 + 10^5 = 2*10^5
    
// }





//////////// For Hashing   ////////////////////
//////////// For Hashing   ////////////////////
//////////// For Hashing   ////////////////////
//////////// For Hashing   ////////////////////
//////////// For Hashing   ////////////////////
//////////// For Hashing   ////////////////////
//////////// For Hashing   ////////////////////
//////////// For Hashing   ////////////////////
//////////// For Hashing   ////////////////////
//////////// For Hashing   ////////////////////

/* 
Given array a of n integers. Given Q queries and in each query
given a number x , print count of that number in array

constraints 
1<= N <= 10^5
1<= a[i] <= 10^7
1<= Q <= 10^5


// queries  = test cases
*/

#include<bits/stdc++.h>
using namespace std;

// Hashing (Second approach)
const int N = 1e7+10;
int hsh[N];  // global initialize array will be zero

int main()
{
// first approach
    // const int n = 5;
    // // cin>>n;
    // int a[n];
    // for(int i=0; i<n; i++)
    // {
    //     cin>>a[i];
    // }

    // int q ;
    // cin>>q;
    // while(q--)
    // {
    //     int x;
    //     cin>>x;
    //     int ct = 0;
    //     for(int i=0; i<n; i++)
    //     {
    //         if(a[i] == x)
    //         {
    //             ct++;
    //         }
    //     }
    //     cout<<ct<<endl;
    // }

// // Time complexity =
// // o(n) + o(q*n) = 10^5 + (10^5 * 10^5) = 10^10
// // this code will not run in 1 second so this approach will not work


// Hashing (Second approach)

  const int n = 5;
    // cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        hsh[a[i]] ++;
    }

    int q ;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        cout<<hsh[x]<<endl;
    }
// // Time complexity =
// // o(n) + o(q*) = 10^5 + (10^5) = 2*10^5

}
