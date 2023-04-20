




// Operation on  binary Numbers    ===>
// set bits and unset bits    ===.



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


// 
//   
//
// Binary number =>  1 0 1 1 1 0 1 1
//     
// binary number indexing is done from left to right which is 
// start from 0th bit to nth bit
// left most bit is called Least Significant Bit(LSB) (0th bit)  and                                            
// right most bit is called Most Significant Bit(MSB) (nth bit)                                              
//                                                    
//      1   0   1   1   1   0   1   1                                             
//     MSB                         LSB                                             
//   (nth bit)                   (0th bit)                              
//                  
//                                  
//   // if any bit is 1 then that bit will be set  and if bit
//   // is 0 then that bit will be unset   
//  
// in the above binary number  6 bits are set and 2 bit are unset                                          
//>>>
//                                                    
//
//
//
// // To check the ith bit of any binary number is set or not ==>
//
// number 5 has binary  number 101 =>
//
// in this we check 1st bit on this is set or not
// so for this we take a binary numer such that whose only 1st bit
// is set so that will be  010
// and now we take the & of both the binary number
// so AND will be 000 so 1st bit of 5 or binary(101) is not set
//
//



#include<bits/stdc++.h>
using namespace std ;

void printBinary(int num)
{
    for(int i = 10; i>=0 ; i--)
    {
        cout<<((num>>i)&1);
    }
    cout<<endl;
}

int main()
{
    printBinary(9);    // 00000001001
    int a  = 9;

//  // To check any bit is set or not 
    int i = 0; // check ith bit is set or not in number 9 
    if((a&(1<<i)) != 0)
    {
        cout<<"Set bit"<<endl;
    }
    else
    {
        cout<<"Not set bit"<<endl ;
    }




//  // Set any bit in any binary Number
    // for this we take OR with the binary number whose ith bit is set
    // example if 00000001001 is binary number and if we set 1st bit
    // then we take OR(|) with 00000000010 then in the result binary
    // numer 1st it will be set which is 00000001011 which we want

    printBinary( a | (1<<1)); // print 00000001011




//  // Unset any bit in any binary Number
    // for this if we want to unset the 3rd bit of numer 9 then
    // first we take the binary number whose ith bit is set and 
    // all other bit are 0's and then invert the that binary numer
    // and then take the AND of inverted binary number with
    // binary number of 9 
    // in this example number 9 has binary number 00000001001
    // and we want to unset its 3rd bit so first we take a binary number
    // whose only 3rd bit is set that is 00000001000 then invert it
    // that is 11111110111 then take AND of 11111110111 and 00000001001
    // which is 00000000001 that has 3rd unset bit of number 9
    //
    //
    // we find inverted bit using ~(tilde) called tilda
    // it is called Bitwise Complement Operator 

    printBinary( a & (~(1<<3))) ;




//  //  Toggle the bit ==>
    // toggle means make 0 to 1   or   1 to 0
    // in this we can toggle the ith bit of any binary number
    // for this we take binary numer whose only ith bit is 1 
    // and then we take XOR 
    // if we want to toggle 2nd bit of number 9 then take binary number
    // whose 2nd bit is 1 so 0000000100 then take
    // XOR of 0000000100 and 00000001001 so 
    // result will be 00000001101

    printBinary(a ^ (1<<2)); // toggle 2nd bit
    printBinary(a ^ (1<<3)); // toggle 3rd bit




//  // Bit Count ==>
    // It means how many bits are set
    //
    int ct = 0;
    for(int i =31; i>=0; i--) // because number is of 32 bit
    {
        if((a&(1<<i)) != 0)
        {
            ct++;
        }
    }
    cout<<ct<<endl;





//  // inbuilt functio of Bit Count ==>
    // 
    // __builtin_popcount(a);   for integer
    //
    // __builtin_popcountll((1LL<<35)-1) for long long

    // for integer =>
    cout<<__builtin_popcount(a)<<endl;


    // for long long =>
    // cout<<__builtin_popcount(1LL<<35)<<endl;  // warnig and give wrong
    // answer because this function works for integer not for long long 

    cout<<__builtin_popcountll(1LL<<35)<<endl; // print 1
    cout<<__builtin_popcountll((1LL<<35)-1)<<endl; // print 35
    







}

