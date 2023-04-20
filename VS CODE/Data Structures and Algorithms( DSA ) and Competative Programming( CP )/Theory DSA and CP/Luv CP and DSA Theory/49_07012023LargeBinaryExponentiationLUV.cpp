





//
//
// //   Large Binary Exponentiation ==>                                    
//
// here we discussed if only the value of a >= 10^9
//
// here  a > 10^9 ,  and  b < 10^9  and  and  M < 10^9 
//
//
// (a ^ b) %M =  ( (a % M) ^ b ) % M




// if value of a <= 10^18  then if we use binExpIter(a,b) in
// int main() function then we take a %= M  in binExpIter(a,b) function


// for any value of a we can use  if a = x^y  , b 
// binExpIter(binExpIter(x,y),b)  in the int main() function 
// then we don't need to take a %= M  in binExpIter(a,b) function 
//
// but the above method is recommended for if a>1e18  




#include<bits/stdc++.h>
using namespace std;
const long long M = 1e9+7 ;


int binExpIter(long long a , long long b)
{

    //  if value of a <= 10^18  and if we use binExpIter(a,b) 
    //  in the int main() function then we take a %= M 
    a %= M ;  // // if a <= 10^18 and if we use binExpIter(a,b) in int main() function


    // for any value of a we can use if a = x^y  , b 
    // binExpIter(binExpIter(x,y),b)  in the int main() function 
    // then we don't need to take a %= M  in binExpIter(a,b) function 
    //
    // but the above method is recommended for if a>1e18  
    //  for ex => if a = 1e20 or 10^20 then we need to use the
    //  binExpIter(binExpIter(10,20),b)  in the int main() function 


    int ans = 1;
    while(b>0)
    {
        if(b&1) ans = (ans * 1LL * a) %M ;
        a = (a * 1LL * a)%M;
        b>>=1;
    }
    return ans;

}

int main()
{
    long long  a=1e18 , b=1231231 ;



// // // if a <= 10^18 or 1e18   for ex =>  a = 10^17 or 1e17 
// // // then we will use the below statements any of one 

// // // cout<<binExpIter(a,b)<<endl; // then need to use a %= M

// // // cout<<binExpIter(binExpIter(10,17),b)<<endl; // if we use
// this then not need to use a %= M




// // // if a > 10^18 or 1e18   for ex =>  a = 10^20 or 1e20 
// // // then we will use the below statement 
// // // cout<<binExpIter(binExpIter(10,20),b)<<endl; // if we use
// this then not need to use a %= M






    cout<<"Here we will calculate 10 raise to power 18  ==>"<<endl;

    // cout<<binExpIter(1e18,b)<<endl;   // this will print
    // the correct value 609250972
    // then we need to take a %= M  in binExpIter(a,b) function

    // cout<<binExpIter(1000000000000000000,b)<<endl;  // in this there are 18 zeros
    // this will print correct value 609250972
    // then we need to take a %= M  in binExpIter(a,b) function

    cout<<binExpIter(binExpIter(10,18),b)<<endl;   // this will print
    // the correct value 609250972

    // // here in the above all three will print the same value  




    cout<<"Here we will calculate 10 raise to power 19  ==>"<<endl;

    // cout<<binExpIter(1e19,b)<<endl; // this will print the wrong 
    // // value  170274152

    // cout<<binExpIter(10000000000000000000,b)<<endl;  // in this there are 19 zeros
    // // this will print wrong value  -798249643

    // // the below line print the correct value 
    cout<<binExpIter(binExpIter(10,19),b)<<endl;  // this will print
    // the correct value 739878830





    cout<<"Here we will calculate 10 raise to power 24  ==>"<<endl;

    // cout<<binExpIter(1e24,b)<<endl; // this will print the wrong 
    // // value  170274152

    // cout<<binExpIter(1000000000000000000000000,b)<<endl;  // in this there are 24 zeros
    // // this will print wrong value  145144804

    // // the below line print the correct value 
    cout<<binExpIter(binExpIter(10,24),b)<<endl; // this will print
    // the correct value 621259536






}













