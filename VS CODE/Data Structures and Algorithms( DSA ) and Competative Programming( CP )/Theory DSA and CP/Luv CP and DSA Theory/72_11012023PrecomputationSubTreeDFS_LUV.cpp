



//
//
//  DFS In SubTree ==>
//
//
// 
//



/* 
//  // Question ==>
//
// Given Q queries, Q<= 10^5. In each query given v.
// Print subtree sum of v a nd count the  Number of even number
// in subtree of v
// in this node no is the value of each node for calculating
// the sum and to find the even number
// for ex. if node 1 then node 1 value is also 1 


*/

 
//  // input of Tree==>

// 13
// 1 2
// 1 3
// 1 13
// 2 5
// 3 4
// 5 6
// 5 7
// 5 8
// 8 12
// 4 9
// 4 10
// 10 11






#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int> g[N] ;
int subtree_sum[N] ;
int even_ct[N] ;


void dfs(int vertex , int parent =0 )
{
    // Take action on vertex after entering the vertex
    if(vertex % 2== 0)
    {
        even_ct[vertex] ++ ;  
    } 
    subtree_sum[vertex] += vertex  ;
    for(int child : g[vertex])
    {
        // Take action on child befor entering the child node

        if(child == parent )  continue;

        dfs(child, vertex);

        // Take action on child after exiting the child node
        subtree_sum[vertex] += subtree_sum[child] ;   
        even_ct[vertex] += even_ct[child] ;   

    }

    // Take action on vertex befor exiting the vertex

}


int main()
{
    int n ;
    cin>>n;
    for(int i =0; i<n-1; i++)
    {
        int v1 , v2 ;
        cin>>v1>>v2;

        g[v1].push_back(v2) ;
        g[v2].push_back(v1) ;
    }
    dfs(1) ;


    for(int i=1; i<=n; i++)
    {
        cout<<subtree_sum[i]<<" "<<even_ct[i]<<endl ;
    }

    // int q;   cin>>q;
    // while(q--)
    // {
    //     int v;   cin>>v;
    //     cout<<subtree_sum[v]<<" "<<even_ct[v]<<endl ;
    // }


}

 

























