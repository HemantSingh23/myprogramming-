



//
//
// SUBSET SUM & PARTITION PROBLEM  ==>
//
//
//



/* 
// //  Leetcode Question ==>   


// Questions Link =>
https://leetcode.com/problems/partition-equal-subset-sum/


// Video Link =>
https://www.youtube.com/watch?v=G46kdLkQ_Sw&list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&index=111


*/



#include<bits/stdc++.h>
using namespace std;

int dp[205][20005] ;

int func(int i, int sum, vector<int> &nums )
{
    if(sum == 0 ) return true;
    if(i < 0 ) return false;
    if(dp[i][sum] != -1 ) return dp[i][sum] ;

    // not consider ith index
    bool ispossible = func(i-1 , sum, nums);

    // consider ith index
    if(sum - nums[i] >= 0) 
    ispossible |= func(i-1 , sum-nums[i], nums );

    return dp[i][sum] = ispossible;

}

bool canPartition(vector<int> &nums)
{
    int sum = accumulate(nums.begin(), nums.end(), 0);
    if(sum%2 != 0) return false;

    sum = sum/2;

    return func(nums.size()-1 , sum , nums) ;
}

int main()
{
    memset(dp, -1, sizeof(dp)) ;

    

}




















































