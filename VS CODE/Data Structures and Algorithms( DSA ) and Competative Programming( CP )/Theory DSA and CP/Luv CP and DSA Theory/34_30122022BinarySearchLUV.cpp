


//  //  Binary Search    //  //  Binary Search    //  //  Binary Search    //  //  Binary Search    //  //  Binary Search
//  //  Binary Search    //  //  Binary Search    //  //  Binary Search    //  //  Binary Search    //  //  Binary Search




// // Binary search ==>
// Binary search is apply on the monotonic function(these function maintain a given order)
// here given order means increasing (1,4,6,7,9....) or decreasing (8,7,6,...) or any other order
//
// We also apply binary search for the predicate function(which return true or false)
// predicate functoin always return True or False. example give below
// ex1.  T T T T T T F F F F F F F     => Monotonic function
// ex2.  T T T T T T T T T             => Monotonic function
// ex3.  T T T T F F F F F F F         => Monotonic function
// ex4.  F F F F F F F F T T T T T     => Monotonic function
//
//
//
// here every time the search space will be half so the 
// Time Complexity = log(N) where N is size of array
//







 


#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n ;   cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++)
    {
        cin>>v[i];
    }
    int find;   cin>>find;

    int lo = 0 , hi = n-1 ,mid;
    while( hi-lo > 1)
    {
        mid = (hi+lo)/2;
        if(v[mid]<find)
        {
            lo = mid+1;
        }
        else
        {
            hi = mid;
        }
    } 


    if(v[lo]==find) cout<<"Index "<<lo<<endl;
    else if(v[hi]==find) cout<<"Index "<<hi<<endl;
    else cout<<"Index "<<"Not Found"<<endl;



}