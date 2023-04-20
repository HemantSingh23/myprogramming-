


//
//
// Connected Componets find
//  
//  


// Hackerearth Question ==>

/* 

Question Link =>
https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/


Video Link =>
https://www.youtube.com/watch?v=zBbRgLpeZus&list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&index=85


*/


//
//
// // Time Complexity == O(n+e)   n is vertex and e is edges
//
//


#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int> g[N] ;
bool visited[N] ;

// if we want to store the connected components nodes
// cc = connected components
//
vector<vector<int>> cc;

vector<int> current_cc;


void dfs(int vertex)
{
    // Take action on vertex after entering the vertex
    visited[vertex] = true;

    // current_cc.push_back(vertex) ; // to store conected components

    for(int child : g[vertex])
    {
        // Take action on child befor entering the child node
        if(visited[child]) continue; //  if(visited[child] == true) continue; 

        dfs(child);

        // Take action on child after existing the child node

    }

    // Take action on vertex befor existing the vertex

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

    int ct = 0;
    for(int i =1; i<=n; i++)
    {
        if(visited[i]) continue;

        // current_cc.clear() ; // to store conected components
        dfs(i);
        // cc.push_back(current_cc) ; // to store conected components
        ct++;
    }
    cout<<ct<<endl;

//  //  To Print the connected Components 
    // cout<<cc.size()<<endl;
    // for(auto c_cc : cc)
    // {
    //     for(int vertex : c_cc)
    //     {
    //         cout<<vertex<<" " ;
    //     }
    //     cout<<endl;
    // }


}

 

































