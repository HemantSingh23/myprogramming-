




// Leetcode Question ==>

/* 

Question Link =>
https://leetcode.com/problems/flood-fill/


Video Link =>
https://www.youtube.com/watch?v=hVFFWpSRY4o&list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&index=86


*/




#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
 

void dfs(int i, int j, int initialColor ,int newColor , vector<vector<int>>& image )
{
    int m = image.size() ;
    int n = image[0].size()  ;  

    if( i<0 || j< 0 ) return ;
    if( i>=m || j>=n ) return ;
    if(image[i][j] != initialColor) return ;  

    image[i][j] = newColor ;  
        
    dfs(i-1 , j , initialColor , newColor , image ) ;
    dfs(i+1 , j , initialColor , newColor , image ) ;
    dfs(i , j-1 , initialColor , newColor , image ) ;
    dfs(i , j+1 , initialColor , newColor , image ) ;
    
}






vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor)
{
    int initialColor = image[sr][sc];

    if(initialColor != newColor)
    dfs(sr , sc , initialColor , newColor , image ) ;

    return image;
}


int main()
{
    



}

 



















