


//
//
//
// formula to find the count sum and factors of a number ==>
// 
//  in the next file we have discussed the optimized way to find 
//  these things  
//  
//  here we discussed some basic method and explaination
//
//
// let x is a any number and let say it has  prime factors
// p1 , p2 , p3 , p4 ,........ , pt then
//
// x == p1^n1 * p2^n2 * p3^n3 * p4^n4 .......... pt^nt  
//
// then ->
// no of total divisors == (n1 + 1)*(n2 + 1)*(n3 + 1).......(nt + 1)
//
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
// formula to find the sum of all the factors ==>
//
// sum == (1 + p1 + p1 ^ 2 + p1 ^ 3 + ... + p1 ^ n1) *
//        (1 + p2 + p2 ^ 2 + p2 ^ 3 + ... + p2 ^ n2) *
//        (1 + p3 + p3 ^ 2 + p3 ^ 3 + ... + p3 ^ n3) *
//         .  .  .  .  .   .  .   .   .   .  .  .   .
//         .  .  .  .  .   .  .   .   .   .  .  .   .
//         .  .  .  .  .   .  .   .   .   .  .  .   .
//        (1 + pt + pt ^ 2 + pt ^ 3 + ... + pt ^ nt)  
//
// example ==> 36 =  2^2 * 3^2
//     sum = (1 + 2^1 + 2^2) * (1 + 3^1 + 3^2)
// or  sum = (1 + 2 + 4) * (1 + 3 + 9)
//     sum = (1*1 + 1*3 + 1*9 + 2*1 + 2*3 + 2*9 + 3*1 + 3*3 + 3*9)
//
//
// each  bracket in the above sum equation is Geometric Progression(GP) so -
//
// Main formula of Sum ==>
//
// sum == [{(p1 ^(n1+1)) - 1}/{p1 -1}] * [{(p2 ^(n2+1)) - 1}/{p2 -1}] ......[{(pt ^(nt+1)) - 1}/{pt -1}] 
//
//
//
//
//
// example ==> 2^2 * 3^2 ==  36
// sum =  [{(2 ^(2+1)) - 1}/{2 -1}] * [{(3 ^(2+1)) - 1}/{3 -1}]
// sum =  [{(2 ^(3)) - 1}/{1}] * [{(3 ^(3)) - 1}/{2}]
// sum =  [{8 - 1}/{1}] * [{27 - 1}/{2}]
// sum =  [{7}/{1}] * [{26}/{2}]
// sum =  [7] * [13]
// sum =  91
//
// 







// in next file we have discueed better and more optimized method than this
// in next file we have discueed better and more optimized method than this
// in next file we have discueed better and more optimized method than this
// in next file we have discueed better and more optimized method than this





#include<bits/stdc++.h> 
using namespace std ;


int main()
{

// // Method 1 ==>
// // Basic Method to find factors, count and sum of factors 
// in next file we have discueed better and more optimized method than this
//
    // int n;  cin>>n;
    // int ct =0;
    // int sum = 0;
    // for(int i =1; i<=n; i++)
    // {
    //     if(n%i==0)
    //     {
    //         cout<<i<<endl;
    //         ct++;
    //         sum += i ; 
    //     } 
    // }
    // cout<<ct<<" "<<sum<<endl; 
    
    //  // Time Complexity = O(N)

///////////////////////////////////////////////////////////////////////////////////////

// // Method 2 ==>
// // Bether Method from Method 2 
// in next file we have discueed better and more optimized method than this
//
    int n;  cin>>n;
    int ct =0;
    int sum = 0;
    // for(int i =1; i<=sqrt(n); i++)
    for(int i =1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            cout<<i<<" "<<n/i<<endl;
            ct += 1;
            sum += i ; 
            if(n/i != i)
            {
                sum += n/i;
                ct += 1;
            }
        } 
    }
    cout<<ct<<" "<<sum<<endl; 

    //  // Time Complexity = O( sqrt(n) )

// in next file we have discueed better and more optimized method than this
// in next file we have discueed better and more optimized method than this
// in next file we have discueed better and more optimized method than this
// in next file we have discueed better and more optimized method than this

    
}








