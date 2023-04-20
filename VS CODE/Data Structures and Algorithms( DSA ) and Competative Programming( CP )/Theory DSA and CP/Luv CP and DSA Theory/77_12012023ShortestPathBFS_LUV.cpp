


//
//
//
//  // Shortest Path Using BFS ==>
//
//
// 




/* 

// // Spoj Question==>

// Question Link =>
https://www.spoj.com/problems/NAKANJ/



// // Video Link =>
https://www.youtube.com/watch?v=WOV3LYhPews&list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&index=94


*/






#include<bits/stdc++.h>
using namespace std;


const int N = 1e5+10;
const int INF = 1e9+10;

int vis[8][8]; // visited
int lev[8][8]; // level

int getX(string s)
{
    return s[0] - 'a' ;
}
int getY(string s)
{
    return s[1] - '1' ;
}


bool isValid(int x, int y)
{
    return x>=0 && y>= 0 && x<8 && y<8  ;   
}

vector<pair<int, int>> Movements ={
    {-1,2}  , {1,2}  , // movement to upward in left, Right
    {-1,-2} , {1,-2} ,
    {2,-1}  , {2,1}  ,
    {-2,-1} , {-2,1}
} ;


int bfs(string source , string dest)
{
    int sourceX  = getX(source) ;                                                                                                                                     
    int sourceY  = getY(source) ;                                                                                                                                     
    int destX    = getX(dest) ;                                                                                                                                     
    int destY    = getY(dest) ;       

    queue<pair<int,int>> q ;
    q.push({sourceX, sourceY}) ;
    vis[sourceX][sourceY] =1 ;
    lev[sourceX][sourceY] =0 ; // it is for more optimization   
 
    while(!q.empty())
    {
        pair<int,int> v = q.front();  // v = current vertex

        int x = v.first , y = v.second ;
        q.pop();

        for(auto movement : Movements )
        {
            int childX = movement.first + x ;   
            int childY = movement.second + y ;   
            if(!isValid(childX, childY)) continue ;
            if(!vis[childX][childY])
            {                                 
                q.push({childX, childY}) ; 
                lev[childX][childY] = lev[x][y] + 1 ;                                                           
                vis[childX][childY] =  1 ;                                                           
            }                                                                     
        }    
        if(lev[destX][destY] != INF)  break;   
        // it is for more optimization                                                            
    }      

    return lev[destX][destY]  ;                                                                                                                              
}                                                                                          
  

void reset()   // for resetting thr value of visited array and 
{              // level array for each test case 
    for(int i =0; i<8; i++)
    {
        for(int j =0; j<8; j++)
        {
            // lev[i][j] = 0 ;
            lev[i][j] = INF ; // this and above is same
            // but it is more optimized
            
            vis[i][j] = 0;
        }
    }
}

int main()
{
    int n ;   cin>>n;
    while(n--)
    {
        reset();        
        string s1, s2 ;
        cin>>s1>>s2;
        cout<<bfs(s1, s2)<<endl; ;        
    }


}





























