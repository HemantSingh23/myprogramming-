

//
// Also see in the copy 
//
//
//
//  //  Disjoint Set Union ==>
//
//
// it has three function 
//
// 1. make = add new node(independent node) in current sets
// 2. find = give parent of the  group of node (independent node gives its own node)
// 3. union =  push a , b in the one group means it merge two groups    
//            in a single group(which is merge of group of a and group of b)
//            group will be in the tree form 
//
//
//
// its complexity is almost constant time complexity
//
//  Time Complexity =  O(alpha(n))  or O( α(n))  
//
// alpha(n) or α(n)  is inverse Ackermann function α(n) 
//
//
//

 






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

    // // //  without path compression  
    // return  find(parent[v]) ;

    // // //  with path compression  
    return  parent[v] = find(parent[v]) ;
}


//
//
// // // // we do union using two methods   ====>    
// // // // we do union using two methods   ====>    
// // // // we do union using two methods   ====>    
//
// 1st method is using size (it will discussed here)
//
// 2nd method is using Rank (using depth) => (it will not discussed here)
//
//


// //  1st method ==>   union using  size  ==> 
// //  1st method ==>   union using  size  ==> 
// 
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
    int n , k ;
    cin>>n>>k;
    for(int i =1; i<=n; i++)
    {
        make(i) ;
    }
    while(k--)
    {
        int u , v;
        cin>>u>>v;
        Union(u,v) ;
    }

    int connected_ct = 0;
    for(int i =1; i<=n; i++)
    {
        if(find(i)==i) connected_ct ;
    }



}