



//
//
// //   Large Binary Exponentiation ==>                                    
//
//
// here we discussed if only the value of b
//  is bigger than 10^9 and less than 10^18
//
//      10^9 <=  b  <= 10^18
//
////////////////////////////////////////////////////////////////////////////
//
// // // CoPrime Numbers ==> 
// Those numbers which have  1 as a common factor
// if a and b are two numbers then   gcd(a,b) == 1
// ex=> 6,7 and 2,3 and 4,5 etc.
//
//
//////////////////////////////////////////////////////////////////////////////////////
//
// ETF(Euler's Totient Function) ==> 
// ETF represented by  Φ(Phi)
// Count of k such that  1 <= k <= N  here k and N are coprime numbers
//
//
// if any number N then its ETF value will count of all the number
// from 1 to N which has coprime with N  
//
// ex. 5 ETF value is  1 2 3 4 
//    Φ(5) = 4
//
//    Φ(6) = 2   (1,6)
//
//
//
// // Formula of ETF value Φ ==> 
//
//
//  if n is any number then its ETF value Φ(n) is 
//
//   Φ(n) = n * ∏ (1 - 1/p )  // p is all distict prime factors of n
//
//    here ∏ (Pi) it is product symbol like Sum symbol Sigma( ∑ )
//         ∏ (Pi) it means product of all numbers
//
//
//
//  if n is prime then ->
//  because n is prime then  Φ(n) = n * ∏ (1 - 1/p ) will be 
//  Φ(n) = n * (1 - 1/n )  which is further equal to  Φ(n) = n - 1 
//
//     Φ(n) = n - 1    
// 
//
// Examples ==>
//   ex.   Φ(5) = 5 * (1 - 1/5 ) = 5 * 4/5 = 4
// here p =5 because factor of 5 = 5 * 1 and only 5 is prime
//
//   ex.   Φ(6) = 6 * (1 - 1/2 ) (1- 1/3) = 6 * 1/2 * 2/3 = 2
// here p = 2,3 because factor of 6 = 1*2*3 and  2 and 3 are prime so
// 
//
// 
//
//
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
//
//
// a ≡ b mod(n) 
// this expression means if we divide a by n then we get remainder b
// // and here ≡ is called congruent(अनुरूपता) and it means equivalence
// 
//
///////////////////////////////////
//
// // //  // Euler's Theorem ==>
//
//  (a^b) % M can be reprenseted ==>
//
//  a^b  ≡  [a^{b  mod Φ(n)}]   mod (n) 
//
// here also this expression means if we divide  a^b by n then we 
// get remainder [a^{b  mod Φ(n)}]
//
// it can also be wriiten like below-
//
//      (a^b) % n   ==   [a ^ (b % Φ(n) ) ] % n
//
// or
// 
//  if M is any number then ->
//
//      (a^b) % M   ==   [a ^ (b % Φ(M) ) ] % M
//                
//              
//  if M is prime then ->
//                    
//      (a^b) % M   ==   [a ^ (b % (M-1) ) ] % M
//                     
//     because if n or M is prime then   Φ(n) = n - 1 
//
//  
//
//  
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//
// Question ==>
//
//  calculate ( 50^(64^32) )%(1e9+7)  here M = 1e9+7
//  so M is prime
//
//

#include<bits/stdc++.h>
using namespace std;
const long long int  M = 1e9+7 ;

int binExpIter(long long a , long long b , int m)
{
    int ans = 1;
    while(b>0)
    {
        if(b&1) ans = (ans * 1LL * a) %m ;
        a = (a * 1LL * a)%m;
        b>>=1;
    }
    return ans;
}

int main()
{
    // (50^(64^32))%(M) here M = 1e9+7 which is prime
    //
    // == [ 50 ^ {(64^32)%(M-1)} ] % M
    //
    //
    // M-1 because here M is prime
    cout<<binExpIter(50, binExpIter(64,32,M-1), M)<<endl;

}

















