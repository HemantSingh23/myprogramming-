


//
//
/* 
// //  Hackerearth Question ==>   


// Question Link =>
https://www.hackerearth.com/challenges/competitive/code-monk-disjoint-set-union/problems/

// 1. City and Flood =>
https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/city-and-flood-1/


// 2. city and Campers =>
https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/city-and-campers/



// Video Link =>
https://www.youtube.com/watch?v=L8SuKrpNc2Q&list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&index=100



*/




//
//
//   1. City and Flood =>
//   https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/city-and-flood-1/
//
//
//


// #include<bits/stdc++.h>
// using namespace std;

// const int N = 1e5+10;
// const int INF = 1e9+10;   // INF == infinity

// int parent[N] ;
// int Size[N] ;

// void make(int v)
// {
//     parent[v] = v;
//     Size[v] = 1;
// }

// int find(int v)
// {
//     if( v == parent[v] ) return v ;
//     return  parent[v] = find(parent[v]) ;
// }

// void Union (int a , int b) // union is reserved but Union is not
// {
//     a = find(a) ;
//     b = find(b) ;
//     if(a != b)
//     {
//         if(Size[a]<Size[b])  swap(a,b) ;
//         parent[b] = a ;
//         Size[a] += Size[b] ;
//     }
// }


// int main()
// {
//     int n , q ;
//     cin>>n>>q;
//     for(int i =1; i<=n; i++)
//     {
//         make(i) ;
//     }
//     while(q--)
//     {
//         int u , v;
//         cin>>u>>v;
//         Union(u,v) ;
//     }

//     int connected_ct = 0;
//     for(int i =1; i<=n; i++)
//     {
//         if(find(i)==i) connected_ct ++;
//     }


//     cout<<connected_ct<<endl;
// }



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//
//
//   2. city and Campers =>
//  https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/city-and-campers/
//
//
//


#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
const int INF = 1e9+10;   // INF == infinity

int parent[N] ;
int Size[N] ;
multiset<int> sizes ;

void make(int v)
{
    parent[v] = v;
    Size[v] = 1;
    sizes.insert(1) ;
}


int find(int v)
{
    if( v == parent[v] ) return v ;
    return  parent[v] = find(parent[v]) ;
}

void merge(int a , int b)
{
    // sizes.erase(Size[a]) ; it will erase all Size[a] but we want to
    // earse only one so below
    sizes.erase(sizes.find(Size[a])) ;
    sizes.erase(sizes.find(Size[b])) ;

    sizes.insert(Size[a] + Size[b]) ;
}

void Union (int a , int b) // union is reserved but Union is not
{
    a = find(a) ;
    b = find(b) ;
    if(a != b)
    {
        if(Size[a]<Size[b])  swap(a,b) ;
        parent[b] = a ;
        merge(a,b) ;
        Size[a] += Size[b] ;
    }
}


int main()
{
    int n , q ;
    cin>>n>>q;
    for(int i =1; i<=n; i++)
    {
        make(i) ;
    }
    while(q--)
    {
        int u , v;
        cin>>u>>v;
        Union(u,v) ;
        if(sizes.size() ==1) cout<<0<<endl;
        else
        {
            int mini = *(sizes.begin());
            int max = *(--sizes.end());
            cout<<max-mini<<endl;
        }
    }


}



















