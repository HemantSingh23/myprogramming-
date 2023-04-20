



//
//  // Binary Exponentiation ==> Iterative Method
//
// it is a method/algorithm to calculte the power of any number
//
// Here we discussed iterative method of binary exponetiation
// it is faster than recursive method
//
//
//  // Time Complexity = O(number of total bits in binary number of b) 
//  // Time Complexity = O(number of total bits in binary number of b) 
//  // Time Complexity = O(number of total bits in binary number of b) 


// here a , b <= 10^9 and M <= 10^9
// here a , b <= 10^9 and M <= 10^9
// here a , b <= 10^9 and M <= 10^9
//
//
// here we assume a and b are less than 10^9
// means a , b <= 10^9 and M <= 10^9
//
//
// In this method if we want to find out a raise to power b 
// then we break b in the sum of minimum power of 2
// using binary number
//
//
// ex => if 3^13 then we   3^(1101)  binary of 13 is 1101
//    3^(1101) 
//    3^(8+4+0+1)
//    3^8 * 3^4 * 3^0 * 3^1
//
//   // more explaination is given below with code
//
//
//  // Time Complexity = O(number of total bits in binary number of b) 
//  // or   
//
  


#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7 ;

// here we assume a and b are less than 10^9
// means a , b < 10^9 and M < 10^9

int binExpIter(int a , int b)
{   // it means we want to find a raise to power b
    int ans = 1; 
    while(b)  // // while(b>0)
    {
        if(b&1)// here it check 0th bit means whether 0th is 1 or not 
        {
            ans = (ans * 1LL * a) %M ;
        }
        a = (a * 1LL * a)%M;
        b>>=1;
    }

    return ans;
    //
    //
    // here we ans =1 and if 0th bit of binary number of b will be
    // 1 so if condition will be true then we multiply ans and a
    // and after this a = a * a (PLEASE NOTICE HERE WE MULTIPLY
    // a And a ) and then we right shift the binary number of b 
    //
    //
    // ans = 1;
    // initially value of  a = 3  ,  b = 1101  ,  ans = 1
    //
    //    b      ans = ans * a          a  =   a * a
    // 1101      1 * 3 = 3                     3 * 3 = 3^2                    
    //  110      3                           3^2 * 3^2 = 3^4                
    //   11      3 * 3^4  = 3^5              3^4 * 3^4 = 3^8          
    //    1      3^5 * 3^8 = 3^13            3^8 * 3^8 = 3^16   
    //b is 0 then while loop will be break      
    //
    //    0 so while loop will be break and ans will be return
    //
    //

}



int main()
{
    int a=2123123 , b=1231231 ;


// Using iterative and Binary Exponetiation
    cout<<binExpIter(a,b)<<endl;
    // it means we want to find a raise to power b


}







































