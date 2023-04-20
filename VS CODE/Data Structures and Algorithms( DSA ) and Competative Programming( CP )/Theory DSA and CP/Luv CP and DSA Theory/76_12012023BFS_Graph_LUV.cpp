


//  // Breadth First Search (BFS)  ==>


// Also see in the copy notes




//
//
// // // // // // Breadth First Search (BFS)  ==>
//
// In BFS , first we traverse on the breadth
//
// its most important use is to find the shortest path
// of the between nodes 
//
//
//




//
//
// Time Complexity see below =>
//
//
//  //   Time Complexity == O(V+E)    =====>
//  //   Time Complexity == O(V+E)    =====>
//  //   Time Complexity == O(V+E)    =====>
//
//

 

 

//  //   input of Tree==>

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

int visited[N];
int level[N];

void bfs(int source)
{
    queue<int> q ;
    q.push(source) ;
    visited[source] =1 ;

    while(!q.empty())
    {
        int current_vertex = q.front();
        q.pop();
        cout<<current_vertex<<" "; // print current vertex
        for(int child :g[current_vertex] )
        {
            if(!visited[child])
            {                                 
                q.push(child) ;                                                           
                visited[child] =1 ;                                                             
                level[child] = level[current_vertex] + 1 ;                                         
            }                                                                     
        }                                                                      
    }                                                                                          
    cout<<endl;                                                                                                                                             
}                                                                                                   
                                                                                       


int main()
{
    int n ;   cin>>n;
    for(int i =0; i<n-1; i++)
    {
        int x, y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    bfs(1);

    for(int i =1; i<=n; i++)
    {
        cout<<i<<"  "<<level[i]<<endl;
    }

}



//
//
// V is no of nodes and E is no of edge
//
// while is run untill when all nodes will be pop up
// so while loop run O(V)
// and for loop will run the number of edges times of a node
// or it will run equal to no of node connected to a node
// and because for loop run for every node so O(2*E)
// because we store the each node or edges two times
// because g[x].push_back(y); and g[y].push_back(x);
// so O(2*E) == O(E)
//
// total comolexity == O(V+E)
// 
//
//
//  //   Time Complexity == O(V+E)    =====>
//  //   Time Complexity == O(V+E)    =====>
//  //   Time Complexity == O(V+E)    =====>
//
//




























