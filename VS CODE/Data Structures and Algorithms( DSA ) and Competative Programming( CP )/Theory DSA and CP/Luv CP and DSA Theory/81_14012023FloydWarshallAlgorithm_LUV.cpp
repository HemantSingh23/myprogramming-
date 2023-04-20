


//
// Also read the copy notes 
//

//
//
//  //  Floyd Warshall Algorithm Algorithm ==>
//                                
//
// Also known as All pair Shortest Path Algorithms
// here multiple source and multiple destination are available
// and we find the shortest path 
//
// here we have to find the shortest path between any
// two given nodes 
//
//
// This algorithm also works for negative weight
// but this algorithm  does not work for negative weighted cycle
// means if the toral weight of cycle is negative then
// this algorithm did not work
// because it goes on loop and find shortest path  on each loop
//
//
//
// Distance Between node i and j with k nodes
//
// d[i][j] = d[i][k] + d[k][j]  
//
//
//
//  Time complexity == O(N^3)  
//
//


//  // Input ==>


//
//
// 6 9
// 1 2 1 
// 1 3 5
// 2 3 2
// 3 5 2
// 2 5 1
// 2 4 2
// 4 5 3
// 4 6 1
// 5 6 2
//
//






#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
const int INF = 1e9+10;   // INF == infinity

int dist[N][N] ;

int main()
{
    for(int i =0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(i==j) dist[i][j] =0;
            else dist[i][j] = INF ;
        }
    }

    int n , m ;
    cin>>n>>m;
    for(int i =0; i<N; i++)
    {
        int x , y, wt ;
        cin>>x>>y>>wt;
        dist[x][y] = wt ; 
    }

    for(int k =1 ; k<=n; k++)
    {
        for(int i =1 ; i<=n; i++)
        {
            for(int j =1 ; j<=n; j++)
            {
                if(dist[i][k]!= INF  && dist[k][j]!= INF )
                {
                    dist[i][j] = min(dist[i][j], dist[i][k], dist[j][k]) ;     
                }
            }
        }

    }


    for(int i =0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if( dist[i][j] == INF )
            {
                cout<<"I ";
            }
            else
            {
                cout<<dist[i][j]<<" ";
            }
        }
        cout<<endl;
    }


}




