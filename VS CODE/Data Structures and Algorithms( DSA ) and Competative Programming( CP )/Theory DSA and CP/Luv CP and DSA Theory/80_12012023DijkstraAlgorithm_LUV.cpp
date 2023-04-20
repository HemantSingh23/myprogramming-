

 
//
// Also read the copy notes 
//


//  //  Dijkstra Algorithm ==>
//
//
//
//


 


/* 
// //  Leetcode Question ==>   Given Below after algorithm 

// Question Link =>
https://leetcode.com/problems/network-delay-time/



// Video Link =>
https://www.youtube.com/watch?v=F3PNsWE6_hM&list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&index=96


*/




// //  Leetcode Question ==>   Given Below after algorithm 
// //  Leetcode Question ==>   Given Below after algorithm 
// 





#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
const int INF = 1e9+10;   // INF == infinity

vector<pair<int,int>> g[N] ;
// here pair first is node and second is weight

void dijkstra(int sourrce)
{
    vector<int> vis(N,0);
    vector<int> dist(N,INF);

    set<pair<int,int>> st; 
    // here we use set instead of Priority Queue
    // here in pair first is weight and second is node

    st.insert({0,sourrce});
    dist[sourrce] =0;

    while(st.size()>0)
    {
        auto node = *st.begin();
        int v = node.second;
        int v_dist = node.first;

        st.erase(st.begin()) ;  

        if(vis[v] ) continue ;
        vis[v] = 1;

        for(auto  child : g[v])
        {
            int child_v = child.first;
            int wt = child.second;

            // if new distance < current distance  then current distance == new distance 
            if( dist[v] + wt  <  dist[child_v])
            {
                dist[child_v] = dist[v] + wt ;
                st.insert({dist[child_v] , child_v }) ;
            }
        }
    }

}
 

int main()
{
    int n , m ;
    cin>>n>>m;
    for(int i =0; i<m; i++)
    {
        int x , y , wt;
        cin>>x>>y>>wt;
        g[x].push_back({y,wt}) ;
    }
}

//
//
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//


// //  Leetcode Question ==>   
// //  Leetcode Question ==>   
// //  Leetcode Question ==>   
// //  Leetcode Question ==>   




// #include<bits/stdc++.h>
// using namespace std;

// const int N = 1e5+10;
// const int INF = 1e9+10;   // INF == infinity


// int dijkstra(int sourrce , int n , vector<pair<int,int> > g[N])
// {
//     vector<int> vis(N,0);
//     vector<int> dist(N,INF);

//     set<pair<int,int>> st;

//     st.insert({0,sourrce});
//     dist[sourrce] =0;

//     while(st.size()>0)
//     {
//         auto node = *st.begin();
//         int v = node.second;
//         int v_dist = node.first;

//         st.erase(st.begin()) ;  

//         if(vis[v] ) continue ;
//         vis[v] = 1;

//         for(auto  child : g[v])
//         {
//             int child_v = child.first;
//             int wt = child.second;

//             if( dist[v] + wt  <  dist[child_v])
//             {
//                 dist[child_v] = dist[v] + wt ;
//                 st.insert({dist[child_v] , child_v }) ;
//             }
//         }
//     }

//     int ans = 0;
//     for(int i =1; i<=n; i++)
//     {
//         if(dist[i] == INF) return -1;
//         ans = max(ans , dist[i]) ;
//     }

//     return ans;

// }


// int networkDelayTime(vector<vector<int>>& times, int n, int k)
// {
//     vector<pair<int,int> > g[N] ; 
//     for(auto vec : times)
//     {
//         g[vec[0]].push_back({vec[1], vec[2]}) ;
//     }

//     return dijkstra(k,n ,g)  ;

// }
 



















