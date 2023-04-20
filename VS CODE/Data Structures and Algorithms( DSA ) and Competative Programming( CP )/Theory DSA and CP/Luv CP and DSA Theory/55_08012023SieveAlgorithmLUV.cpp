


//
//
//  // Sieve Algorithm ==>
//
//
// first all of this algorithm assumes that
// all the given numbers are prime then it
// cross all number divisible by 2 then 3 then 5...
// and simultaneously the number which are
// not cross that are prime
//
//
// 
//
// examples==> find all prime till 30
//
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
// 17 18 19 20 21 22 23 24 25 26 27 28 29 30
//
// then this algorithm first  cross 1
//
// 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
// 17 18 19 20 21 22 23 24 25 26 27 28 29 30
//
// now it make 2 prime and cross all number divisible by 2
//
// 2 3   5   7   9   11   13   15  
// 17   19   21   23   25   27   29 
//
// then because 3 is not crossed so 3 also a prime number otherwise
// if 3 is not prime then it will surely crossed by a number which
// appear before 3 so and because 3 is not crossed so  3 is prime 
// now we cross number which is divisible by 3
// 
// 2 3   5   7       11   13      
// 17   19       23   25       29 
//
// now same 5 is prime because it is not croosed so we cross other 
// number divisible by 5
//
// 2 3   5   7       11   13      
// 17   19       23           29 
//
// now for same as 3 , 5   7 , 11, 13... also prime and we cross
// number divisible by these number 
//
// final prime number => 2 3 5 7 11 13 17 19 23 29
//
//
//
//
//
//  Time Complexity  ==  n * log( log(n) ) 
//  Time Complexity  ==  n * log( log(n) ) 
//  Time Complexity  ==  n * log( log(n) ) 
//
// 




#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+10;

vector<bool> isPrime(N,1);// here 1 means we assume all numbers prime


int main()
{
    isPrime[0] = isPrime[1] = false ;

    // for(int i =2; i*i<N; i++) // optimization // but not recommended
    for(int i =2; i<N; i++)
    {
        if(isPrime[i]==true)
        {
            // for(int j =i*i; j<N; j+=i ) // optimization // but not recommended
            for(int j =2*i; j<N; j+=i )
            {
                isPrime[j] = false ;
            }
        }
    }

    for(int i =1; i<100; i++)
    {
        cout<<i<<" "<<isPrime[i]<<endl;
    }



}


//
//
// // Time Complexity  ==  n * log( log(n) ) 
// 
//
// Inside Loop ==>
//
// inside loop  if no conditioin then ->
// for multiple of 2 inside loop will run n/2 times , 
// for multiple of 3 inside loop will run n/3 times , 
// for multiple of 4 inside loop will run n/4 times , 
//  .      .     . .     .    .   .    .   .    .
//  .      .     . .     .    .   .    .   .    .
//  .      .     . .     .    .   .    .   .    .
// for multiple of n inside loop will run n/n times , 
// 
// so total run of inside loop = n/2 + n/3 + n/4 + ...... + n/n
// so total run of inside loop = n (1/2 + 1/3 + 1/4 + ...... + 1/n)    // we take common of n
// so total run of inside loop = n log(n)   
//
// inside loop will run for n log(n) times if there are no condition is given
//
//
//
// but here inside loop is running only for prime number then ->
//    n/2 + n/3 + n/5 + n/7 + n/11 ...... 
//
// so n/2 + n/3 + n/5 + n/7 + n/11 ......   == n log(log(n)) 
// 
// so inside loop will  nlog(log(n))  
//
//
//  Time Complexity  ==  n * log( log(n) )  
//













































