




// //   Inclusion And Exclusion   ==>     
//
//



// Hackerearth Question

/* 

Questioin link =>
https://www.hackerearth.com/problem/algorithm/the-three-musketeers-6efd5f2d/


video link =>
https://www.youtube.com/watch?v=rrH3nZ9KjCY&list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&index=81


*/
 


 
// 
//
// Union of two sets ==>
//
// If A and B are two finite sets  then
//
// n(A ∪ B) = n(A) + n(B) – n(A ∩ B)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Union of three sets ==>
//
// If A, B and C are three finite sets, then;
//
// n(A ∪ B ∪ C) = n(A) + n(B) + n(C) – n(A ∩ B) – n(B ∩ C) – n(A ∩ C) + n(A ∩ B ∩ C)
//
//
//

//
//
// no of ways to select 3  from n is nC3 =  n * (n-1) * (n-2) / 6
//
//
//





#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch)
{
    return ch == 'a' ||  ch == 'e' ||  ch == 'i' ||  ch == 'o' ||  ch == 'u' ;
}

vector<string> Subsets(string s)
{
    int sz = (1<<s.size()) ;
    vector<string> ans;
    for(int mask=0; mask<sz; mask++)
    {
        string subset;
        for(int bit=0; bit<s.size(); bit++)
        {
            if(mask & (1<<bit)) subset.push_back(s[bit]) ;
        }
        if(subset.size())  ans.push_back(subset) ;
    }
    return ans;
}

int main()
{
    int t;  cin>>t;

    while(t--)
    {
        int n;  cin>>n;
        string str[n];
        for(int i=0; i<n; i++)
        {
            cin>>str[i];
        }
        unordered_map<string,int> hsh;

        for(int i=0; i<n; i++)
        {
            set<char> distinct_Vowel;
            for(char ch : str[i])
            {
                if(isVowel(ch)) distinct_Vowel.insert(ch) ;  
            }

            string vowel_str;
            for(char ch : distinct_Vowel )
            {
                vowel_str.push_back(ch) ;    
            }     
            vector<string> all_subsets = Subsets(vowel_str) ;   

            for(string vowel_subset : all_subsets )
            {
                hsh[vowel_subset]++ ;             
            }
        }

        long long ans =0;
        for(auto &pr :hsh )
        {
            if(pr.second <3) continue ;
            long long ct = pr.second;
            long long ways = ct * (ct-1) * (ct-2) / 6  ;      
            if(pr.first.size() %2 ==0)  ans -= ways ;          
            else   ans += ways ; 
        }

        cout<<ans<<endl;
    }

}


























