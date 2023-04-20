

/*  Spoj Problem

https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqa01uRzdrSlFIZmZZM1RVM1FzeFhmS0lhNnU5QXxBQ3Jtc0ttb05hdTRHeUJlSEg2dV9sdnhIN1JBLTM2ZFprd0VKZW1UcGk5TXphTF82ekl6Q3AxWjV4UVJZb1ZQcUg2NWs0Z01zQnJuamRNa0hWajFvaGEwM2ZvVC1rUEVQOHpncXJ0QnhRdEtZZV9rMlM2OU11WQ&q=https%3A%2F%2Fwww.spoj.com%2Fproblems%2FEKO%2F&v=JAfJssvFgDI

*/





/// in this predicate functioin will be 
//
//   T T T T T T F F F F F F F
//


#include<bits/stdc++.h>
using namespace std ;
const int N = 1e6+10;
int n;
long long m;
long long tree[N];

bool iswoodsufficient(int h)
{
    long long wood = 0;
    for(int i =0; i<n ; i++)
    {
        if(tree[i]>=h)
        {
            wood += (tree[i] - h) ;
        }   
    }
    return wood>= m;
}

int main()
{
    cin>>n>>m;
    for(int i =0; i<n; i++)
    {
        cin>>tree[i];
    }

    // T T T T T T T T F F F F F F F F F

    long long lo=0, hi = 1e9 , mid;
    while(hi-lo > 1)
    {
        mid = (lo+hi)/2;
        if(iswoodsufficient(mid))
        {
            lo = mid;
        }
        else
        {
            hi = mid-1; 
        }
    }
    if(iswoodsufficient(hi)) cout<<hi<<endl;
    else cout<<lo<<endl;

}