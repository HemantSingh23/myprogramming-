

#include<bits/stdc++.h>
using namespace std;

const int N = 120 ;



int wt[105] , val[105] ;
int dp[N] ;

long long  func(int index , int val_left  )
{
    if(val_left==0) return 0 ; 
    if(index<0) return 0 ; 
    // if(dp[day] != -1 ) return dp[day] ; 

    // // don't take 
    long long ans =  func(index-1, val_left )    ;

    // // take
    if(val_left - val[index] >= 0 ) ; 
    ans = max( ans ,  wt[index] + func(index-1, val_left-val[index] )  )  ;

    return   ans ;
    // return  dp[index] = maxPoint ;
}


int main()
{
    memset( dp , -1 , sizeof(dp) ) ;
    int n , w ;  
    cin>>n>>w ; 

    for(int i =0; i<n; i++)
    { 
        cin>>wt[i]>>val[i] ;
    }
    
    int mxval = 100000;
    for(int i =mxval; i>0; i--)
    { 
        if( func(n-1 , i) <= w )
        {
            cout<<i<<endl;
            break;
        }
    }

   

}















