





//
//
// //   Large Binary Exponentiation ==>                                    
//
//
// here we discussed if  both the  value of   a , M
//  are bigger than 10^9 and less than 10^18
//
//      10^9 <= a , M <= 10^18   and  b < 10^9 
//
//
// Time Complexity == O( log(N) * log(N) ) == O( (log(N)) ^ 2 )
//
// because binMultiply() function run O(log(N)) times and
// binExpIter() function also run O(log(N)) times so 
// total time complexity == O( log(N) * log(N) ) == O( (log(N))^2 )


#include<bits/stdc++.h>
using namespace std;
const long long int  M = 1e18+7 ;

// if both   a , M <= 10^18





// here wa can't do  a * a because a = 10^18
// so
// a * a == a + a + a + a + ........ a times
//
// long long has range > 2 * 10^18 so
// first we calculte a + a and a + a will less than long long range
// means  a + a < 2 * 10^ 18  so we can easily store a + a
// then calculate (a + a)%M and (a + a)%M < 10^18 because
// M = 10^18 then we again add a and again take modulus with M
// and use the same process   a times    so finally
// we will get (a * a)  indirectly with the help of 
// using a*a == a+a+a+a ... a times 
//
//
//
// we can do the above thing using loops but in loop it take
// O(N) time where N is the no of times we want to add  or N is
// number which multiply with a
// if a * b then time complexity == O(b)
//
// but we want to calculate in log(N) or log(b)
// so we use the below method 


// // let a = 3 and b = 13 and we want a * b then 
// 
// b = 13 = 1101     ====>   binary of 13  
// b = 1101
// b = 8 + 4 + 0 + 1     (from binary to decimal)
//
// a * b  =  3*(1101) 
// a * b  =  3 * (8 + 4 + 0 + 1 )
// a * b  =  3 * 8  +  3 * 4  +  3 * 0  + 3 * 1 
// a * b  =  24 +  12 +  0  + 3 
// a * b  =  39
//
//
// means here we multipli only when bit was 1 or bit was set
// so we multiply only when bit will be set
// see the whole process of a * b where a = 3 , b = 13  below
//
long long int binMultiply(long long a , long long b)
{
    long long  ans1 = 0 ;
    while(b>0)
    { 
        if(b&1)    ans1 = (ans1 + a) %M ;
        
        a = (a + a)%M;
        b>>=1;
    }
    return ans1;
}
// ans = 0; , a = 3,  b = 13
// initially value of  a = 3  ,  b = 1101  ,  ans = 0
//
//    b      ans = ans + a            a  =  a + a
// 1101      0 + 3 = 3                      3 + 3 = 6                    
//  110      3                              6 + 6 = 12                
//   11      3 + 12 = 15                   12 + 12 = 24          
//    1     15 + 24 = 39                   24 + 24 = 48   
//b is 0 then while loop will be break      
//
//    0 so while loop will be break and ans 39 will be return
//
//







long long int binExpIter(long long a , long long b)
{ 
    long long  ans = 1;
    while(b>0)
    {
        if(b&1)   ans = binMultiply(ans , a) ;
        a = binMultiply(a , a) ;
        b>>=1;
    }
    return ans ;
}



int main()
{
    long long  a = 1e16+2 , b = 546 ;
    cout<<binExpIter(a,b)<<endl;
    cout<<binMultiply(a,b)<<endl;

}













