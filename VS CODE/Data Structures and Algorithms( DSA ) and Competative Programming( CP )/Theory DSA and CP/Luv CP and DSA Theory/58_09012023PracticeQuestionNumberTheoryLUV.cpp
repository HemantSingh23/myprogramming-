




// // // //   Hackerearth Question   ===>

/* 

Questioin link =>
https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/name-count/


video link =>

https://www.youtube.com/watch?v=Ljo4tWiuZL0&list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&index=75

*/

// 
//
// In question k alphabets and N password size k > N
//
// Answer => we have to calculate
// selecting N characters from k is = N! * kCN
// 
// N! * kCN = N! * [k! / {(k-N)! * N!}]
//



#include<bits/stdc++.h>
using namespace std;

const int M = 1e9+7;
const int N = 1e5+10;
int fact[N] ;


int binExpIter(int a , int b, int m)
{  
    int result = 1;
    while(b)
    {
        if(b&1)     result = (result * 1LL * a) %m ;
        a = (a * 1LL * a)%m;
        b>>=1;
    }
    return result;
}

int main()
{
    // first we precompute the factorial
    fact[0] = 1;
    for(int i =1; i<N; i++)
    {
        fact[i] = (fact[i-1] * 1LL * i) % M ;
    }

    int t;  cin>>t;
    while(t--)
    {
        int n , k ;
        cin>>n>>k;
    

        // here we have to calculate the below =>
        // N! * kCN = N! * [k! / {(k-N)! * N!}]
        
        int ans = fact[n] ;  // here ans = N!
        ans = (ans * 1LL * fact[k]) % M ; // ans =  N! * k!

        // Now we calculate denominator which is given below
        // {(k-N)! * N!}
        int den =  (fact[k-n] * 1LL * fact[n]) % M ;

        ans = ans  * 1LL *  binExpIter(den , M-2 , M ) % M ;
        cout<<ans<<endl;

    }


}


















