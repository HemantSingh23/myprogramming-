



// // Binary Operators ==>
//
// AND , OR , XOR , NOT ,  LEFT SHIFT ,  RIGHT SHIFT 
//
// above given  operator are the binary operators
//





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




// Table ==>
//
//                     Input    AND(&)   OR( | )   XOR(^)
//                     0  0      0        0        0                               
//                     0  1      0        1        1                               
//                     1  0      0        1        1                               
//                     1  1      1        1        0                              
//                                                           
//         
//  NOT operator =>   1 -> 0   and     0 -> 1  
//    
//  Left Shif    =>  symbol( << )   It shift the binary of any number in left direction                                     
//  Right Shif   =>  symbol( >> )   It shift the binary of any number in right direction                                     
//      
//   
//example of left and right shift ==>
//   
//
//////////    ex1.=>   3 then its binary will be      11        
//        
//    Left Shift ==>
//          
//    3<<1 means 3 left shift 1 so its binary 11<<1 
//    so its new binary will be 110
//
//    Now if 3 left shift 2 means 3<<2 so 11<<2 
//    then 1100(new binary)                                 
// 
//
//    Right Shift ==>
//       
//    3 right shift 1 means 3>>1 so 11>1 then 1 (new binary)
//
//
//////////    ex2.=>  6 then its binary will be 011
//
//    Right Shift ==>
//
//    6 right shift 1 means 6>>1 so 
//    110>>1 then 11(new binary) and this(11) is equal to 3
//
//
//    6 right shift 2 means 6>>2 so 
//    110>>2 then 1(new binary) and this(1) is equal to 1
//
//
//
// Calculation of 2 raise to power using left shift ==>
//
//  1 number binary is 1 so
//   1<<0 means 1 = 1        means 2 power to 0 
//   1<<1 means 10 = 2       means 2 power to 1 
//   1<<2 means 100 = 4      means 2 power to 2 
//   1<<3 means 1000 = 8     means 2 power to 3 
//   1<<4 means 10000 = 16   means 2 power to 4 
//   1<<5 means 100000 = 32  means 2 power to 5
//
//   so 1<<n  means 2 power to n 
//
// means we can calculate  2 raise to power of any number using
// leeft shift( << )  without using pow() function
//
// 
//
// In c++ integer is of 32 bit 
// 
//
//



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






#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<INT_MAX<<endl;

    // int a = (1<<32) - 1 ;
    // cout<<a<<endl; // it will give warning because
    // we may store (1<<32) - 1 because it has only 32 bits
    // but we can't store (1<<32)  because it has 33 bits
    // and here first (1<<32) it will calculate and (1<<32) is 33 bits
    // so we can't store it 

    int b = (1LL<<31) - 1 ;
    cout<<b<<endl;  // it will print the same value as of INT_MAX
    //


    int c = (1LL<<32) - 1 ;
    cout<<c<<endl;   // Now it will run and (1<<32) it will be calculate
    // but it print -1 because it is overflow
    // because it is a signed interger
    // singned integer are those whose  state both positive
    // and negative numbers and one bit is reserved for sign
    // one bits tells whether number is positive or negative
    // that's why it store the 31 bit number and 1 bit of sign
    // integer datatype has range from -x to +x  (probably)


    // unsingned integer are those whose 
    // state  positive numbers and is does not any signed bit
    // that's why is store the number of 32 bit
    // unsingned integer datatype has range 0 to 2x (probably)
    unsigned int x =  (1LL<<31) - 1 ;
    cout<<x<<endl; // it will also print same as INT_MAX

    unsigned int y =  (1LL<<32) - 1 ;
    cout<<y<<endl; // it will not owerflow and
    //  print the value of (1LL<<32) - 1 


    

   

}














