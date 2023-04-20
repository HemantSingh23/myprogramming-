



// // Prime Number ==>
//
// A number n is prime if has only two divisors 1 and n .
//
//



#include<bits/stdc++.h>
using namespace std ;

int main()
{

// Method 1 : Basic Method to check prime number

    // int n ; cin>>n;
    // bool isprime = true ;
    // for(int i = 2; i<n; ++i)
    // {
    //     if(n%i ==0)
    //     {
    //         isprime = false ;
    //         break;
    //     }
    // }
    // cout<<isprime<<endl;

    // // Time Complexity == O(N)



// Method 2 : Better Method to check prime number

    // int n ; cin>>n;

    // if(n==1) 
    // {
    //     cout<<0<<endl;
    //     return 0;
    // }

    // bool isprime = true ;

    // // for(int i = 2; i<sqrt(n); ++i)
    // for(int i = 2; i*i<=n; ++i)
    // {
    //     if(n%i ==0)
    //     {
    //         isprime = false ;
    //         break;
    //     }
    // }
    // cout<<isprime<<endl;

    // // Time Complexity == O(sqrt(N))

//
//
// find all prime factor of a number
//
    // // Method 1 ==>

    // int n ; cin>>n;
    // vector<int> primeFactor ;
    // for(int i = 2; i<=n; ++i)
    // {
    //     while(n%i ==0)
    //     {
    //         primeFactor.push_back(i);
    //         n /= i ;
    //     }
    // }
    // for(int prime : primeFactor)
    // {
    //     cout<<prime<<endl;
    // }

    // // Time Complexity == O(N)


    // // Method 2 ==>

    int n ; cin>>n;
    vector<int> primeFactor ;
    for(int i = 2; i*i<=n; ++i)
    {
        while(n%i ==0)
        {
            primeFactor.push_back(i);
            n /= i ;
        }
    }
    if(n>1)  primeFactor.push_back(n);

    for(int prime : primeFactor)
    {
        cout<<prime<<endl;
    }

    // // Time Complexity == O(sqrt(N))

}












































