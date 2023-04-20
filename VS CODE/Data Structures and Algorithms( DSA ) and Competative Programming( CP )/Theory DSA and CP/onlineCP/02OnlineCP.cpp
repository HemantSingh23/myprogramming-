

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10 ;

// int dp[N] ;
int n ;  

int maxVal( vector<vector<int>>& piles, int k )
{
    cout<<k<<endl;
    if(k<=0) return 0 ;
    int ans = 0 ;
    cout<<k<<"after"<<endl;
    for(int i =0; i<piles.size(); i++)
    {
        for(int j =0; j<piles[i].size(); j++)
        {
            k-- ;  piles[i][j] = 0;
            ans = max( ans , piles[i][j] + maxVal(piles , k) ) ;
        }
    }
    return ans ;
}

// // //  Main Function of Question ==>     Main Function of Question ==>
// // //  Main Function of Question ==>     Main Function of Question ==>
//
int maxValueOfCoins(vector<vector<int>>& piles, int k) 
{
    int ans = maxVal(piles ,k);
    return ans ;
}





int main()
{
    // memset( dp , -1 , sizeof(dp) ) ;
    
    vector<vector<int>> piles =  { {1,100,3},{7,8,9}} ;
    int k = 2 ;
    cout<<maxValueOfCoins(piles , k )<<endl;
   
}















