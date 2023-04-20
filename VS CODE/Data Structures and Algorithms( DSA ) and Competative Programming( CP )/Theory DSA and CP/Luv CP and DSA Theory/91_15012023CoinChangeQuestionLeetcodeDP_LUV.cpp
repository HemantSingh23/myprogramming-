






/* 
// Leetcode Question  ==>  Two Question 

// Questions Link =>

// 1 Question  --> 322. Coin Change 
https://leetcode.com/problems/coin-change/


// 2 Question  --> 518. Coin Change II
https://leetcode.com/problems/coin-change-ii/


// Video Link =>
https://www.youtube.com/watch?v=PoTE56n_It8&list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&index=107


*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* 

// 1 Question  --> 322. Coin Change 
https://leetcode.com/problems/coin-change/

*/

// #include<bits/stdc++.h>
// using namespace std;

// int dp[10010] ;

// int func(int amount, vector<int> &coins)
// {
//     if(amount ==0 ) return 0;
//     if(dp[amount] != -1 ) return dp[amount];

//     int ans = INT_MAX ;
//     for(int coin : coins)
//     {
//         if(amount - coin >= 0 ) 
//         ans = min (ans + 0LL , func(amount-coin, coins) +1LL) ;
//     }
//     return dp[amount] = ans ;
// }

// int coinChange(vector<int>& coins, int amount) 
// {
//     int ans = func(amount , coins) ;
//     return ans == INT_MAX ? -1 : ans ;
// }


// int main()
// {
//     memset(dp, -1, sizeof(dp)) ;

//     // vector<int> coins = {1,2,5} ;  // output is 3
//     // cout<<coinChange(coins , 11)<<endl;

//     vector<int> coins = {2} ;  // output is -1
//     cout<<coinChange(coins , 3)<<endl;
// }






/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/* 

// 2 Question  --> 518. Coin Change II
https://leetcode.com/problems/coin-change-ii/

*/



#include<bits/stdc++.h>
using namespace std;

int dp[310][10010] ;


// wrong approach =>
//
// int dp[5010];
// int func(int amount, vector<int> &coins)
// {
//     if(amount ==0 ) return 1 ;
//     if(dp[amount] != -1 ) return dp[amount];
 
//     int ways = 0 ;
//     for(int coin : coins)
//     {
//         if(amount - coin >= 0 ) 
//         ways += func(amount-coin, coins) ;
//     }
//     return dp[amount] = ways ;
// }

int func1(int index, int amount, vector<int> &coins)
{
    if(amount ==0 ) return 1 ;
    if(index <0 ) return 0 ;
    if(dp[index][amount] != -1 ) return dp[index][amount];

    int ways = 0 ;
    for(int coin_amount =0; coin_amount <= amount; coin_amount += coins[index])
    {
        ways += func1(index-1 , amount-coin_amount, coins) ;

    }
    
    return dp[index][amount] = ways ;
}


int coinChange(vector<int>& coins, int amount) 
{
    int ans = func1(coins.size() -1 , amount , coins) ;
    return ans == INT_MAX ? -1 : ans ;
}


int main()
{
    memset(dp, -1, sizeof(dp)) ;

    // vector<int> coins = {1,2,5} ;  // output is 3
    // cout<<coinChange(coins , 11)<<endl;

    vector<int> coins = {2} ;  // output is -1
    cout<<coinChange(coins , 3)<<endl;

}



























