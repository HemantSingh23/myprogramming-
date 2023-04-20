





#include<bits/stdc++.h>
using namespace std ;

double eps = 1e-9 ;  // means 10^(-6) means 10 to power (-6)
double multiply(double mid , int p)
{
    double ans = 1;
    for(int i =0; i<p; i++)
    {
        ans *= mid;
    }
    return ans;

}



int main()
{
    double n; cin>>n; // // here we want to find the pth or square root of n 
    int p;  cin>>p;   // // 
    double lo =1 , hi = n, mid;
    while(hi-lo > eps) 
    {
        mid=(hi+lo)/2 ;
         
        // if(mid*mid <x) // square root
        if(multiply(mid,p) <n) // pth root
        {
            lo = mid;
        }
        else
        {
            hi = mid;
        }
    }

    // // square root     // square root     // square root 
    //
    // cout<<setprecision(10)<<lo<<" "<<hi<<endl;
    // cout<<pow(n, 1.0/2); // 
    //
    // //  Time Complexity = log(n*(10^d))  // square root 
    // here d is accuracy means eps which define above




    // // pth root     // pth root     // pth root
    //
    cout<<setprecision(10)<<lo<<" "<<mid<<" "<<hi<<endl;
    cout<<pow(n, 1.0/p);
    //
    //
    // //  Time Complexity = p*log(n*(10^d))  // pth root 



 
}





































