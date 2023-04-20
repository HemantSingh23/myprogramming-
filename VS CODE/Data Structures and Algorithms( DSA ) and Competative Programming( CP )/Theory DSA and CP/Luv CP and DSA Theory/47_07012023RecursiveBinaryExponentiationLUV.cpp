


//
//  // Binary Exponentiation ==> Recursive Method
//
// it is a method to calculte the power of any number
// Here we discussed recursive method of binary exponetiation
// it is slower than iterative method
//
//

// here a , b <= 10^9 and M <= 10^9
// here a , b <= 10^9 and M <= 10^9
// here a , b <= 10^9 and M <= 10^9
//
// if we want to calculate a raised to power b then
// Time Complexity = log(b)  using Binary Exponentiation 
//
//
// // //   why binary exponentiation  not pow() function    ====>
// // //   why binary exponentiation  not pow() function    ====>
//
// pow() return double datatype which is not accurate 
//
//  we use binary exponentiation because if we use pow() function
//  so pow() function return the answer in double datatype which
//  is not accurate so we can get wrong answer in online CP
//  that's why we use  binary exponentiation
//
//
// 
// // //   why binary exponentiation  not using loops   ====>
// // //   why binary exponentiation  not using loops   ====>
//
// becuase binary exponentiation has less complexity than the 
// complexity of using loop(loop time complexity == O(N))
//
// although we can also use  loop to calculate the power of 
// any number and take modulo if result is too big
// but if we use loop for calculating the power then it's
// time complexity will be O(N) here N is the value of power
// ex-> if we want a^b then Time Complexity = O(b)
//
// 
//
//





//
// here we assume a and b are less than 10^9
// means a , b <= 10^9 and M <= 10^9
//
// if a =2, b = 16 then
//
// a^16 = a^8 * a^8 
//  a^8 = a^4 * a^4
//  a^4 = a^2 * a^2
//  a^2 = a^1 * a^1
// 
// uisg this we can calculate 2^16 in log(b) time complexity
// because we can divide number b by 2 only log(b) times
//
//
//
// if a =3, b = 13 then
//
// a^13 =   a * a^12 
// a^12 = a^6 * a^6
//  a^6 = a^3 * a^3
//  a^3 =   a * a^2 
//  a^2 = a^1 * a^1
//  a^1 =   a * a^0
//
//
//
//
// if b is odd then
// if b is odd then we break a *a^(b-1) == a * a^(b/2) * a^(b/2)  // // // because b is odd integer so b/2 and (b-1)/2 will be equal
// if b is even then we break a^(b/2) * a^(b/2)
//
// 
// uisg this we can calculate 2^16 in log(b) time complexity
// because we can divide number b by 2 only log(b) times



#include<bits/stdc++.h>
using namespace std;

const int M = 1e9+7 ;

//
// here we assume a and b are less than 10^9
// means a , b < 10^9 and M < 10^9
//

int binExpRecur(int a , int b)
{  // it means we want to find a raise to power b 

    // // // // // Using Recursion and Binary Exponetiation  ====>
    // // // // // Using Recursion and Binary Exponetiation  ====>
    // // // // // Using Recursion and Binary Exponetiation  ====>


    // method 1 =>    // method 1 =>    // method 1 =>    
    // method 1 =>    // method 1 =>    // method 1 =>    
    //
    // // Using this we can find the a raise to power b
    // // But here recursion call will be too much so complexity
    // // will be increses so we store the recursion call
    // // see method 2
    //
    //
    // if(b==0) return 1;
    // if(b&1) // using binary number we find b is odd
    // {
    //     return a * binExpRecur(a, b/2) * binExpRecur(a, b/2) ;
    // }
    // else
    // {
    //     return binExpRecur(a, b/2) * binExpRecur(a, b/2) ;
    // }


    // method 2 =>     // method 2 =>     // method 2 =>
    // method 2 =>     // method 2 =>     // method 2 =>
    //
    // // Better method than method 1 because here we store the
    // value of recursive call
    // Time Complexity = log(b) because here we divide by 2 in
    // each call like divide and conquer
    //

    // // // ///   Method 2  ==>  1st way  ==>
    // // // ///   Method 2  ==>  1st way  ==>
    // if(b==0) return 1;
    // long long  res = binExpRecur(a, b/2) ;
    // if(b&1) 
    // {
    //     return (a *(res * res) % M) % M ;
    // }
    // else
    // {
    //     return (res * res) % M ;
    // }


    // // // ///   Method 2  ==>  2nd way  ==>
    // // // ///   Method 2  ==>  2nd way  ==>
    if(b==0) return 1;
    int res = binExpRecur(a, b/2) ;
    if(b&1) 
    {
        return (a *(res * 1LL * res) % M) % M ;
    }
    else
    {
        return (res * 1LL * res) % M ;
    }
}



int main()
{
    double d = 1e24;
    cout<<fixed<<setprecision(3)<<d<<endl;
    // not acccurate answer because of double which store big
    // value but not accurately
    cout<<pow(2,20)<<endl;
    // pow() function return double so it is not recommended 
    // to use in Competitive Coding because double can store 
    // the very big value but not accurately




// // //   Calculate a raised to power b   =====>
// // //   Calculate a raised to power b   =====>
// // //   Calculate a raised to power b   =====>

    int a=2, b =13 ;


// // //  Using loops we will calculate power   ====>
// // // Using loop, printing of a raise to power b
    // //
    // long long int ans = 1;
    // for(int i=0; i<b; i++)
    // {
    //     ans *= a;
    // } 
    // cout<<ans<<endl;
    // // above code can print a raise to power b but in O(b)
    // // which is not good .


// Using Recursion and Binary Exponetiation
    cout<<binExpRecur(a,b)<<endl;
    // it means we want to find a raise to power b


}













