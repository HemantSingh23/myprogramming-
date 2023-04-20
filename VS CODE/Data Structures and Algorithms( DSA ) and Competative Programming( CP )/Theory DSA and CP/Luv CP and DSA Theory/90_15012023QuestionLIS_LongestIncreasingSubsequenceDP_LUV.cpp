


//
//
//  // Longest Increasing Subsequence (LIS) ==>
//
//
//
// Also see Time Complexity Below


/* 
// Questions Link =>
https://leetcode.com/problems/longest-increasing-subsequence/



// Video Link =>
https://www.youtube.com/watch?v=mNrzyuus2h4&list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&index=107



*/

// example =>
// 10 9 2 5 3 7 101 18
// 
// Subsequences are 2 5 7 101  or  2 3 7 18  or  10 9 2 5  or
// 101 18 or 3 7 101 18 .......etc
//
//
//
// but for Increasing Subsequences are 2 5 7 101 or  2 3 7
// or 9 101 or 7 18 or 2 18 or 3 18 ..... etc
//
// but neither 101 18 nor 10 9 nor 7 101 18 nor 5 3 7 .. etc
// because these are not increasing
//
//
//

//
//
// // // //   Time Complexity == O(N^2)
// // // //   Time Complexity == O(N^2)
// // // //   Time Complexity == O(N^2)
// // // //   Time Complexity == O(N^2)
//
//
//
// because n function call and loop of n in each call
//


//  // Input ==>

// 8
// 10 9 2 5 3 7 101 18



#include<bits/stdc++.h>
using namespace std;

const int N = 25e2+10 ;

int dp[N] ;
vector<int> a(N) ;

int lis(int i, vector<int> &a )
{// here we pass vector &a due to leetcode otherwise no need
    if(dp[i] != -1) return dp[i] ;

    int ans = 1 ; 
    for(int j =0; j<i; j++)
    {
        if(a[i] > a[j])
        {
            ans = max(ans , lis(j,a) + 1 ) ;
            // here we pass vector &a due to leetcode 
            // otherwise no need
        }
    }

    return dp[i] = ans ;

}


int main()
{
    memset(dp, -1, sizeof(dp)) ;

    int n ;    cin>>n;
    for(int i =0; i<n; i++)
    {
        cin>>a[i] ; 
    }

    int ans = 0 ;
    for(int i =0; i<n; i++)
    {
        ans = max(ans, lis(i , a)) ;
        
    }

    cout<<ans<<endl; ;

}



//
//
// // // //   Time Complexity == O(N^2)
// // // //   Time Complexity == O(N^2)
// // // //   Time Complexity == O(N^2)
// // // //   Time Complexity == O(N^2)
//
//






























