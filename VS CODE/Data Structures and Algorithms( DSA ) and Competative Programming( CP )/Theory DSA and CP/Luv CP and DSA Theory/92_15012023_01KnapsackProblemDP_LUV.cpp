



//
//
//  // knapsack problem ==>
//
// Here some items are given with weight and cost and 
// we have to select some items with the given conditoin
//
//





//
//
// Discussed video Episode Number  is 94 of video number 108
//
// Video Link no 108    =>  Playlist video Episode Number  94
//
//
//  https://www.youtube.com/watch?v=o0NtrkItjws&list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&indexex=109
//
// 








// 
//
// Not discussed in the video Episode Number 94 but it have
// discussed in the video Episode Number 95 (link given below)
// which is not included in the playlist link 
//
//
// // // // // 0-1 knapsack Problem  ======>   Video is not included in playlist of luv cp playlist 
// // // // // 0-1 knapsack Problem  ======>   Video is not included in playlist of luv cp playlist 
// // // // // 0-1 knapsack Problem  ======>   Video is not included in playlist of luv cp playlist 
//
//
// video Episode Number 95  => not included in playlist 
//
//
// Link ===>  https://www.youtube.com/watch?v=tkoM1Pgt0Q4
//
// this video Episode Number is 95 and  this Video is not 
// included in the playlist of luv cp playlist 
//
//
//








//
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//



/* 
//
// //  Atcoder Question ==> 
//
// Discussed in Vide Episode Number 95 not included in playlist  
//



// // //  Questions Link =>
https://atcoder.jp/contests/dp/tasks


// // //  1. Question D ==>  Knapsack 1   =>
https://atcoder.jp/contests/dp/tasks/dp_d



//
// Video Link  ====>
//
// video Episode Number 95  => not included in playlist 
//
// link ===>   https://www.youtube.com/watch?v=tkoM1Pgt0Q4
//
//
// this video Episode Number is 95 and  this Video is not 
// included in the playlist of luv cp playlist 
//
//
//


*/









//
//
//
// Discussed in Vide Episode Number 95 not included in playlist  
// Discussed in Vide Episode Number 95 not included in playlist  
// Discussed in Vide Episode Number 95 not included in playlist  
// Discussed in Vide Episode Number 95 not included in playlist  
//
//
//

//
// Video Link  ====>  not discussed in video Episode number 94
//
// Discussed in Vide Episode Number 95 not included in playlist  
// Discussed in Vide Episode Number 95 not included in playlist
//
//
// video Episode Number 95  => not included in playlist 
//
// link ===>   https://www.youtube.com/watch?v=tkoM1Pgt0Q4
//
//
// this video Episode Number is 95 and  this Video is not 
// included in the playlist of luv cp playlist 
//
//
//




#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 +10;

int wt[105] , val[105] ;
long long dp[105][100005] ;

// func(-1 , amount) , []
// func(index , 0)

long long func(int index, int wt_left )
{
    if(wt_left ==0 ) return 0;
    if(index < 0 ) return 0;
    if(dp[index][wt_left] != -1 ) return dp[index][wt_left];

    // Don't choose item at index
    long long ans = func(index-1 , wt_left) ;

    // Chose item index
    if(wt_left - wt[index] >= 0 ) 
    ans = max (ans , val[index] + func(index-1 , wt_left - wt[index])  ) ;

    return dp[index][wt_left] = ans ;
    // return  ans ;
}


int main()
{
    memset(dp, -1, sizeof(dp)) ;

    int n ,w;
    cin>>n>>w;
    for(int i =0; i<n; i++)
    {
        cin>>wt[i]>>val[i] ;
    }
    cout<<func(n-1 , w)<<endl; 

}





















