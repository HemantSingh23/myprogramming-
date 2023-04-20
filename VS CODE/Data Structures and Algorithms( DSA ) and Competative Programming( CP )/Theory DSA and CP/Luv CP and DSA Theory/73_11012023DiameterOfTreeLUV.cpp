

//
// for brute force approach
// see in the last and also see in copy notes
// at the bottom (extreme last)
//
// Time Complexity == O(N^2)
// 


//
//
// // Diameter of Tree ==>
//
// Diameter of Tree  is the maximum possible path 
// length between any two vertices in the Tree
//
// means Diameter of Tree  is the number of maximum
// edges between any two vertices in the Tree 
// 
//  


//
//
// // //  Time Complexity == O(N)  ===>
// // //  Time Complexity == O(N)  ===>
//
//
// in the optimized code of finding the Diameter of Tree
// fist we find the maximum depth(node) from any node then
// with that node(maximum depth) we again find the max depth
// (node) then the max depth node which we find 2nd time
// will be the answer
//
// for ex. in the question below first we find the max depth node
// from the node 1 then max depth node will be node 11 or node 12
// because node 11 or node 12 has the maximum depth from node 1
// here node 11 or node 12 will be one end of the diameter
// 2nd end of the diameter , we find below
//
// then from any node ,  node 11 or node 12 we again find the max 
// depth node and max depth(diameter) and then we will get the answer 
// if we find from the node 11 then max depth node wil be 12 and max
// depth will be 8(diameter)  or or or if we find from the node 12 then 
// max depth node wil be 11 and max depth will be 8(diameter)
// 
// 



//
//
// // //  Time Complexity == O(N)  ===>
// // //  Time Complexity == O(N)  ===>
//
//

/* 
//  // Question ==>
//
// Given Q queries, Q<= 10^5. In each query given v.
// Print subtree sum of v and Number of even number
// in subtree of v


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
//
//
// // //  Time Complexity == O(N)  ===>
// // //  Time Complexity == O(N)  ===>
//
//


#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int> g[N] ;
int depth[N] ;


void dfs(int vertex , int parent =0 )
{
    for(int child : g[vertex])
    {
        if(child == parent )  continue;

        depth[child] = depth[vertex] + 1 ;
        dfs(child, vertex) ;
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

    // // // firts we find the max depth and max depth node from
    // // // node 1
    dfs(1) ;

    int maxdepth = -1; // it will give the max depth from node 1
    int maxdepthnode = -1; // it will give max depth node from node 1
    for(int i=1; i<=n; i++)
    {
        if(maxdepth<depth[i])
        {
            maxdepth = depth[i]; 
            maxdepthnode = i;
        }
        depth[i] = 0; // because in below we again find the max depth so
        //to not use another array or not use another for loop to make
        //all the value of each index zero, so here we use depth[i] = 0;
    }


    dfs(maxdepthnode); // here we again find the max depth(diameter)   
    // from node (which is max depth from node 1 which we find above )
    // // here we can also find the max depth node also or the 
    // // 2nd end of the diameter
    maxdepth = -1;
    for(int i=1; i<=n; i++)
    {
        if(maxdepth<depth[i])
        {
            maxdepth = depth[i];
        }
    }

    cout<<"Diameter "<<maxdepth<<endl;
    


}





//  // for brute force approach ==>

//
// in this we calculate maximum depth from each
// node means we calculate maximum depth for root
// node 1 then for root node 2 then for root node 3
// then for root node 4...... then for root node 13
// and then at last take the max of all maximum
// depth of each node
//
// so one loop of all node which is O(N)
// and one loop of finding maximum depth
// which is dfs(i) where i is any node it 
// is O(V+E)  nearly O(N)
//
// Time Complexity == O(N^2)
//
//  root node   maximum depth   maximum depth node
//
//      1            5             11 or 12
//      2            5             11      
//      3            5             12                   
//      4            6             12                  
//      5            6             11                 
//      6            7             11                  
//      7            7             11                  
//      8            7             11                   
//      9            7             12                   
//      10           7             12                   
//      11           8             12                   
//      12           8             11                   
//      13           5             11 or 12     
//
//
//
//

//






















