



//
// Also see in the copy 
//
//
// // Minimum Spamming Tree ==>
//
// here an undirected weighted graph is given and we have to find a tree 
// from graph such that its total weight of the edges should be minimum 
// then that tree is called Minimum Spamming Tree
//
//for this many algorithms are available but here we discussed  Kruskal's Algorithm ==>
//
// Kruskal's Algorithm Time Complexity = O(n*log(n))
//
//





//
// Kruskal's Algorithm ==>
//
//
// here we select minimum weight edge such that no loop should be created
// and all node are connected
//




//
//
// // // /// // //    Question    ====>
// // // /// // //    Question    ====>
//
// // find minimum spanning tree and also find the total weight 
//
//


//  // input ==>

// 6 9
// 5 4 9
// 1 4 1
// 5 1 4
// 4 3 5
// 4 2 3
// 1 2 2
// 3 2 3
// 3 6 8
// 2 6 7


// output ==>

// 1 4
// 1 2
// 3 2
// 5 1
// 2 6
// 17




#include<bits/stdc++.h>
using namespace std;
 
const int N = 1e5+10;
const int INF = 1e9+10;   // INF == infinity

int parent[N] ;
int Size[N] ;

void make(int v)
{
    parent[v] = v;
    Size[v] = 1;
}

int find(int v)
{
    if( v == parent[v] ) return v ;
    return  parent[v] = find(parent[v]) ;
}


void Union (int a , int b) // union is reserved but Union is not
{
    a = find(a) ;
    b = find(b) ;
    if(a != b)
    {
        if(Size[a]<Size[b])  swap(a,b) ;
        parent[b] = a ;
        Size[a] += Size[b] ;
    }
}


int main()
{
    int n , m ;
    cin>>n>>m;

    vector<pair <int,pair<int,int> > > edges;
    // first pair first is weight and second pair is the connected edges

    for(int i =0; i<m; i++)
    {
        int u , v, wt;
        cin>>u>>v>>wt;
        edges.push_back({wt, {u,v}});
    }
    sort(edges.begin(), edges.end());


    for(int i =1; i<=n; i++)     make(i) ;


    int total_cost = 0;
    for(auto &edge : edges)
    {
        int wt = edge.first;
        int u = edge.second.first;
        int v = edge.second.second;

        if(find(u)== find(v)) continue;
        Union(u,v);
        total_cost += wt;
        cout<<u<<" "<<v<<endl;
    }
    cout<<total_cost<<endl;
}



















