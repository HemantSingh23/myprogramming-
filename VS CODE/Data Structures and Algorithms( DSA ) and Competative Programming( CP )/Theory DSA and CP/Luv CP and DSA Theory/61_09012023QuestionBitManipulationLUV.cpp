


// Hackerearth Question

/* 

Questioin link =>
https://www.hackerearth.com/problem/algorithm/monk-and-his-father-93b639f4/


video link =>
https://www.youtube.com/watch?v=0r2kXRQZ_lA&list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&index=79


*/



// let monk take monkey from god is x1
// 
// god     => x1
// father  => 2*x1
// god     => x2 then  2*x1 + x2
// father  => 2*( 2*x1 + x2) = 2^2 * x1  + 2*x2
// god     => x3 then  2*( 2^2 * x1  + 2*x2 ) + x3  
//                 ==  2^3 *x1  + 2^2 *x2 + x3
//
// on generalization means
// if monk go n days to god then money will be ->
//
// 2^n *x1  + 2^(n-1) *x2 +.......... + 2^2 * x(n-1) + 2 * xn
//
//
// money taken from gos is (x1 + x2 + x3 + ..... + x(n-1) + xn )
// this is what we want to  minimize
//
// and above expression look like binary number in power of 2
//
// ex. 101 = 2^2 * 1 + 2^1 * 0 + 2^0 * 1 
// 
// so if we take x1 x2 x3.... as  1 or 0 then it will automatically minimized
// otherwise if we take  x1 x2 x3.... as 2 ,3,4,5.. or any other thing
// then it will become very large  so it is better to take x1 x2 x3.... as
// 1 or 0 and we increase the days because it wouldn't matter
//
// 
//



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin>>t;
    while(t--)
    {
        long long x;    cin>>x;
        cout<<__builtin_popcountll(x)<<endl;
    }
     

}








