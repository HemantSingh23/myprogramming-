


//
//
// Check Cycle in Graph ==> 
//
//


// GFG Question ==>

/* 

Question Link =>
https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?page=1&category[]=DFS&sortBy=submissions


Video Link =>
https://www.youtube.com/watch?v=zBbRgLpeZus&list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&index=85


*/





// input=>

// 8 6
// 1 2
// 2 3
// 2 4
// 3 5
// 6 7
// 1 5


// Output = 1






#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10 ;
vector<int> g[N] ;
bool visited[N] ;


bool dfs(int vertex , int parent )
{
    // Take action on vertex after entering the vertex
    visited[vertex] = true;
    bool isloopExits = false ;

    for(int child : g[vertex])
    {
        // Take action on child befor entering the child node
        if(visited[child] && child == parent) continue ;
        if(visited[child]) return true;

        isloopExits |= dfs(child , vertex);

        // Take action on child after existing the child node
    }

    // Take action on vertex befor existing the vertex

    return isloopExits ;

}


int main()
{
    int n ,e;
    cin>>n>>e;
    for(int i =0; i<e; i++)
    {
        int v1 , v2 ;
        cin>>v1>>v2;

        g[v1].push_back(v2) ;
        g[v2].push_back(v1) ;
    }

    bool LoopExit = false ;
    for(int i =1; i<=n; i++)
    {
        if(visited[i]) continue;

        if(dfs(i,0))
        {
            LoopExit = true ;
            break;
        }
    }
    cout<<LoopExit<<endl;



}

 








































