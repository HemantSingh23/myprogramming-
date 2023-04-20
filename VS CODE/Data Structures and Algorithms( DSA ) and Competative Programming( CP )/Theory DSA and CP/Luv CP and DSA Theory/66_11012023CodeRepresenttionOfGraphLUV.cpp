

//
//
// // // Also see in the copy notes for more information
//
//

// // Code Representation of Graphs ==>
//
// Two Methods=>
//
// 1. Adjacency Matrix
// 2. Adjacency List
//




// // //   1. Adjacency Matrix  ===>
// // //   1. Adjacency Matrix  ===>
// // //   1. Adjacency Matrix  ===>
// // //   1. Adjacency Matrix  ===>
//
// here we make the a matrix of v * v  here v is no of vertices
// and store the value of connected vertices in matrix
//
// if  n is 10^6 then we can't make this size matrix because
// in array we can't allocate memory more in continuous 
// for the matrix because we can make 2D-array of size maximum
// 10^4 * 10^4 not more than this .
//
// in Adjacency Matrix , Space Complexity is also too high
// Space Complexity == O(n^2)
//
//
//
// That's why we use  Adjacency List
//





// // //   2. Adjacency List  ===>
// // //   2. Adjacency List  ===>
// // //   2. Adjacency List  ===>
// // //   2. Adjacency List  ===>
//
// here we store in the list means we store the list , equal to the
// no of vertices means if 3 vertices then we store 3 list
// list 0 , list 1 ,list 2    and in these 3 list we store the
// child or neighbour or nodes which is connected to this node
// means in list 0 we store all nodes which is connected  to 0th node
// same as in list 1 we store all nodes which is connected to 1th node
// and in list 2 we store all nodes which is connected  to 2th node
//
// 
// here space complexity is not v * v because here we store the
// list and no of list is equal to no of vertices so V space for
// list and in each list we store connected node which is connected
// that node means in each list we store the edges so 
// although in this we store the edges for every vertices so 
// we store the total edges equal to the double the no of edges 
// in graph because we store for every vertices so if in the list1 
// we store node1 to node2  edge  butin list 2 we also store 
// node2 to node1 edge again that' why we store the double the no of
// edges in grapgh
// so   Space Complexity == ( V + 2*E )
// here we can discard 2 then -
//
//  total Space Complexity == ( V + E )
//
//
//
// if no of vertices is v then total max edges will be vC2 which is
// roughly equal to v^2 means total edges in v vertices graph is v^2
// means E = v^2  and this much of edges we can't store 
//
// that's why in question  E never be more than 1e7 or 1e8
//
//





// // now see in the copy notes for more information
// 





// For undirected graphs


// input of graphs without weights==>
//
// here first line is no of vertices(n) and no of edges(m)
// then m lines are connected vertices
// 
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



// input of graphs with weights==>

// here first line is vertices(n) and edges(m)
// then m lines are connected vertices and weight
// 
//
// 6 9 
// 1 3 4
// 1 5 3
// 3 5 2
// 3 4 7
// 3 6 8
// 3 2 9
// 2 6 1
// 4 6 2
// 5 6 3



#include<bits/stdc++.h>
using namespace std;

const int N = 1e3 ;

// input of Adjacency Matrix  ==>  we take the matrix as 2D-Array
// input of Adjacency Matrix  ==>  we take the matrix as 2D-Array
//
// int graph[N][N];




// input of Adjacency List ==>   input of Adjacency List ==>
// input of Adjacency List ==>   input of Adjacency List ==>
        
// input of graphs without weights =>
// vector<int> graph[N] ;

// input of graphs with weights  =>
vector<pair<int,int>> graph[N] ;
// here  graph[0] is the list 0 which store all edges or vertices 
// connected to 0th node same for other nodes
// 



int main() 
{

// 1. Adjacency Matrix
//
// input of Adjacency Matrix  ===> we take the matrix as 2D-Array
    // int n , m; // n is vertices and m is edges
    // cin>>n>>m;
    // for(int i=0; i<m; i++)
    // {
    //     // input of graphs without weights
    //     // int v1, v2;
    //     // cin>>v1>>v2;
    //     // graph[v1][v2] = 1;
    //     // graph[v2][v1] = 1; // because undirected graphs
    //     // so if  i,j are connected then j,i also connected
    //     //
    //
    //     // input of graphs with weights 
    //     int v1, v2, wt;
    //     cin>>v1>>v2>>wt;
    //     graph[v1][v2] = wt;
    //     graph[v2][v1] = wt; // because undirected graphs
    //     // // so if  i,j are connected the j,i also connected
    // }

    //
    // Space Complexity is too high
    // Space Complexity == O(n^2)
    //  n < 10^4  and n != 10^5
    //
    // if  n is 10^6 then we can't make this size matrix because
    // in array we can't allocate memory more in continuous 
    // for the matrix
    // 
    // That's why we use  Adjacency List



//
// 2. Adjacency List   ===>
//
// input of Adjacency List
//
    int n , m; // n is vertices and m is edges
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        // // input of graphs without weights
        // int v1, v2;
        // cin>>v1>>v2;
        // graph[v1].push_back(v2);
        // graph[v2].push_back(v1);// because undirected graphs
        // // so if  i,j are connected the j,i also connected

        // input of graphs with weights
        int v1, v2,wt;
        cin>>v1>>v2>>wt;
        graph[v1].push_back({v2 , wt});
        graph[v2].push_back({v1 , wt});
    }



// Now  Advantage and Disadvantage of Adjacency Matrix and Adjacency List   ===>
// Now  Advantage and Disadvantage of Adjacency Matrix and Adjacency List   ===>
// Now  Advantage and Disadvantage of Adjacency Matrix and Adjacency List   ===>


// Question   ===> 
// if it is aksed to us that whether 
// i,j are connnected or not ?  or what is weight of i,j 
// then this question's  answer is below
//


// // // Advantage of Adjacency Matrix  ===>
// // // Advantage of Adjacency Matrix  ===>
//
// Adjacency matrix can give above question's answer in O(1) ==>
    //
    // if(graph[j][j] == 1)
    // {
    //     and here adjacency matrix can give answer in O(1)
    // }
    
    // for weight in adjacency matrix ==> 
    //
    // graph[j][j] = wt  // give the weight



// // // Disadvantage of Adjacency List  ===>
// // // Disadvantage of Adjacency List  ===>
//
// Adjacency List give the same above question's answer in O(n) ==>
//

    // for(int child  : graph[i])
    // {
    //     if(child == j)
    //     {
    //         and here adjacency list can give answer in O(n)
    //     }
    // }

    // for weight in adjacency list 
    // for(pair<int,int> child  : graph[i])
    // {
    //     if( child.first == j ) // here 1st we find the jth node then we tell the weight
    //     {
    //          child.second = wt;    
    //     }
    // }

     
}


































