




#include <iostream>
#include <vector>
#include <string>

#include<bits/stdc++.h>
using namespace std;

int findgcd(int a , int b)
{ 
    // in this b is divisor and a is dividend
    if(a%b == 0)  return b; // a%b is remainder and b is divisor
    // if remainder will be zero then that divisor will be GCD or HCF


    // if(b==0) return a;  
    //
    // here b is divisor and a is dividend
    // this and above condition are same but it is a next step
    //  of the above condition because when remainder will be 
    // zero and still we make remainder (which is zero) as 
    // divisor then  dividend will be the GCD or HCF
    // here recusrive call also more than the above condition




    return findgcd( b , a%b );// here b will become dividend and
    // a%b(which is a remainder will become the divisor)

}

int main ()
{
    // GCD or HCF
    cout<<" Using own writen function gcd is  "<<findgcd(4,12)<<endl;
    cout<<" Using own writen function gcd is  "<<findgcd(18,12)<<endl;

    // LCM
    cout<<" Using own calculation lcm is  "<< 12 * 18 / gcd(12, 18)<<endl;
    cout<< 12 * 4 / gcd(12, 4)<<endl;






    cout<<" Using inbuilt function we will find lcm() , gcd() and __gcd()  is  ===>   "<<endl;


    cout<<" Using inbuilt function lcm(), lcm of 10 and 40 is  "<<lcm(10,40)<<endl;  //  lcm() is a bulit-in function supported in C++ 17  
    cout<<" Using inbuilt function gcd(), gcd of 10 and 40 is  "<<gcd(10,40)<<endl;  //  gcd() is a bulit-in function supported in C++ 17  


    //
    // cout<<__lcm(10,40)<<endl;  // so __lcm() give error  because  __lcm() is not any built-in function  


    cout<<" Using inbuilt function __gcd(), gcd of 10 and 40 is  is  "<<__gcd(10,40)<<endl;    // although it works but sometime give warning and error 
    // not proper support in C++ 17 give error include path error find 
    // temporary solution only using some changes   c_cpp_properties.json   file . 
    //
    // the __gcd() is not proper supported in C++17 so it give    " identifier __gcd is undefined  "  like a warnig in C++17
    // so use gcd() bulit-in function  directly instead of __gcd() whihc give   " identifier __gcd is undefined  " 








}  

// Time Complexity = log(N) 
















