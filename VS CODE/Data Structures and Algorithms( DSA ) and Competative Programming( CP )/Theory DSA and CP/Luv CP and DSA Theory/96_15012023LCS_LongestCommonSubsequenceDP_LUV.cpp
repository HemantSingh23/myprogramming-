



//
// It is the last file because youtuber LUV, CP playlist 
// is completed after this file
//




//
//
//  // Longest Common Subsequence (LCS) ==>
//
//

// Also see time complexity



/* 
// //  Leetcode Question ==>   


// Questions Link =>
https://leetcode.com/problems/longest-common-subsequence/


// Video Link =>
https://www.youtube.com/watch?v=Q0o9sU1r0FY&list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&index=112


*/

// Time Complexity == O(n^2)


#include<bits/stdc++.h>
using namespace std;

int dp[1005][1005] ;

int lcs(int i, int j, string &s1 , string &s2 )
{
    if(i<0 || j< 0 ) return 0;
    if(dp[i][j] != -1 ) return dp[i][j] ;

    // remove 1 character from s1
    int ans = lcs(i-1, j , s1, s2) ;

    // remove 1 character from s2
    ans = max(ans, lcs(i, j-1 , s1, s2)) ;

    // remove character from s1 and s2 both
    ans = max(ans, lcs(i-1, j-1 , s1, s2) + (s1[i]==s2[j]) );

    return dp[i][j] = ans;

}

int longestCommonSubsequence(string text1, string text2) 
{
    return lcs( text1.size()-1 , text2.size()-1, text1 , text2 ) ;
        
}


int main()
{
    memset(dp, -1, sizeof(dp)) ;

    

}















































































