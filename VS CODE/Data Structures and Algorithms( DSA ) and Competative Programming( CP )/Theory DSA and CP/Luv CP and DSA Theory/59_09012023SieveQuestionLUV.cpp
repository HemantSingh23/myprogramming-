




// Hackerearth Question

/* 

Questioin link =>
https://www.hackerearth.com/problem/algorithm/monk-and-divisor-conundrum-56e0eb99/

video link =>
https://www.youtube.com/watch?v=xSfReASiKXo&list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&index=76

*/





#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 +10;
int hsh[N] ;
long long multiple_ct[N]; // it is a array of multiples of number
// it tells how many multiples of a number have in array
// including that number


int main()
{
    int n;  cin>>n;
    for(int i =0; i<n; i++)
    {
        int x;  cin>>x;
        hsh[x]++ ;
    }

    for(int i =1; i<N; i++)
    {
        for(int j =i; j<N; j += i)
        {
            multiple_ct[i] += hsh[j] ;
        }
    }

    int t; cin>>t;
    while(t--)
    {
        int p, q;
        cin>>p>>q;

        long long lcm = p * 1LL * q / __gcd(p,q) ;
        long long ans = multiple_ct[p] + multiple_ct[q] ;
        if(lcm<N) ans -= multiple_ct[lcm] ;

        cout<<ans<<endl;
    }
}










