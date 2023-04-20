






//
// if number is smaller than 10^6 then the number of its 
// distinct prime factor will be nearly 10
//

//
// // Also see time complexity below
//
// // // Total Time Complexity =  log(N) * q * 100 * 
// N is the size of array and q is the no of queries and 100 is 
// the two loop of 10 * 10 for maximum 10 prime factor
//
 



// Hackerearth Question

/* 

Questioin link =>
https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-2/practice-problems/algorithm/hacker-with-prime-bebe28ac/


video link =>
https://www.youtube.com/watch?v=Dg5D-k1rUgY&list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&index=78


*/


//
// // Also see time complexity below
//
// // //  Total Time Complexity =  log(N) * q * 100 * 
//
// N is the size of array and q is the no of queries and 100 is 
// the two loop of 10 * 10 for maximum 10 prime factor
//
 

//
// if we multiply the first 10 prime numbers then
// 2 * 3 * 5 * 7 * 11 * 13 * 17 * 19 * 23 * 29 > 1e10 
// 2 * 3 * 5 * 7 * 11 * 13 * 17 > 1e6  
//
// because first multiplication of first 10 prime factor is 
// of the range 1e10 then we can say  if number is smaller
// than 10^6 then it has maximum 10 prime factor
//
//



//
// // Also see time complexity below
//
// // //  Total Time Complexity =  log(N) * q * 100 * 
//
// N is the size of array and q is the no of queries and 100 is 
// the two loop of 10 * 10 for maximum 10 prime factor
//
 

// in the question we have to make a number such that it has
// factor with only 2 prime number ex. 3*5 or 2*3 or 5*7 or
// 11*13 or any other thing
//
// but it can't have 3*3*5 because here there are 3 numbers
//
//
// let array A is 2 , 22 , 7 , 10
// and  queries Q are given below
// 16
// 429
// 42
//
// then if query is 16 so we have to check whether it is a 
// multiple of two prime numbers or not so for this
// we selet any number from array and divide the query untill
// we get the result that whether it is a  multiple of two 
// prime numbers or not 
// so if we select 2 from array and if we divide the query
// two times means 16/2 which is 8 then 8/2 which is 4
// and so 4 = 2*2 which is multiple of only two prime 
// so its answer is YES (according to question)
//
// now query 429 that can also written as 3 * 11 * 13
// but we can't divide it becuase there is no number in array
// which can divide it so answer is NO (according to question)
//
//
// now query 42 that can also written as 2 * 3 * 7
// so we can make 2 * 7 if we divide by 7 from the array
// or 3 * 7 if we divide by 7 from the array and in both
// query will become multiple of only two prime number
// so its answer is YES (according to question)
//
//   16 => YES
//  429 => NO
//   42 => YES


//
// if number is smaller than 10^6 then it has maximum 10  distinct 
// prime factor
//


//
// // Also see time complexity below
//
// // //  Total Time Complexity =  log(N) * q * 100 * 
// N is the size of array and q is the no of queries and 100 is 
// the two loop of 10 * 10 for maximum 10 prime factor
//
 

#include<bits/stdc++.h>
using namespace std;

const int N = 2e6 +10;
int a[N];
int hp[N] ;
int canRemove[N]  ; 
// canRemove[i] -> 
// if i can be removed then canRemove[i] = 1
// if i can't be removed then canRemove[i] = 0
//
int hsh[N] ;


vector<int> distinctPrimefactor(int x)
{
    vector<int> ans;
    // here ans.size() can be maximum 10
    // because if x <=1e6 then no of max prime factor is 10 
        
    while(x>1)
    {
        int pf = hp[x]; // pf => prime factor
        while(x%pf==0) x /= pf  ;
        ans.push_back(pf) ;
    }
    return ans;
}

int main()
{
    for(int i=2; i<N; i++)
    {
        if(hp[i]==0)
        {
            for(int j=i; j<N; j += i)
            {
                hp[j] = i ;
            }
        }
    }   
    int n , q;
    cin>>n>>q;
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        hsh[x] = 1; 
    }
    for(int i=2; i<N; i++)
    {
        if(hsh[i])
        {
            for(long long j=i; j < N ; j *= i)
            {
                canRemove[j] = 1; 
            }
        }
    }
    while(q--)
    {
        int x;   cin>>x;
        vector<int> pf = distinctPrimefactor(x) ; // log(N)
        // // here pf.size() can be maximum 10
        // because if x <=1e6 then no of max prime factor is 10 
        // so the time complexity of below loop is O(10*10) = O(100)
        int ispossible = false;
        for(int i=0; i< pf.size(); i++)
        {
            for(int j=i; j<pf.size(); j++)
            { 
                int product = pf[i] * pf[j] ;
                if(i==j  &&   x%product != 0)
                {
                    continue;
                }
                int toremove = x/product ;
                if(canRemove[toremove] == 1  || toremove ==1 )
                {
                    ispossible = true ;
                    break;
                }
            }
            if(ispossible) break; // if(ispossible==true) break;
        }

        cout<<(ispossible ? "YES\n" : "NO\n");
    }   

}

 

//
// if number is smaller than 10^6 then it has maximum 10  distinct 
// prime factor
//
// so time complexity of two loop will be = O(10 * 10 ) = O(100)
//  
//
// // // Total Time Complexity =  log(N) * q * 100 * 
// N is the size of array and q is the no of queries and 100 is 
// the two loop of 10 * 10 for maximum 10 prime factor
//
 
















