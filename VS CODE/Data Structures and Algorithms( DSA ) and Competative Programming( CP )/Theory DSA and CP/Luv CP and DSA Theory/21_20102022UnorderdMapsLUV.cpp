



//  2. Unordered  Maps   ,    3.   Multi Maps 
// Also see question at the last  ///  Also see question at the last
        
           
        
// 3. Multi Maps      ===>   Print in Random order  
// in multi map , keys are not unique means if we insert the same key
// again then that key insert again 
// but in map key are unique so if we insert the same key again then 
// that key value will be updated


// 2. Unordered  Maps ==> Print in Random order            
// Difference in Ordered maps and Unordered maps ====        
// 1. Inbuilt Implementation
// 2. Time Complexity
// 3. Valid keys Datatype
//
//
// //

// #include<bits/stdc++.h>
// using namespace std ;

// void print ( unordered_map<int,string> &m )
// {
//     cout<< m.size() <<endl;
//     for(auto &pr :m)
//     {                                                              
//         cout<< pr.first<<" "<< pr.second<<endl ;
//     }                                                          
// }  

// int main() 
// {      

// // To insert or access the map key and value                                      
// // To insert or access the map key and value       

//     unordered_map<int,string> m;

//     // m[1] ="abc" ;          // Average Time Complexity = o(1)
//     // m[5] ="cde" ;          // Average Time Complexity = o(1)
//     // m[3] ="acd" ;          // Average Time Complexity = o(1)
//     // m.insert({4, "afg"});  // Average Time Complexity = o(1)

//     // // Print the map
//     //     print(m) ;

//     // // To find the any key value  ==>
//     //     //  // Time Complexity = o(1)
//     //     auto it = m.find(3) ; 
//     //     if(it == m.end() )
//     //     {
//     //         cout<< "No value" ;
//     //     }
//     //     else
//     //     {
//     //         cout<< (*it).first << " "<<(*it).second<<endl ;
//     //     }
//     // // To erase the any key value  ==>
//         // //Time Complexity = o(1)
//         // auto it_erase = m.find(7); 
//         // if(it_erase != m.end()) 
//         // m.erase(it_erase) ;   


// // in unordered map we can't define key of complex datatype
//     // unordered_map<pair <int,int> , string > m1 ;
//     //  // the above line will give error




// // To clear the map   ==>

//     // it will clear all the map and size will be zero

// //     m.clear() ;
//     // print(m) ;

// }



/// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  
/// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  
/// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  
/// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  
/// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  


// Given N strings and Q queries, in each query you are given a
// string . Print frequency of that string 
//  N <= 10^6
//  |s| <= 100
//  Q <= 101^6
//
// ex=>
//       Given 8 strings 
// abc
// def
// abc
// ghj
// jkl
// ghj
// ghj
// abc

#include<bits/stdc++.h>
using namespace std ;

int main() 
{      
    // map<string ,int> m; // here we can also use only map but it has more complexity
    unordered_map<string ,int> m;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        string s;
        cin>> s;
        m[s]++;  // m[s] = m[s] + 1;
    }
    
    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        cout<< m[s] << endl;
    }

   
}

 