


// // Implement Lower Bound And Upper Bound     // // Implement Lower Bound And Upper Bound     // // Implement Lower Bound And Upper Bound     
// // Implement Lower Bound And Upper Bound     // // Implement Lower Bound And Upper Bound     // // Implement Lower Bound And Upper Bound     
// // Implement Lower Bound And Upper Bound     // // Implement Lower Bound And Upper Bound     // // Implement Lower Bound And Upper Bound     



#include<bits/stdc++.h>
using namespace std ;


// lowerbound   // lowerbound   // lowerbound    // lowerbound    // lowerbound
// lowerbound   // lowerbound   // lowerbound    // lowerbound    // lowerbound
// lowerbound   // lowerbound   // lowerbound    // lowerbound    // lowerbound
// lowerbound   // lowerbound   // lowerbound    // lowerbound    // lowerbound

int lower_bound(vector<int> &v, int element)
{
    int lo =0 , hi =v.size()-1, mid;
    while(hi-lo>1)
    {
        int mid = (lo+hi)/2;
        if(v[mid]<element)
        {
            lo = mid+1;
        }
        else
        {
            hi = mid;
        }
    }
    if(v[lo]>=element) return lo;
    else if(v[hi]>=element) return hi;
    return -1;
}


// upperbound      // upperbound      // upperbound      // upperbound      // upperbound    
// upperbound      // upperbound      // upperbound      // upperbound      // upperbound    
// upperbound      // upperbound      // upperbound      // upperbound      // upperbound    
// upperbound      // upperbound      // upperbound      // upperbound      // upperbound    

int upper_bound(vector<int> &v, int element)
{
    int lo =0 , hi =v.size()-1, mid;
    while(hi-lo>1)
    {
        int mid = (lo+hi)/2;
        if(v[mid]<=element)
        {
            lo = mid+1;
        }
        else
        {
            hi = mid;
        }
    }
    if(v[lo]>element) return lo;
    else if(v[hi]>element) return hi;
    return -1;
}

int main()
{
    int n ;   cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++)
    {
        cin>>v[i];
    }
    int element;    cin>>element;

    int lb = lower_bound(v,element); // lowerbound
    cout<<lb<<" "<<v[lb]<<endl;

    int ub = upper_bound(v,element);  // upperbound    
    cout<<ub<<" "<<v[ub]<<endl;

}

























