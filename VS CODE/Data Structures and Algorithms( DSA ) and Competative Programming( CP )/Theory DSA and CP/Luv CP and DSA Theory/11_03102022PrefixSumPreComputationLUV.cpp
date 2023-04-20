

// /////////////   Prefix Sum  In 1-D array  /////////////////////
/* 
Given array a of N integers. Given Q quries and in each query given L and R .
print sum of arrya elements from index L and R ( L , R included)

Constraints  - 
1<= N <= 10^5
1<= a[i] <= 10^9
1<= Q <= 10^5
1<= L , R <= N
*/

#include<bits/stdc++.h>
using namespace std;

// // 1st approach 
// // const int N = 1e5+10;
// // int a[N] ;


// 2nd approach
// const int N = 1e5+10;
// int a[N] ;
// int pf[N];


int main() 
{
    // int gc = __gcd(2 , 8);

// // 1st approach 
//     // int n;
//     // cin>>n;
//     // for(int i=1; i<=n; i++)
//     // {
//     //     cin>>a[i];
//     // }
//     // int q;
//     // cin>>q;
//     // while(q--)
//     // {
//     //     int l ,r;
//     //     cin>>l>>r;
//     //     long long sum = 0;
//     //     for(int i = l; i <= r; i++)
//     //     {
//     //         sum += a[i];
//     //     }
//     //     cout << sum << endl;
//     // }
//     // Time complexity = 
//     // o(N) + o( q*N) = 10^5 * 10^5  = 10^10
// // this code will not run in 1 second so this approach will not work




// // 2nd approach

    // int n;
    // cin>>n;
   
    // for(int i=0; i<n; i++)
    // {
    //     cin>>a[i];
    //     pf[i] = pf[i-1] + a[i] ;
    //     cout<<pf[i]<<endl;
    // }

//     int q;
//     cin>>q;
//     while(q--)
//     {

//         int l ,r;
//         cin>>l>>r;
//         long long int sum = 0;

//         sum = pf[r] -pf[l-1] ;
//         cout<<sum<<endl;
//     }

//     // Time complexity = 
//     // o(N) + o( q ) = 10^5 + 10^5  = 2*10^5

}





///////////////   Prefix Sum  In 2-D array  /////////////////////
///////////////   Prefix Sum  In 2-D array  /////////////////////
///////////////   Prefix Sum  In 2-D array  /////////////////////
///////////////   Prefix Sum  In 2-D array  /////////////////////

/*
Given 2d array a of N*N integers. Given Q quries and in each query
p , q , r and s . Print sum of square represented by (p,q) as top left
point and (r,s) as top bottom right point 

Constraints  - 
1<= N <= 10^5
1<= a[i] <= 10^9
1<= Q <= 10^5
1<= L , R <= N
*/

// #include<bits/stdc++.h>
// using namespace std;

// 1st approach 
// const int N = 1e3+10;
// int a[N][N] ;


// 2nd approach
// const int N = 1e3+10;
// int a[N][N] ;
// long long int pf[N][N];


// int main() 
// {

// 1st approach 
    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=n; j++)
    //     {
    //         cin>>a[i][j];
    //     }
    // }

    // int q;
    // cin>>q;
    // while(q--)
    // {
        // int p ,q, r, s;
        // cin>>p>>q>>r>>s;
        // long long sum = 0;
        // for(int i = p; i <= r; i++)
        // {
        //     for(int j=q; j<=s; j++)
        //     {
        //         sum += a[i][j];
        //     }
        // }
        // cout << sum << endl;
    // }
    // Time complexity = 
    // o(N*N) + o( q*N*N) =10^3*10^3 + 10^5*10^3*10^3  = 10^11
// // this code will not run in 1 second so this approach will not work




// 2nd approach 

    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=n; j++)
    //     {
    //         cin>>a[i][j];
    //         pf[i][j] =  a[i][j] + pf[i-1][j] + pf[j][i-1] - pf[i-1][j-1] ;
    //         cout<<pf[i][j]<<endl;
    //     }
    // }

    // int q;
    // cin>>q;
    // while(q--)
    // {
        // int p ,q, r, s;
        // cin>>p>>q>>r>>s;
        // long long sum = 0;

        // sum = pf[r][s]- pf[p-1][s]- pf[r][q-1] + pf[p-1][q-1] ;
       
        // cout << sum << endl;
    // }

    // Time complexity = 
    // o(N*N) + o( q ) = 10^6 + 10^5  = 10^6

// }