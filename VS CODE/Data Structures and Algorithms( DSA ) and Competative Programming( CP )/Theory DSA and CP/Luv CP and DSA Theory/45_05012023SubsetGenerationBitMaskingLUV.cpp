


// Subset Generation using Bit Masking




/* 
// Leetcode Question
 
https://leetcode.com/problems/subsets/
 
*/

//
//
// Input
//
// 3
// 2 4 5

// Also see Time Complexity below


// 
// 000
// 001
// 010
// 100
// 011
// 101
// 110
// 111
//



#include<bits/stdc++.h>
using namespace std ;

vector<vector<int>> subsets(vector<int>& num)
{
    int n = num.size() ;
    int subset_ct = (1<<n); //count of subset which is 2 power n
    vector<vector<int>> subsets;
    for(int mask =0; mask < subset_ct; mask++ )
    {
        vector<int>subset;
        for(int i =0; i<n; i++)
        {
            if(( mask & (1<<i)) != 0 )
            {
                subset.push_back (num[i]) ;
            }
        }
        subsets.push_back(subset) ;
    }
    return subsets;

}



int main()
{
    int n;  cin>>n;
    vector<int> v(n) ;
    for(int i =0; i<n; i++)
    {
        cin>>v[i];
    }

    auto all_subsets = subsets(v);

    for(auto subset : all_subsets)
    {
        for(int ele : subset)
        {
            cout<<ele<<" ";
        }
        cout<<endl;
    }


// We calculate time complexity from function because time complexity of 
// printing the subset is not high inside int main() function
//
// if n is size of array then for loop of mask variable will be 2^n
// and inside this another for loop of n so   n * 2^n   
//  Time Complexity = O( n * 2^n )
    

}


   
