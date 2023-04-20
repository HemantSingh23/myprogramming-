



//
// As we notice that in BFS the queue has only 2 levels
// node at a time menas in queue, only 2 levels node 
// can be possible
//



//
//
//
// // // // //   0-1  BFS   ==>      // // // // //  0-1 BFS   ==>
// // // // //   0-1  BFS   ==>      // // // // //  0-1 BFS   ==>
// // // // //   0-1  BFS   ==>      // // // // //  0-1 BFS   ==>
//
//
// in this we use dequeue data structure because we need to add 
// in front and also in the back
//
//
// Although these types of problem are solve using 
// Dijkastra Algorithm but this type of problem
// can also solve using 0-1 BFS
// here edges weights are not same but weights
// can be either 0 or 1 only.
//
// Edge weight means the distance of of node from 
// root node so here if any edge has 0 weight then
// we know in queue there is only two levels so
// edge weight 0   node is first level in queue
// and edge weight 1   node is second level in queue
//
// so in simple words if edge weight is 0 then we
// push this node in the front of the queue
// and if edge weight is 1 then we push this node 
// in the back of the queue
//
//


//
// Now here we use 0-1 BFS ==>
// Now here we use 0-1 BFS ==>
//



/* 
// // Question ==>

// Question Link =>
https://www.codechef.com/problems/REVERSE



// Video Link =>
https://www.youtube.com/watch?v=SQOQ99stCas&list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&index=94


*/




/* 

//
//
// Now here we use 0-1 BFS
// here we use deque
//
// directed graph in codechef question is given below
//    
// sample-1 input =>
//
// 7 7
// 1 2 
// 3 2
// 3 4
// 7 4
// 6 2
// 5 6
// 7 5
//
// in graphical form =>
//
//     5 ---> 6 ---> 2 <--- 1
//     ^             ^
//     |             |
//     7 ---> 4 <--- 3
// 
// 
//
// Output == 2
//
// 
// In the question we have to required to reach at
// node N from node 1 in minimum number of edges after
// reversing the edges
// so we need to find the shortest path between
// node 1 and node N(where N == 7) 
//
//
// Let all the edges given in question are weight 0 and
// To solve this question we place the edge in the
// reverse order of its respective position with edge
// weight 1 so graph look like below ->
//
//     5 <--- 6 <--- 2 ---> 1
//     |             |
//     ^             ^    // arrow towards below  to 3 and 7
//     7 <--- 4 ---> 3
// 
//
// now we combine both the graphs and between each node
// there are two edge of weight 0 and 1 in opposite
// direction 
// so when we go to 1 to 2 by edge weight 0 then
// 2 to 3 by edge weight 1 then 3 to 4 by edge weight 0
// then 4 to 7 by edge weight 1 and we reach node N==7
// 
// so total weight is 0+1+0+1 == 2 which is answer
//
//
// Now here we use 0-1 BFS
// here we use deque
//
//

*/



//    
// sample-1 input =>
//
// 7 7
// 1 2 
// 3 2
// 3 4
// 7 4
// 6 2
// 5 6
// 7 5
//





#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
const int INF = 1e5+10;   // INF == infinity

vector<pair<int,int> > g[N] ; // here 1st int is node and 2nd node is weight
vector<int> lev(N, INF);
int n , m;

int bfs()
{
    deque<int> q ;
    q.push_back(1) ;
    lev[1] =0 ;

    while( !q.empty() )
    {
        int current_v = q.front();
        q.pop_front() ;
        for(auto child : g[current_v] )
        {
            int child_v = child.first ;
            int wt = child.second ;

            // ( lev[current_v] + wt ) will new level of child node
            if( lev[current_v] + wt < lev[child_v] )
            {                                 
                lev[child_v] = lev[current_v] + wt ;  

                if(wt==1) q.push_back(child_v) ; 
                else q.push_front(child_v) ;                                                    
            }                                                                     
        }                                                                      
    }         
    return lev[n] ==INF ? -1 : lev[n] ;                                                                                 
}                                                                                                   
                                                                                       




int main()
{
    cin>>n>>m;
    for(int i =0; i<m; i++)
    {
        int x, y;
        cin>>x>>y;
        // here x and y are nodes which conect like  x ---> y
        // which is given

        if(x==y) continue ; // // when self loop 

        g[x].push_back({y,0});  // this is given in question
        // here vector g ,  1st int is node and 2nd node is weight
        // here x and y are nodes which conect like  x ---> y
        // which is given


        //  the below push back represents y ---> x   which we
        // push from our end  with weight 1
        g[y].push_back({x,1});   // this is not given in question
        // and we do it from ourself  with weight 1
    }

    cout<<bfs()<<endl;

    

}



























