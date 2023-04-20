


//
//
// DFS in Tree ==>
//
// Although in tree we can use the same function of 
// DFS as we use in Graph but in tree there is no 
// need of visited so we write new more optimized code
//
//






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
int depth[N] , height[N] ;  


void dfs(int vertex , int parent =0 )
{
    // Take action on vertex after entering the vertex

    for(int child : g[vertex])
    {
        // Take action on child befor entering the child node

        if(child == parent )  continue;
        depth[child] = depth[vertex] +1 ; 

        dfs(child, vertex);  //  take the action on child 
        height[vertex] = max(height[vertex], height[child] +1) ;

        // Take action on child after exiting the child node
        
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

    for(int i =1; i<=n; i++)
    {
        cout<<depth[i]<<" "<<height[i]<<endl;
    }


}  
 
















 