

//    Generate Balanced Parenthesis
//
// 
//  Leet code question
// 
//
// https://leetcode.com/problems/generate-parentheses/
//
//
// Also See time complexity below
//


#include<bits/stdc++.h>
using namespace std;

vector<string> valid ;
void generate(string &s , int open , int close)
{
    if(open == 0 && close == 0) 
    {
        valid.push_back(s);
        return ;
    } 

    if( open>0 )
    {
        s.push_back( '(' );
        generate(s , open-1 , close);
        s.pop_back(); 
    }

    if( close>0 && close>open )
    {
        s.push_back( ')' );
        generate(s , open , close-1);
        s.pop_back();
    }
}

int main()
{
    int n;
    cin>>n;
    string s;
    generate(s,n,n);

    for(int i =0;valid.size();i++)
    {
        cout<<valid[i]<<" ";
    }

}


// because in each level(1, 2, 3, 4, ....n) it has two branches(either open brackets or closing brackets)
// for level 1 there is 1 function call , for level 2 there are 2 function call ,  for level 3 there are 4 function call , for level 4 there are  8 function call ans so on 
//
// if(open == 0 && close == 0)  it has o(1) time complexity so on multiply it will not affect the total time complexity
//
// Time Complexity =  2^0 + 2^1 + 2^2 + 2^3 ..... + 2^(n+1)  ==  2^(n+2)
//             
//  Time Complexity = O(2^(n+2))  or   O(2^n)   in worst case