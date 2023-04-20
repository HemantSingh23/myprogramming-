






//
//
//  // MultiSource BFS ==>
//
//
// here multiple sources are given and from all
// sources we have go to the same destination node
// then we have to find the shortest path from
// all the sources to destination node
// or we have to tell from which source we reach the
// destination first
//
//




//
//
// / // Try one time more ====>  give wrong answer 0 in each test case
//
//
// don't know why but it is giving wrong answer in my code
// mu code output is  0  in each test case in index-0 based array
//
//
//
//// // /  Also see the index-1 based array solution at the last
// // // still output is 0 in each test case 
//
//
//







/* 
// // Question ==>

// Question Link =>
https://www.codechef.com/SNCKPB17/problems/SNSOCIAL/


// Video Link =>
https://www.youtube.com/watch?v=xvi8PqRrAyU&list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&index=95


*/






//
//
// Try one time because    ======>
// Try one time because    ======>
// Try one time because    ======>
// Try one time because    ======>


//
//
//
// don't know why but it is giving wrong answer in my code
// mu code output is 0 in each test case in index-0 based array
//



//
// // /  Also see the index-1 based array solution at the last
// // // still output is 0 in each test case 
//






#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
const int INF = 1e9+10;   // INF == infinity

int val[N][N];
int vis[N][N];
int lev[N][N];

int n , m;

vector<pair<int,int>> Movements =
{
    {0,1}, {0,-1}, {1,0}, {-1,0},
    {1,1}, {1,-1}, {-1,1}, {-1,-1}
};

bool isvalid(int i , int j)
{
    return i>=0 && j>=0 && i<n && j<m ;
}

int bfs()
{
    
    int mx =0;  // firsst we find the max value of the wealth
    // snakes or find the max value of m*n grid 
    for(int i =0; i<n; i++)
    {
        for(int j =0; j<m; j++)
        {
            mx = max(mx , val[i][j]) ;
        } 
    }

    queue<pair<int,int> > q ;

    for(int i =0; i<n; i++)
    {
       for(int j =0; j<m; j++)
        {
            // which value is equal to mx value then that will be
            // multiple soures so we push multiple soures in queue
            if(mx == val[i][j]) ;
            {
                q.push({i,j}) ;
                lev[i][j] = 0 ;
                vis[i][j] = 1 ;
            }
        } 
    }

    int ans = 0;
    while( !q.empty() )
    {
        auto v = q.front();
        int v_x = v.first;
        int v_y = v.second;
        q.pop() ;

        for(auto movement : Movements)
        {
            int childX = movement.first + v_x ;   
            int childY = movement.second + v_y ;  

            if(!isvalid(childX, childY)) continue ;
            if(vis[childX][childY])  continue ;

            q.push({childX, childY}) ; 
            lev[childX][childY] = lev[v_x][v_y] + 1 ;                                                           
            vis[childX][childY] =  1 ;  
            cout<< lev[childX][childY]<<endl;

            ans = max(ans,lev[childX][childY])  ;                                                                
        }
    }      
                                                                                                                                                                                                                                        
    return ans;


}                                                                                                   

void reset()  // for resetting thr value of visited array and 
{             // level array for each test case 
    for(int i =0; i<n; i++)
    {
        for(int j =0; j<m; j++)
        {
            vis[i][j] = 0;
            lev[i][j] = INF ;
        }
    }
}

int main()
{
    int t;  cin>>t;
    while(t--)
    {
        cin>>n>>m;
        reset();
        for(int i =0; i<n; i++)
        {
            for(int j =0; j<m; j++)
            {
                cin>>val[i][j] ;
            }
        }
        cout<<bfs()<<endl;
    }

    

}





/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// // //   take array as index-1     index-1     index-1 
// // //   take array as index-1     index-1     index-1 
// // //   take array as index-1     index-1     index-1 
// // //   take array as index-1     index-1     index-1 
// // //   take array as index-1     index-1     index-1 
// // //   take array as index-1     index-1     index-1 
// // //   take array as index-1     index-1     index-1 
// // //   take array as index-1     index-1     index-1 


// // //    still give the output 0 in each test case 
// // //  don't know why but output 0 in each test case 





// #include<bits/stdc++.h>
// using namespace std;

// const int N = 1e3+10;
// const int INF = 1e9+10;   // INF == infinity

// int val[N][N];
// int vis[N][N];
// int lev[N][N];

// int n , m;

// vector<pair<int,int>> Movements =
// {
//     {1,2}, {1,0}, {0,1}, {2,1},
//     {0,0}, {0,2}, {2,0}, {2,2}
// };

// bool isvalid(int i , int j)
// {
//     return i>=1 && j>=1 && i<=n && j<=m ;
// }

// int bfs()
// {
    
//     int mx =0;  // firsst we find the max value of the wealth
//     // snakes or find the max value of m*n grid 
//     for(int i =1; i<=n; i++)
//     {
//         for(int j =1; j<=m; j++)
//         {
//             mx = max(mx , val[i][j]) ;
//         } 
//     }


//     queue<pair<int,int> > q ;

//     for(int i =1; i<=n; i++)
//     {
//        for(int j =1; j<=m; j++)
//         {
//             // which value is equal to mx value then that will be
//             // multiple soures so we push multiple soures in queue
//             if(mx == val[i][j]) ;
//             {
//                 q.push({i,j}) ;
//                 lev[i][j] = 0 ;
//                 vis[i][j] = 1 ;
//             }
//         } 
//     }

//     int ans = 0;
//     while( !q.empty() )
//     {
//         auto v = q.front();
//         int v_x = v.first;
//         int v_y = v.second;
//         q.pop() ;

//         for(auto movement : Movements)
//         {
//             int childX = movement.first + v_x ;   
//             int childY = movement.second + v_y ;  

//             if(!isvalid(childX, childY))
//             {
//                 // cout<<childX<<"   XY   "<<childY<<endl;
//                 continue ;

//             }
//             // cout<<"Hello"<<endl;
//             if(vis[childX][childY])  continue ;
//             cout<<"val  "<< lev[childX][childY]<<endl;

//             q.push({childX, childY}) ; 
//             lev[childX][childY] = lev[v_x][v_y] + 1 ;                                                           
//             vis[childX][childY] =  1 ;  

//             ans = max(ans,lev[childX][childY])  ;                                                                
//         }
//     }      
//     // cout<<ans<<"   ans"<<endl;                                                                                                                                                                                                                        
//     return ans;


// }                                                                                                   
                                                                                       
// void reset()  // for resetting thr value of visited array and 
// {             // level array for each test case 
//     for(int i =1; i<=n; i++)
//     {
//         for(int j =1; j<=m; j++)
//         {
//             vis[i][j] = 0;
//             lev[i][j] = INF ;
//         }
//     }
// }

// int main()
// {
//     int t;  cin>>t;
//     while(t--)
//     {
//         cin>>n>>m;
//         reset();
//         for(int i =1; i<=n; i++)
//         {
//             for(int j =1; j<=m; j++)
//             {
//                 cin>>val[i][j] ;
//             }
//         }
//         cout<<bfs()<<endl;


//     }

    

// }





































