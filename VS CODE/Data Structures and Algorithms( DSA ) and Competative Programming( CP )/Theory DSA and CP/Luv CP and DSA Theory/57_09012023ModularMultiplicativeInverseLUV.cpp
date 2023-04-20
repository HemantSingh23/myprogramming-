


//
//
//
// // //  Modular Multiplicative Inverse(MMI) ==>
//
//
//    ( A / B ) % M  =  ( A * B^(-1) ) % M
//    ( A / B ) % M  =  ( A % M  *  (B^(-1)) % M ) % M
//
//
// MMI is defined if A and M are coprime 
// means gcd of A and M is 1  or __gcd(A,M) == 1 
//
//
// here (B^(-1)) % M is called Modular Multiplicative Inverse(MMI)
// with respect to Modulo M
//
//
// if A * B = 1 then we say B is Multiplicative Inverse(MI) of A  same here 
//
// if (A * B)%M = 1 then we say B is Modular Multiplicative 
// Inverse(MMI) of A  with respect to Modulo M if MMI is defined 
// means if A and M are coprime  or  __gcd(A,M) == 1 
// and here 1 <= B <= M-1
//
//
//// //  using above formula , we find the MMI of A using loops   =====>
//// //  using above formula , we find the MMI of A using loops   =====>
//
// // // //  1st way to find MMI of A  in O(M) time   ======>
// // // //  1st way to find MMI of A  in O(M) time  ======>
// // // //  1st way to find MMI of A  in O(M) time  ======>
//
// so we run a loop from 1 to M-1 and then check whether
// (A * B) % M   equal to 1 or not if equal to 1 then B is inverse
// of A with respect to Modulo M if MMI is defined  means 
// if A and M are coprime  or  __gcd(A,M) == 1 

//
// // //    Time Complexity == O(M)
// // //    Time Complexity == O(M)
// // //    Time Complexity == O(M)
// // //    Time Complexity == O(M)
// 
// The above time complexity is more so we find MMI of A using the 
// Fermat's theorem  which is given below  
//
// MMI is defined if A and M are coprime 
// means gcd of A and M is 1  or __gcd(A,M) == 1 
//
//<<<<
//
//



//
// MMI is defined if A and M are coprime 
// means gcd of A and M is 1  or __gcd(A,M) == 1 
//



//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//
// MMI is defined if A and M are coprime 
// means gcd of A and M is 1  or __gcd(A,M) == 1 
//
// // // //  2nd way to find MMI of A  using Fermat's theorem     ======>
// // // //  2nd way to find MMI of A  using Fermat's theorem     ======>
// // // //  2nd way to find MMI of A  using Fermat's theorem     ======>
// // // //  2nd way to find MMI of A  using Fermat's theorem     ======>
// // // //  2nd way to find MMI of A  using Fermat's theorem     ======>
//
//
// // // Time Complexity == O(log(M)) because we use binary exponentiation
// // // Time Complexity == O(log(M)) because we use binary exponentiation
// // // Time Complexity == O(log(M)) because we use binary exponentiation
//
// 
//
// Fermat's theorem (Fermat's little theorem or Fermat's primality test)  ======>>
// Fermat's theorem (Fermat's little theorem or Fermat's primality test)  ======>>
// Fermat's theorem (Fermat's little theorem or Fermat's primality test)  ======>>
//
//
// Fermat’s little theorem states that if p is a prime number,
// then for any integer a, the number ( a^p – a ) is an integer 
// multiple of p and here p is a prime number  
// 
// a ^ p ≡ a (mod p).
// here if we divide a^p by p then remainder will be a
//
// Special Case:=> 
// If a is not divisible by p, Fermat’s little
// theorem is equivalent to the statement that ( a^(p-1) - 1 ) is an
// integer multiple of p.  Here a is not divisible by p. 
//
//  a ^ (p-1) ≡ 1 * (mod p)   OR    a ^ (p-1) % p = 1 
//
//
//
//
//// // // // //  // // // // // // // // // // // // // // // // // // // // // // // // // // //
//
//
//
// MMI is defined if A and M are coprime 
// means gcd of A and M is 1  or __gcd(A,M) == 1 
//
//
// now we find MMI of A using special case of Fermat's theorem ====>
// now we find MMI of A using special case of Fermat's theorem ====>
// now we find MMI of A using special case of Fermat's theorem ====>
//
//  if M is prime and  A is not multiple of M
//
//  A ^ (M-1) ≡ 1 (mod M)   
// 
// here A is not Multiple of M and M is prime
// it means if we divide A^(M-1) by M then Remainder will be always 1
//  above can also be written like 
//   A ^ (M-1) % M = 1 
// 
//    A ^ (M-1) ≡ 1 (mod M) 
// if we multiply  both side with A inverse A^(-1) then
//
//
// A ^ (M-1) * A(-1) ≡ A ^ (-1)  * (mod M) 
// A ^ (M-2) ≡ A ^ (-1)  * (mod M) 
// it means if we divide A ^ (M-2) by M then Remainder A ^ (-1) always
//
// so  A ^ (M-2) % M =  A ^ (-1)
//  or A^(-1) =  A^(M-2) % M
//
//
//
//
//
// // // //   Main Formula  ====> 
//
//           A^(-1) =  A^(M-2) % M
//
// when M is prime and A is not multiple of M
// here we can find A^(M-2) % M using binary exponentiation easily
//
//
// // becuase here to find the value of A inverse or A^(-1) we need to 
// // find  A^(M-2) % M which we can easily find by binary exponentiation
//
// // // // binExpIter(A, M-2, M)
//
// // so  Time Complexity == O(log(M))
//
//
//
//
//
// if M is prime and  A is not multiple of M then A inverse will be =>
//
// // //     A^(-1) =  A^(M-2) % M
//
//
//
//
// // we can find A^(M-2) % M using binary exponentiation easily
// //  binExpIter(A, M-2, M)
//
//     Time Complexity == O(log(M))
//     Time Complexity == O(log(M))
//     Time Complexity == O(log(M))
//


//
// if M is non-prime then that MMI can be found by using 
// extended Euclidean algorithm(EEA).
// but we will not study it because it will rarely used
// 
//









//
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//


// #include<bits/stdc++.h>
// using namespace std;

// const int M = 1e9+7;

// int binExpIter(int a , int b, int m)
// {  
//     int result = 1;
//     while(b)
//     {
//         if(b&1)     result = (result * 1LL * a) %m ;
//         a = (a * 1LL * a)%m;
//         b>>=1;
//     }
//     return result;
// }

// int main()
// {
//     int a;  cin>>a;
//     cout<<binExpIter(a,M-2,M)<<endl;
//     // here we find the inverse of a 
//     // A^(-1) =  A^(M-2) % M
// }










//
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
// Question ==>
//
// There are N children and K toffees.  so count the number
// of ways to distribute toffee among N students such that each
// students get  toffee only then take modulo with M = 1e9+7
// here K < N < 1e6
// let there are Q queries where  Q < 1e5
//
// Answer => its answer will be nCk using formula nCr
// in binomial expansion topic maths
// where nCr = n! / ( (n-r)! * r! )  // here ! is factorial
// 
// so we have to find nCk % M
// means  nCk % M   ==  [ n! / ( (n-r)! * r! ) ] % M
//
// but we can't find modulo in division directly so
//








#include<bits/stdc++.h>
using namespace std;

const int M = 1e9+7;
const int N = 1e6+10;
int fact[N] ;


int binExpIter(int a , int b, int m)
{  
    int result = 1;
    while(b)
    {
        if(b&1)     result = (result * 1LL * a) %m ;
        a = (a * 1LL * a)%m;
        b>>=1;
    }
    return result;
}

int main()
{
    fact[0] = 1;

// first we precompute the factorial
    for(int i =1; i<N; i++)
    {
        fact[i] = (fact[i-1] * 1LL * i) % M ;
    }

    int q;  cin>>q;
    while(q--)
    {
        int n , k ;
        cin>>n>>k;

        
        // so we have to find nCk % M
        // means  nCk % M   ==  [ n! / ( (n-r)! * r! ) ] % M
        //
        // so for numerator n!  we find by   fact[n]  given below
        // which we already precomputed above

        int ans = fact[n] ;

        // now because we have to devide by denominator ( (n-r)! * r! )
        // so instead of dividing by denominator  we have to find
        // inverse of ( (n-r)! * r! )   which is a denominator and 
        // because (n-r)! = fact[n-k]  and r! = fact[k]
        //
        // so we can also write it like  (fact[n-k] * 1LL * fact[k])
        //
        // so we have  to find inverse of denominator
        // (fact[n-k] * 1LL * fact[k]) 
        // and we find the inverse of any number by using binary
        // exponentiation method in O(log(N))  
        //
        // so first we calculate denominator like below 
        //
        // int denominator = (fact[n-k] * 1LL * fact[k])
        //
        // now we find inverse by  binExpIter(denominator , M-2 , M )
        //
        int denominator = (fact[n-k] * 1LL * fact[k]) % M ;
        ans = ans  *  binExpIter(denominator , M-2 , M ) ;

        cout<<ans<<endl;
    }


}
















































































