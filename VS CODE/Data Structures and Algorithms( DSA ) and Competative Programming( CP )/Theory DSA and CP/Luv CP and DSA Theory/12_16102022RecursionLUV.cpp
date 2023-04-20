


/// When any function call itself called as Recursive Function.

/// For Time Complexity of Recursive Function see the bottom of the page
/// To calculate the time complexity of recursive function 
/// focus on the main 2 points
/// 1. Number of function/recursive call means how many times function is called
/// 2. What is complexity of each function


// #include<bits/stdc++.h>
// using namespace std;

// void func()
// {
//     func();
// }

// int main()
// {
//     func() ;
// }

// the above code is infinite loop function
// so it will give segmentation fault not Time Limit Exceed





// To remove the segmentation fault  we give a base condition
// To remove the segmentation fault  we give a base condition
// To remove the segmentation fault  we give a base condition


// #include<bits/stdc++.h>
// using namespace std;

// void func(int n)
// {
//     if(n==0) return ;
//     cout<<n<<endl;  // this line will print  5 4 3 2 1
//     // if we write  cout<<n<<endl;  before the function call then firstly func(5) will call and 5 will be printed 
//     // and then func(4) call after this 4 will be printed and func(3) call then 3 will be printed and func(2) call 
//     // then 2 will be printed and then func(1) call then 1 will be printed and func(0) call then n will be zero 
//     // means n = 0 so it will start returning so func(1) will be completed and then func(2) then func(3) then
//     // func(4) and then func(5) will be completed and function will be end.     
//     // n = 0  then it    

//     func(n-1);

//     cout<<n<<endl;  // this line will print  1 2 3 4 5
//     // if we write  cout<<n<<endl;  after the function call then firstly func(5) call then
//     // func(4) call then func(3) call then func(2) call then func(1) call then func(0) call then n will be zero means 
//     // n = 0  then it will be start return  now firstly  func(1) wll be completed and 1 will be printed
//     // then  func(2) wll be completed and 2 will be printed and so on and at the end  func(5) wll be
//     // completed and 5 will be printed and function will be completed
// }

// int main()
// {
//     func(5) ;
// }





/// calculate the Factorial of number n
/// calculate the Factorial of number n
/// calculate the Factorial of number n


#include<bits/stdc++.h>
using namespace std;

int Factorial(int n)
{
    if(n==0) return 1;
    return n * Factorial(n-1) ;
}

int main()
{
    int n;
    cin>>n;

    cout<<Factorial(n);
}


/// To calculate the time complexity of recursive function 
/// focus on the main 2 points
/// 1. Number of function/recursive call means how many times function is called
/// 2. What is complexity of each function means in each fuction call how many iteration is executed

// for factorial question  Time Complexity
// 1. Number of function/recursive  call of factorial n  -->  n   because from every n to 0, factorial n  will be called one times except 0 
// 2. What is complexity of each function -->   o(1) + o(1)   because first o(1) for if condition and second o(1) for return statement

// Time Complexity = n * ( o(1) + o(1) ) =  n * o(1)   =   o(n) 





