




//
//
//  // Lowest Common Ancestor(LCA) in Tree ==>
//
//
// to find this we find the path of the nodes
// for which we want to find the LCA
// and store the both the paths in two arrays
// then we go forward in both the array untill
// we get the different value then the last same
// value is the LCA
//
//
//
//  //  Time Complexity == O(N)
//  //  Time Complexity == O(N)
//  //  Time Complexity == O(N)
//  //  Time Complexity == O(N)
//
//
//
// see example below
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

//
//
//  //  Time Complexity == O(N)
//  //  Time Complexity == O(N)
//  //  Time Complexity == O(N)
//  //  Time Complexity == O(N)
//
//


//
// example=>
// let we have to find the LCA of node 6 and 12
// then we find the path of both the nodes
//
// for node 6    => 1-2-5-6
// for node 12   => 1-2-5-8-12
//
// then we store both in the two array
// and then find the last common same value in the
// both array which is LCA

//
//
//  //  Time Complexity == O(N)
//  //  Time Complexity == O(N)
//  //  Time Complexity == O(N)
//  //  Time Complexity == O(N)
//
//


#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int> g[N] ;
int Parent[N] ;


void dfs(int vertex , int par =-1 )
{
    Parent[vertex] = par ;
    for(int child : g[vertex])
    {
        if(child == par )  continue;

        dfs(child, vertex) ;
    }

}

vector<int> path(int v)
{
    vector<int> ans;
    while(v!= -1)
    {
        ans.push_back(v);
        v = Parent[v] ;
    }
    reverse(ans.begin(), ans.end());
    return ans;
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

    int x , y ;
    cin>>x>>y;
    vector<int> path_x = path(x) ;
    vector<int> path_y = path(y) ;

    int minLength = min(path_x.size(), path_y.size()) ;    

    int lca = -1  ;   
    for(int i =0; i<minLength; i++)
    {
        if(path_x[i] == path_y[i])
        {
            lca = path_x[i] ;
        }
        else
        {
            break;
        }
    }

    cout<<"LCA is : "<<lca<<endl;


}




//
//
//  //  Time Complexity == O(N)
//  //  Time Complexity == O(N)
//  //  Time Complexity == O(N)
//  //  Time Complexity == O(N)
//
//





























