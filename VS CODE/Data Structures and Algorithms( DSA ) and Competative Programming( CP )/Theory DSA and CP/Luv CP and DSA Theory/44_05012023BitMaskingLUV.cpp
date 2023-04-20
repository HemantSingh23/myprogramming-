




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




/* 

//  // Codeforces Blog link ==>

https://codeforces.com/blog/entry/73558


*/


//
//
//  Bit Masking ==>
//
// It means mask of bits
//
//       
// example =>
// let their are four types of fruits and Three people 
// and each person has fruits find people who has common fruits
//
// Fruit    Index
// Apple      0
// Orange     1
// Banana     2
// Lichi      3
//
//
// Person    Fruit Index
//  1         2 , 3
//  2         0 , 1 , 2
//  3         1 , 3
//
// Here we store the fruit in array for every person
// To find the common fruit we have to find the intersection
// of the fruit arrays of the persons
//
// if we find the intersection of two sorted arrays then the
// Best Time Complexity will be  O(N)   
// so using bit masking we can reduce the Time Complexity
// if the 
//
//
//  // for each person we store the fruits using bit mask
// for 1st person assign binary number such that 2nd bit is 1 
// and 3rd bit also 1 so binary number will be 1100 that is 12
//
// for 2nd person assign binary number such that 0th , 1st and  
// 2nd bit is 1 so binary number will be 0111 that is 7
//  
// for 3rd person assign binary number such that 1st and 3rd
// bit is 1 so binary number will be 1010 that is 10
//  
//
// here we clearly see that we store the fruit in signle number
// 12, 7, 10 instead of array which is very less expensive 
// for memory and Now for common fruit we take the intersection
// of the binary numbers of 12,7,10 or we take AND operation
//
// so for person 1 and person 2
// 1100 AND 0111 so result 0100 so we can say 2nd bit is common
// means 2nd index fruit is common
//
//
//
//  Here Time Complexity = O(No of fruits)
//
// But here we use Bit maksing only for 32 fruit for unsigned
// integer and 64 for unsigned long long
// 
// because if unsigned integer and we have 33 fruit then 
// we can assign 32 fruit but when 33rd fruit then we can't assign
// 33rd fruit because in 33rd we can have 33rd bit because
// we have only 32 bit as we assign bit above in person1,2 and 3
//
// same as for unsigned long long we can't assign more than 64
// because we have only 64 bit
//
//

/* 
// Question ==>
// Consider this problem: There are N≤5000 workers. Each worker
// is available during some days of this month (which has 30
// days). For each worker, you are given a set of numbers, each
// from interval [1,30], representing his/her availability. You
// need to assign an important project to two workers but they
// will be able to work on the project only when they are both
// available. Find two workers that are best for the job — 
// maximize the number of days when both these workers are 
// available.
//
// Lets take input
//
// 5
// 4
// 1 4 7 9
// 6
// 2 9 1 7 25 29
// 7
// 1 23 4 7 9 11 29
// 10
// 2 28 8 7 9 10 30 21 18 19
// 4
// 1 11 29 7

*/




#include<bits/stdc++.h>
using namespace std ;

int main()
{


//  //  // without bit maksing   =====> 
//  //  // without bit maksing   =====>
//  //  // without bit maksing   =====>
    // int n;   cin>>n;
    // vector<int> days[n];
    // for(int i =0; i<n; i++)
    // {
    //     int num_workers;  cin>>num_workers;
    //     for(int j =0; j<num_workers; j++)
    //     {
    //         int day;   cin>>day;
    //         days[i].push_back(day);
    //     }
    // }
    
    // for(int i =0; i<n; i++)
    // {
    //     for(int j =i+1; j<n; j++)
    //     {
    //         // here we take intersection of days[i] and days[j]
    //         // and both are vector days[i] and days[j]
    //         // maximun days can be 30
    //     }
    // }
    // Time Comlplexity = O(N*N*30) 
    // for loops time complexity is N*N and 30 days so O(N*N*30)

//  //  //  //  //  // //  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //
//  //  //  //  //  // //  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //
//
//  //  // Using Bit Maksing   ====> 
//  //  // Using Bit Maksing   ====> 
//  //  // Using Bit Maksing   ====> 
    int n;   cin>>n;
    vector<int> masks(n,0);
    for(int i =0; i<n; i++)
    {
        int num_workers;  cin>>num_workers; 
        int mask =0;
        for(int j =0; j<num_workers; j++)
        {
            int day;   cin>>day;
            mask = ( mask | (1<<day) ) ;
        }
        masks[i] = mask;
    }
    
    int maxdays = 0;
    int person1= -1  ;
    int person2 = -1  ;
    for(int i =0; i<n; i++)
    {
        for(int j =i+1; j<n; j++)
        {
            int intersectoin = ( masks[i] & masks[j]) ;
            // the above operation is O(1) operation
            int commondays = __builtin_popcount(intersectoin);
            // the above operation is O(1) operation
            // cout<<i<<" "<<j<<" "<<commondays<<endl;
            if(commondays > maxdays)
            {
                maxdays = commondays;
                person1 = i;
                person2 = j;
            }
            // maxdays = max(maxdays , commondays) ;

        }
    }

    cout<<person1<<" "<<person2<<" "<<maxdays<<endl; 
    // print 0 2 4

    // Time Complexity = O(N*N*1)


}
