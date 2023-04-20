





//   Subsets Generate 
// 
//  Leet code question
// 
//
// https://leetcode.com/problems/subsets/
//
//
// Also See time compleity below
//


#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> allsubsets ;

void generate(vector<int> &subset , int i , vector<int> &num )
{
    if(i == num.size()) 
    {
        allsubsets.push_back(subset) ;
        return ;
    }

    // ith element not in subset
    generate(subset , i+1, num) ;

    // ith element in subset 
    subset.push_back(num[i]);
    generate(subset , i+1, num) ;

    subset.pop_back() ;
  
}

int main()
{
    int n; cin>>n;
    vector<int> num(n);
    for(int i =0; i<n; i++)
    {
        cin>>num[i];  
    }

    vector<int> empty;
    generate(empty,0,num);
    for(auto subset : allsubsets)
    {
        for(auto ele : subset)
        {
            cout<<ele<<" ";

        }
        cout<<endl;
    }
    
}



// here also either we take or not in each level so 
// it is same as Parenthesis Generation Question
//
//  if(i == num.size())   it has o(1) time complexity so on multiply it will not affect the total time complexity
//
// Time Complexity =  2^0 + 2^1 + 2^2 + 2^3 ..... + 2^(n+1)  ==  2^(n+2)
//             
//  Time Complexity = O(2^(n+2))   or   O(2^n)    in worst case