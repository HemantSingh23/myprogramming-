


//////////   Maps    //////////     ///////////   Maps    ////////
// Also see question at the last  ///  Also see question at the last
//
//  Maps ==>
//       Map is a data Structure which store key value pair(means one datatype is of key and 2nd datatype is of value)
//       Every element of map is a pair of key and value
//       in maps, each key has  the value 
//
//  Maps Types ==>
//   1. Ordered  maps
//   2. Unordered  maps
//   3. Multi maps


///// 1. Ordered  Maps ===>  ===>  1. Ordered  Maps ===>  ===>  1. Ordered  Maps ===>  ===>
///// 1. Ordered  Maps ===>  ===>  1. Ordered  Maps ===>  ===>  1. Ordered  Maps ===>  ===>
///// 1. Ordered  Maps ===>  ===>  1. Ordered  Maps ===>  ===>  1. Ordered  Maps ===>  ===>
//
// 1. Ordered  Maps ==> Print in sorted order
//       in map keys are unique and we can't insert the duplicate keys
//       In map keys stored in sorted order
//       And time complexity to insert any key is o(log(n)) means if n value then  insertion time complexity will be  o( n* log(n) ) 
//       And time complexity to access any key is also o(1) means if n value then access time complexity will be  o( n* o(1) ) 
//       time complexity to insert or access also depends on key
//       means time complexity can be also vary 
//       it will not always o(log(n))  it also depends on key 

// #include<bits/stdc++.h>
// using namespace std ;

// void print ( map<int,string> &m )
// {
//     cout<< m.size() <<endl;  // size of the map
//     for(auto &pr :m)
//     {                                                              
//         cout<< pr.first<<" "<< pr.second<<endl ;
//     }                                                          
// }  

// int main() 
// {      

// To insert or access the map key and value                                      
// To insert or access the map key and value       
    // map<int,string> m;
    // m[1] ="abc" ;          // Time Complexity = o(log(n))
    // m[5] ="cde" ;          // Time Complexity = o(log(n))
    // m[3] ="acd" ;          // Time Complexity = o(log(n))
    // m.insert({4, "afg"});  // Time Complexity = o(log(n))
    // insert() same as push_back() in vector

    // m[6] ;              // Time Complexity = o(long(n))
    // because we did't give any value to m[6] so by default it
    // will an empty string

    // m[5] = "xyz" ;// in this case key 5 will not insert again
    // in this the value of exiting key 5 will replace with xyz  
    // means in map we can't insert the duplicate keys

// Print the map
    // 1st way to print the maps using iterator
    // map<int,string> :: iterator it ;
    // for(it = m.begin(); it != m.end(); it++)
    // {
    //     // cout<< (*it).first<<" "<<(*it).second<<endl ;
    //     cout<< (it->first)<<" "<<(it->second)<<endl ; // just above line and this line print same output
    // }                                                                                                                
    // 2nd way to print the maps using auto keyword
    // for(auto &pr :m)
    // {
    //     cout<< pr.first<<" "<< pr.second<<endl ;
    // } 
    // 3rd way to print the maps using function call
    // print(m) ;



// To find the any key value  ==>
    // we use find() function to find the element
    // find() return the iterator
    // m.find(x) ; // it will find the value of key 
    // and return as iterator
    // if find(x), x is not there then it will return m.end() 
    //  // Time Complexity = o(log(n))
    
    // auto it = m.find(3) ; // because it will return iterator which is too big to write that's why we use auto
    // if(it == m.end() )
    // {
    //     cout<< "No value" ;   
    // }
    // else
    // {
    //     cout<< (*it).first << " "<<(*it).second<<endl ;
    // }

    // auto it1 = m.find(7) ; 
    // if(it1 == m.end() )
    // {
    //     cout<< "No value" ;
    // }
    // else
    // {
    //     cout<< (*it1).first << " "<<(*it1).second<<endl ;
    // }



// To erase the any key value  ==>
    // erase()  function erase the value from the map
    // it will take two type of input
    //     1. key input    2. iterator input
    //  // Time Complexity = o(log(n))

    // erase()  as key input =>
    // m.erase(3) ;
    // print(m) ;

    // if we give the value which is not in map then 
    // did't erase anything and print same map 
    // m.erase(7) ;
    // print(m) ;
    


    // erase()  as iterator input  =>
    // auto it_erase = m.find(5); 
    // m.erase(it_erase) ;
    // print(m) ;

    // if we give the value which is not in map then it will give 
    // segmentation fault and these line will not execute
    // because if value is not in map then it_erase will
    // equal to m.end() and did't print 
    //
    // auto it_erase = m.find(7); 
    // m.erase(it_erase) ; 
    // print(m) ;

    // so to avoid segmentation fault , we will use
    //  if condition
    // auto it_erase = m.find(7); 
    // if(it_erase != m.end()) 
    //     m.erase(it_erase) ; 




// To clear the map   ==>

    // it will clear all the map and size will be zero

//     m.clear() ;
//     print(m) ;

// }



/// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  
/// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  
/// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  
/// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  
/// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  


// Given N strings , print unique strings in lexiographical
// order with their frequency 
//  N <= 10^5
//  |s| <= 100
//
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
    map<string,int> m; // here string is key and int is value(which is the frequency of string)
    int n;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        string s;
        cin>> s;
        m[s]++;  // m[s] = m[s] + 1;
    }

    for(auto pr :m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

 