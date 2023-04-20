










#include<bits/stdc++.h>
using namespace std ;


int main()
{
    

    int t;   cin>>t;
    int a = 0;
    while(t--)
    {
        a++;
        map<int, int> m;
        for(int i =65; i <=90; i++)
        {
            cin>>m[i];
        }
        int N ;   cin>> N ;

        vector<string> ss ;

        for(int i =0; i <N; i++)
        {
            string s;
            cin>>s;
            ss.push_back(s) ;
        }
        
        int check = 0;
        set<string> ans;
        for(int i =0; i <N; i++)
        {
            string temp ;
            for(int j =0; j <ss[i].size(); j++)
            {
                temp.push_back(m[ss[i][j]]) ;
            }
            if(ans.count(temp))
            {
                check=1;
                break;
            }
            ans.insert(temp);
            
        }

        
        if(check==1) cout<<"Case #"<<a<<": "<<"YES"<<endl;
        else cout<<"Case #"<<a<<": "<<"NO"<<endl;



    }
    


}



















