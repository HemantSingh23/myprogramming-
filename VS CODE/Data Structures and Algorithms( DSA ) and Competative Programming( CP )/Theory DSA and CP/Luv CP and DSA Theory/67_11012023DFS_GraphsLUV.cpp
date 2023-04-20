


// Also See the copy notes 


//
//
//  DFS(Depth First search)  ==>   DFS(Depth First search)  ==>
//  DFS(Depth First search)  ==>   DFS(Depth First search)  ==>
//  DFS(Depth First search)  ==>   DFS(Depth First search)  ==>
//

// so in DFS , first we start at the root node of the tree then 
// from root node we will go to any child of that root node and 
// mark visited then again go to any child of that child and mark 
// visited and kepp going in depth untill we go to end then
// again we go to any other child of root node and mark visited
// and follow the same above process and same for other child 
// of root node also
//
//
// here we mark visited otherwise we stuck in a infinite loop
//
// in tree we can avoid Visited Array but in graph we need
// the Visited Array
// here we store all the visited node in a array called 
// Visited Array and Visited Array size is same as no of node
//
// Also See the copy notes 
//

 



//
// See detailed explaination of time complexity at the end  ==>
//
//
// // Time Complexity == O(V+E)   v is vertex and E is edges
// // Time Complexity == O(V+E)   v is vertex and E is edges
//
//







//
// /// // // Take input in adjacency list  ==>
// /// // // Take input in adjacency list  ==>
//
// input of graphs without weights==>

// here first line is vertices(n) and edges(m)
// then m lines are connected vertices
// 

// 6 9   
// 1 3
// 1 5
// 3 5
// 3 4
// 3 6
// 3 2
// 2 6
// 4 6
// 5 6


#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

// /// // // Take input in adjacency list  ==>
// /// // // Take input in adjacency list  ==>
//
vector<int> g[N] ;
bool visited[N] ;


// // //  here we write dfs function using two ways  ===>
// // //  here we write dfs function using two ways  ===>
// // //  here we write dfs function using two ways  ===>


// // // // // 1st of writing the dfs function  ===> recommended
// // // // // 1st of writing the dfs function  ===> recommended
//
void dfs(int vertex)
{
    // Take action on vertex after entering the vertex  ==>
    // Take action on vertex after entering the vertex  ==>
    //
    visited[vertex] = true;
    cout<<vertex<<endl;

    for(int child : g[vertex])
    {
        cout<<"Parent "<<vertex<<", Child "<<child<<endl;

        // Take action on child befor entering the child node  ==>
        // Take action on child befor entering the child node  ==>
        //
        if(visited[child]) continue; //  if(visited[child] == true) continue; 


        dfs(child);  // here we take action on child


        // Take action on child after existing the child node  ==>
        // Take action on child after existing the child node  ==>
        
        
    }

    // Take action on vertex befor existing the vertex  ==>
    // Take action on vertex befor existing the vertex  ==>

}



// // // // // 2nd of writing the dfs function  ===>
// // // // // 2nd of writing the dfs function  ===> 
//
// void dfs(int vertex)
// {
//     // Take action on vertex after entering the vertex  ==>
//     // Take action on vertex after entering the vertex  ==>
//     //
//     if(visited[vertex]) return; //  if(visited[vertex] == true) return ; 
//     visited[vertex] = true;
//     cout<<vertex<<endl;


//     for(int child : g[vertex])
//     {
//         cout<<"Parent "<<vertex<<", Child "<<child<<endl;

//         // Take action on child befor entering the child node  ==>
//         // Take action on child befor entering the child node  ==>
//         //
        


//         dfs(child);  // here we take action on child


//         // Take action on child after existing the child node  ==>
//         // Take action on child after existing the child node  ==>
        
        
//     }

//     // Take action on vertex befor existing the vertex  ==>
//     // Take action on vertex befor existing the vertex  ==>

// }






int main()
{
    int n ,m;
    cin>>n>>m;

    // /// // // Take input in adjacency list  ==>
    // /// // // Take input in adjacency list  ==>
    //
    for(int i =0; i<m; i++)
    {
        int v1 , v2 ;
        cin>>v1>>v2;

        g[v1].push_back(v2) ;
        g[v2].push_back(v1) ;
    }

    dfs(1) ;

}



//
//
//  Time Complexity  ====>      Time Complexity  ====>  
//  Time Complexity  ====>      Time Complexity  ====>  
//  Time Complexity  ====>      Time Complexity  ====>  
//  Time Complexity  ====>      Time Complexity  ====>  
// 
//
//
// here dfs function will call no of vertices times and in each call
// of there will run a for loop of size of no of edges
// so in each call of every vertices for loop will run no of edges
// times or no of node connected to that node times
// so if we add all for loop then that will be 2 times of the
// edges in graph
// means total runs of all for loop in each call is equal to
// the 2 times of the edges in graph
//
// all for loop time complexity in each call == O(2*E) == O(E)
// and because dfs function call no of vertices times then == O(V)
//
// so Total Time Complexity == O(V+E)   v is vertex and E is edges
//
// // Time Complexity == O(V+E)   v is vertex and E is edges
// // Time Complexity == O(V+E)   v is vertex and E is edges
//
//



















