#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{ 
    int n ,targert;
    cin >> n >>targert;
    vector<int > v (n);
    for(int i=0 ; i< n ;i++)cin >> v[i];
    int min=0 ,max =n-1,mid=0;
    for (int i=0 ; i< 32 ; i++)
    {
           mid=(min+max)/2;
           if(v[mid]>=targert)max=mid;
           else min=mid+1;
    }
    // cout << mid << endl;
    if(v[mid]!=targert) cout<<"-1";

    return 0;
}

// 1 2 3 4 5 6 7 8 9 10 