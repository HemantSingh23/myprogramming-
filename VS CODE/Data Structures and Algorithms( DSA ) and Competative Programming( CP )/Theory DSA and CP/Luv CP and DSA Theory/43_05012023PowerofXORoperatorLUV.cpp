




// // // // // To count the no of bits of any number  ===>
//
//    let number is x then  ->
//
//   int bit_ct = (int)log2(x) + 1 ;
//
//
//   if x is any number then total no of bits in x 
//   will be    int bit_ct = (int)log2(x) + 1 ; 
//  





// XOR Operator ==>

// 1 0 -> 1
// 0 1 -> 1
// 0 0 -> 0
// 1 1 -> 0
//
//
//  ( x ^ x  == 0 )  XOR of two same is always zero                         
//  ( x ^ 0 = x )  XOR of any number with zero is same number 
//
//  x ^ y ^ z = x ^ z ^ y = y ^ x ^ z  (Associativity)
//                      



#include<bits/stdc++.h>
using namespace std ;

int main()
{

// Swap  two numbers Using XOR Operator ==>

    int a = 4, b = 6;
    cout<<a<<" "<<b<<endl;


    a = a ^ b;

    b = b ^ a;   //because we difine a = a ^ b; above so 
    // b = b ^ (a ^ b) 
    //   = b ^ b ^ a     (because associative)
    //   = 0 ^ a         (same number XOR is zero)
    //   = a             (XOR with any number is that number)
    //
    // b = b ^ a =  a

    a = a ^ b ;
    // a = (a ^ b) ^ a  ( b = a )(we proof above)
    //   = a ^ a ^ b
    //   = b          ( a ^ a = 0) and ( 0 ^ b = b)

    cout<<a<<" "<<b<<endl;


/* 
// Question ==>
// Given array a of n integers. All integers are present in even 
// count except one. Find that one integer which has odd count 
// in O(N) time complexity and O(1) space Complexity .
// 
// Constraints - 
//   N < 1e5
//   a[i] < 1e5
// 
// 9
// 2 4 6 7 7 4 2 2 2
// 
*/


// We can also do this question using hashing and in hashing time
// complexity O(N) but space Complexity will also be O(N)
//
// If we use STL then time complexity will not be O(N)
//   
//     
// in this question we take all numbers XOR and we know that
// if we take 2 same number XOR then 0 comes so the numbers which
// are even times will become zero because of associativity
// and only odd times number will remain
//
//     a ^ b ^ a ^ c ^ d ^ a ^ b ^ d ^ c ^ a ^ b 
//   = a ^ a ^ a ^ a ^ b ^ b ^ b ^ c ^ c ^ d ^ d
//   =   0   ^   0   ^   0   ^ b ^   0   ^   0 
//   =   0 ^ b ^ 0
//   =   b (because odd times)


    int n;   cin>>n;
    int x;
    int ans = 0;
    for(int i =0; i<n; i++)
    {
        cin>>x;
        ans ^= x;
    }
    cout<<ans<<endl;




}





























