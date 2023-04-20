


/* 

https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbloyYUZIOHJqX2xRdjhMWmpTbUc3TkY5Y1did3xBQ3Jtc0trbHdZZ2p2Y1ZnSlFob3hkQlZlaXdDeFZJODRGckRDb3liOENjLU1PWFdXZXZVSjVkUW03ZEV1bGF4eHJBMGFPTDRhWVVrSndxZnN3M3M5aVBOTEZ0anpHRkZUSTlJTGpTYVdpRk1kMTJUVkZfeDI2RQ&q=https%3A%2F%2Fwww.spoj.com%2Fproblems%2FAGGRCOW%2F&v=H9LoqW-gGk0

*/





/// in this predicate functioin will be 
//
//   T T T T T T F F F F F F F
//
// also see time complexity below



#include<bits/stdc++.h>
using namespace std ;
const int N = 1e5+10;
int n , c;
int position[N] ;

bool canPlaceCows(int minDis)
{
    int lastPos = -1 ;
    int cows_ct = c;
    for(int i =0; i<n; i++)
    {
        if(position[i]-lastPos >= minDis  || lastPos == -1 )
        {
            cows_ct--;
            lastPos = position[i];
        }
        if(cows_ct == 0) break;
    }

    return cows_ct == 0;
}


int main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>c;
        for(int i =0; i<n; i++)
        {
            cin>>position[i];
        }

        sort(position, position+n);

        // T T T T T T T T F F F F F F F F F
        
        int lo = 0, hi =1e9, mid;
        while(hi-lo>1)
        {
            int mid = (lo+hi)/2;
            if(canPlaceCows(mid))
            {
                lo = mid;
            }
            else
            {
                hi = mid-1;
            }
        }
        if(canPlaceCows(hi)) cout<<hi<<endl;
        else cout<<lo<<endl;

    }
}

// Time Complexity = Nlog(N) + N*log(10^9)






