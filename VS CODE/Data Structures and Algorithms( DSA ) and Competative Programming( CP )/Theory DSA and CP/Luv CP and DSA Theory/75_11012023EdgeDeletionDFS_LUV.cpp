






// Question ===>

//  //  Edge Deletion using DFS ==>
//



/* 

// Question Link =>
https://www.interviewbit.com/problems/delete-edge/



// Video Link =>
https://www.youtube.com/watch?v=NzEzJ6Rmv2Q&list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&index=91


*/







#include<bits/stdc++.h>
using namespace std;

const int M = 1e9+7;
const int N = 1e5+10;
vector<int> g[N] ;
int subtree_sum[N] ;
int value[N] ;


void dfs(int vertex , int par )
{
    subtree_sum[vertex] += value[vertex] ;      
    for(int child : g[vertex])
    {
        if(child == par )  continue;
        dfs(child, vertex) ;
        subtree_sum[vertex] += subtree_sum[child] ;
    }

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
    dfs(1,0) ;

    long long ans = 0;

    for(int i =2; i<=n; i++)
    {
        int part1 = subtree_sum[i];
        int part2 = subtree_sum[1] - part1;

        ans = max(ans, (part1 * 1LL * part2)%M );
    }

    cout<<ans<<endl;
 

}


































