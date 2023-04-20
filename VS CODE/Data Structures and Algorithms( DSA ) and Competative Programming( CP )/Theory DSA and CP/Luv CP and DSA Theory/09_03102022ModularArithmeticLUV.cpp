

/// for addtion
// ( a+b ) % M = ( (a%M) + (b%M) ) % M


// for substraction
// ( a*b ) % M = ( (a%M) * (b%M) ) % M


// for multiplication
// ( a-b ) % M = ( (a%M) - (b%M) + M ) % M


// for Division 
// (a/b) % M = ( (a%M) * ((1/b)%M) ) % M   // here (1/b) = (b)^(-1)

// or
//   (a/b) % M = ( (a%M) * ((b^(-1))%M) ) % M



/* 
Given a number n . Print its factorial
constraints 
1<= n <= 100

print answer modulo M
where M = 47
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int n =21;

    // long long int fact =1;

    // for(int i=1; i<=n; i++)
    // {
    //     fact = fact * i;
    // }
    // cout<<fact<<endl; // value of fact will be overflow because it is greater than long long int range
    // that's why we use modulo M;


// using modulo M

    int n =21;
    int M = 47;

    int fact =1;
    for(int i=1; i<=n; i++)
    {
        fact = (fact * i)%M;
    }
    cout<<fact<<endl;
}
