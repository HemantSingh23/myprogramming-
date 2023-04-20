

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     map<pair<int,int>, int> m;
//     pair<int , int> p1,p2;

//     // p1 = {1,2};
//     // p2 = {2,3};
//     // cout<<(p1<p2) ; // Print 1 because in p1 first key is smaller than p2 first key so p1 is smaller than p2 which is true so print 1
//     // cout<<(p1>p2) ; // print 0 because p2 is not smaller than p1 then false so print 0 

//     // p1 = {2,2};
//     // p2 = {2,3};
//     // cout<<(p1<p2) ;// Print 1 because first key of p1 and p2 is equal so it will check for second key so p1 is smaller than p2 so it is true
//     // cout<<(p1>p2) ; // print  0
//     // cout<<(p1==p2) ; // print  0


//     // p1 = {2,2};
//     // p2 = {2,2};
//     // cout<<(p1<p2) ;// Print 0 because first key of p1 and p2 is equal so it will check for second key so p1 is smaller than p2 so it is true
//     // cout<<(p1>p2) ; // print  0
//     // cout<<(p1==p2) ; // print  1




//     // map<set<int>, int> m;

//     // set<int> s1 = {1,2,3};
//     // set<int> s2 = {2,3};
//     // cout<<(s1<s2) ; // Print 1 because in s1 first value is smaller than s2 first value so s1 is smaller than s2 which  is true so print 1
//     // cout<<(s1>s2) ; // print 0 because s2 is not smaller than s1 then false  so print 0 


//     // set<int> s1 = {2};
//     // set<int> s2 = {2,2};
//     // cout<<(s1>s2)<<endl ; // print 0
//     // cout<<(s1<s2)<<endl ; // print 0
//     // cout<<(s1==s2)<<endl ; // print 1
    
   
//     // set<int> s1 = {2,2};
//     // set<int> s2 = {2,2};
//     // cout<<(s1>s2)<<endl ; // print 0
//     // cout<<(s1<s2)<<endl ; // print 0
//     // cout<<(s1==s2)<<endl ; // print 1


//     // set<int> s1 = {2,2,2};
//     // set<int> s2 = {2,2};
//     // cout<<(s1>s2)<<endl ; // print 0
//     // cout<<(s1<s2)<<endl ; // print 0
//     // cout<<(s1==s2)<<endl ; // print 1

// }





//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



// 3
// a b 4
// 1 2 3 4
// c d 2
// 1 2
// d f 3
// 2 3 4
//
//


#include<bits/stdc++.h>
using namespace std;

int main()
{
    map< pair<string ,string>, vector<int> > m;
    int n;
    cin>>n;
    for(int i= 0; i<n;i++)
    {
        string fn , ln ;
        int ct;
        cin>>fn>>ln>>ct;
        for(int j= 0; j<ct;j++)
        {
            int x;
            cin>>x;
            m[{fn,ln}].push_back(x);

        }
    }

    for(auto &pr:m)
    {
        auto & fullname = pr.first;
        auto & list = pr.second;

        cout<<fullname.first<<" "<<fullname.second<<endl;
        cout<<list.size()<<endl ;
        // cout<<list<<endl ;
        for(auto &element:list)
        {
            cout<<element<<" ";
        }
        cout<<endl;
    }
    


}