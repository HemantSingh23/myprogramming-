



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//
//
// for lowest and highest prime factor of any number   ====>
// for lowest and highest prime factor of any number   ====>
// for lowest and highest prime factor of any number   ====>
//
// // //    Time Complexity  ==  n * log( log(n) )  



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//
//
// we also find the all prime Factors of a number  ==>
// we also find the all prime Factors of a number  ==>
// we also find the all prime Factors of a number  ==>
// we also find the all prime Factors of a number  ==>
//
//  Time Complexity == O( log(N) )  
//  Time Complexity == O( log(N) )  
//



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//
//
// For finding the all the divisors of number   =====>
// For finding the all the divisors of number   =====>
// For finding the all the divisors of number   =====>
//
//  Time Complexity == O( N * log(N) )  
//  Time Complexity == O( N * log(N) )  
//
//



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+10;


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// //  for finding whether number is prime or not
vector<bool> isPrime(N,1);
//
// for lowest and highest prime factor of any number
vector<int> lp(N,0) , hp(N,0); // lp(lowest prime)  // hp(highest prime)



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
vector<int> PrimeFactors ; // for storing the all the prime factors




//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// //  for finding the all the divisors of number
vector<int> divisors[N] ; // lp(lowest prime)  //  hp(highest prime)
// // for finding the divisors use N <= 1e5   although it is run 
// in vs code but in online CP it will not run  and give TLE TLE TLE
//
// time complexity for finding the all the divisors 
// Time Complexity == O( N * log(N) )  
//
int Sum[N] ;  // it is store the sum of all factors of i
//




int main()
{


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//
// // //  for finding whether number is prime or not =====>
// // //  for finding whether number is prime or not =====>
// // //  for finding whether number is prime or not =====>
//
//
    cout<<"For finding whether number is prime or not =====>  "<<endl;
    cout<<"For finding whether number is prime or not =====>  "<<endl;
    cout<<"For finding whether number is prime or not =====>  "<<endl;


    // if we want number is prime or not and  LowestPrime and HighestPrime ====>
    // if we want number is prime or not and  LowestPrime and HighestPrime ====>
    //
    isPrime[0] = isPrime[1] = false ;
    for(int i =2; i<N; i++)
    {
        if(isPrime[i]==true)
        {
            lp[i] = hp[i] = i ;
            for(int j =2*i; j<N; j+=i )
            {
                isPrime[j] = false ;
                hp[j] = i ;
                if(lp[j]==0)
                {
                    lp[j] = i ;
                }
            }
        }
    }
    

//
//
//// these below methods for finding only highest prime is discussed
//// in the video no. 78(EP 64.2) of 112 playlist of luv channel from
//// video time 1:36 and in the file no 60 in which hackerearth
//// question  "Hacker Decrypting Messages"  is discussed
//
// 
    // // //  if we want only LowestPrime and HighestPrime ====>
    // // //  if we want only LowestPrime and HighestPrime ====>
    // //  1st way  ===>      1st way  ===>     1st way  ===>
    // //
    // for(int i =2; i<N; i++)
    // {
    //     if(hp[i]==0)  //  here we can also use  if(lp[i]==0) 
    //     {
    //         lp[i] = hp[i] = i ;
    //         for(int j =2*i; j<N; j+=i)
    //         {
    //             hp[j] = i ;
    //             if(lp[j]==0)
    //             {
    //                 lp[j] = i ;
    //             }
    //         }
    //     }
    // }


    // //  if we want only LowestPrime and HighestPrime ====>
    // //  if we want only LowestPrime and HighestPrime ====>
    // //  2nd way  ===>      2nd way  ===>     2nd way  ===>
    // //
    // for(int i =2; i<N; i++)
    // {
    //     if(lp[i]==0)    //  here we can also use  if(hp[i]==0) 
    //     {
    //         for(int j =i; j<N; j+=i)
    //         {
    //             hp[j] = i ;
    //             if(lp[j]==0)
    //             {
    //                 lp[j] = i ;
    //             }
    //         }
    //     }
    // }



    // // // if we want only  HighestPrime   =====>  1st way
    // // // if we want only  HighestPrime   =====>  1st way
    // //  1st way  ===>    1st way ===>     1st way  ===>
    // //
    // for(int i =2; i<N; i++)
    // {
    //     if(hp[i]==0)
    //     {
    //         for(int j =i; j<N; j+=i)
    //         {
    //             hp[j] = i ;
    //         }
    //     }
    // }

    // // // if we want only  HighestPrime   =====>  2nd way
    // // // if we want only  HighestPrime   =====>  2nd way
    // //  2nd  way  ===>    2nd  way ===>     2nd  way  ===>
    // //
    // for(int i =2; i<N; i++)
    // {
    //     if(hp[i]==0)
    //     {
    //         hp[i] = i ;
    //         for(int j =2*i; j<N; j+=i)
    //         {
    //             hp[j] = i ;
    //         }
    //     }
    // }




    // // // if we want only  LowestPrime  ====>   1st way  ===>
    // // // if we want only  LowestPrime  ====>   1st way  ===>
    // //  1st way  ===>     1st way  ===>    1st way  ===>
    // //
    // for(int i =2; i<N; i++)
    // {
    //     if(lp[i]==0)
    //     {
    //         for(int j =i; j<N; j+=i)
    //         {
    //             if(lp[j]==0)
    //             {
    //                 lp[j] = i ;
    //             }
    //         }
    //     }
    // }

    // // // if we want only  LowestPrime  ====>   2nd way  ===>
    // // // if we want only  LowestPrime  ====>   2nd way  ===>
    // //  2nd way  ===>     2nd way  ===>    2nd way  ===>
    // //
    // for(int i =2; i<N; i++)
    // {
    //     if(lp[i]==0)
    //     {
    //         lp[i] = i ;
    //         for(int j =2*i; j<N; j+=i)
    //         {
    //             if(lp[j]==0)
    //             {
    //                 lp[j] = i ;
    //             }
    //         }
    //     }
    // }





    cout<<endl<<"here 1 means number is prime number and 0 means number is non-prime number"<<endl<<endl;
    for(int i =2; i<=100; i++)
    {
        cout<<"Number "<<i<<" is "<<isPrime[i]<<"  and has LowestPrime "<<lp[i]<<"  and HighestPrime "<<hp[i]<<endl;
    }




//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//
// // For finding the all the prime Factors ==>
// // For finding the all the prime Factors ==>
// // For finding the all the prime Factors ==>
//
// // we can find prime Factors using lowest prime 
// // or highest prime
//
// Time Complexity = log(n)
//
    cout<<endl<<endl;
    cout<<"For finding the all the prime Factors   =====>  "<<endl;
    cout<<"For finding the all the prime Factors   =====>  "<<endl;
    cout<<"For finding the all the prime Factors   =====>  "<<endl;

    int num;   cin>>num ;


    // // if we want to know that what is the count of each the 
    // // prime factors of a number  then we can use map
    // // either unordered__map or simple map
    // use unordered_map for better time complexity

    // map<int,int> prime_factors_ct ; // storing the count of prime factors
    unordered_map<int,int> prime_factors_ct ; // storing the count of prime factors


    // we can use either highest prime or lowest prime
    // for finding the prime factor of a number
    while(num>1)
    {
        int primefactor = hp[num];    // int primefactor = lp[num];

        while(num%primefactor == 0)
        {
            num /= primefactor ;

            PrimeFactors.push_back(primefactor) ;

            // for finding the Count of the each prime factors
            prime_factors_ct[primefactor]++;

        }
    }

    cout<<"Prime Factors of the number you entered are - "<<endl;
    for(int factor  : PrimeFactors)
    {
        cout<<factor<<" ";
    }
    cout<<endl;


    cout<<"Count of the each prime factors of the number you entered"<<endl;
    for(auto factor : prime_factors_ct)
    {
        cout<<"Prime factor : "<< factor.first<<"    Count : "<<factor.second<<endl;
    }


  



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//
// //  for finding the all the divisors of number  ====>
// //  for finding the all the divisors of number  ====>
// //  for finding the all the divisors of number  ====>
//
//
// for finding the divisors use N <= 1e5   although it is run in
// vs code but in online CP it will not run  and give TLE TLE TLE
//
// // // //   Time Complexity == O( N * log(N) )
// // // //   Time Complexity == O( N * log(N) )
// // // //   Time Complexity == O( N * log(N) )
//
    cout<<endl<<endl;
    cout<<"For finding the all the divisors and sum of number   =====>  "<<endl;
    cout<<"For finding the all the divisors and sum of number   =====>  "<<endl;
    cout<<"For finding the all the divisors and sum of number   =====>  "<<endl;

    for(int i =2; i<N; i++)
    {
        for(int j =i; j<N; j+=i )
        {
            divisors[j].push_back(i) ;
            Sum[j] += i ;
        }
    }
    for(int i =2; i<20; i++)
    {
        cout<<i<<" has divisors  ";
        for(int j =0; j<divisors[i].size(); j++ )
        {
            cout<<divisors[i][j]<<" " ;
        }
        cout<<endl;
        cout<<"And the sum of the all the divisors of  "<<i<<" is "<<Sum[i];
        cout<<endl;

    }

    







}



















































