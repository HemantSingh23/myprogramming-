

//////////   Sets    //////////     ///////////   Maps    ////////
//
// 1. Ordered sets     2. Unordered sets      3. Multi sets 
//



// 1. Ordered sets ==>
// sets is like map in which only key is availabel keyValue not present
// means sets is set or collection of keys only not value
// it store the unique elements in sorted order
//
// 


// #include<bits/stdc++.h>
// using namespace std;

// void print(set<string> &s)
// {
//     for( string value : s)
//     {
//         cout<<value<<endl;
//     }
//     // for(auto it = s.begin(); it!=s.end() ; it++)
//     // {
//     //     cout<<(*it)<<endl;
//     // }
// }

// int main()
// {
//     set<string> s;

// //  using .insert() function we can insert the keys with Time complexity == O(log(n))
//     s.insert("abc") ;
//     s.insert("zsdf") ;
//     s.insert("bcd") ;
//     s.insert("xyz") ;
//     s.insert("pqr") ;

//     s.insert("abc") ; // it will not insert again because sets
//     // store the unique value


// // To the value in set we use s.find() with Time complexity == O(log(n))
//     auto it = s.find("xyz");  // if value not found then .end() will return like in maps
//     if(it != s.end())
//     {
//         cout<<(*it) ;
//     }

// // To delete any value using .erase()
//     // // delete  directly the value
//     // s.erase("pqr") ; 
//     // // // delete using iterator
//     auto it = s.find("pqr");  
//     if(it != s.end())
//     {
//         s.erase(it)  ;
//     }


// // Print the sets
//     print(s) ;

// }



/// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  
/// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  

// Given N strings, Print unique string in lexigraphical order 
//  N <= 10^5
//  |s| <= 100000
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

// #include<bits/stdc++.h>
// using namespace std ;

// int main() 
// {      
//     set<string> s;
//     int n;
//     cin>>n;
//     for(int i = 0; i<n; i++)
//     {
//         string str;
//         cin>> str;
//         s.insert(str) ;
//     }
    
//     for(auto value : s)
//     {
//         cout<<value<<endl;
//     }
   
// }






// // Unordered Sets ==>     // Unordered Sets ==>     // Unordered Sets ==>     // Unordered Sets ==>
// // Unordered Sets ==>     // Unordered Sets ==>     // Unordered Sets ==>     // Unordered Sets ==>
// // Unordered Sets ==>     // Unordered Sets ==>     // Unordered Sets ==>     // Unordered Sets ==>
// // Unordered Sets ==>     // Unordered Sets ==>     // Unordered Sets ==>     // Unordered Sets ==>
//
// in unordered Sets all complexity will become o(1) 
// like find() , erase() etc 
// it is same as unorderd map 



/// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  
/// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  /// Question  


// Given N strings and Q queries, in each query you are given a
// string . Print yes if  string is present else print no
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

// #include<bits/stdc++.h>
// using namespace std ;

// int main() 
// {      
//     // map<string ,int> m; // here we can also use only map but it has more complexity
//     unordered_set<string> s;
//     int n;
//     cin>>n;
//     for(int i = 0; i<n; i++)
//     {
//         string str;
//         cin>> str;
//         s.insert(str) ;
//     }
    
//     int q;
//     cin>>q;
//     while(q--)
//     {
//         string str;
//         cin>>str;
        
//         if( s.find(str) == s.end())
//         {
//             cout<< "no\n";
//         }
//         else
//         {
//             cout<<"yes\n" ;
//         }
//     }
// }






//// // Multi set ==>   Multi set ==>   Multi set ==>   Multi set ==>   Multi set ==>   Multi set ==>   Multi set ==>   Multi set ==>
//// // Multi set ==>   Multi set ==>   Multi set ==>   Multi set ==>   Multi set ==>   Multi set ==>   Multi set ==>   Multi set ==>
//// // Multi set ==>   Multi set ==>   Multi set ==>   Multi set ==>   Multi set ==>   Multi set ==>   Multi set ==>   Multi set ==>
//// // Multi set ==>   Multi set ==>   Multi set ==>   Multi set ==>   Multi set ==>   Multi set ==>   Multi set ==>   Multi set ==>
//
//
//
//  Multi set ==>
// in this we can insert multiple values


#include<bits/stdc++.h>
using namespace std;

void print(multiset<string> &s)
{
    for( string value : s)
    {
        cout<<value<<endl;
    }
    // for(auto it = s.begin(); it!=s.end() ; it++)
    // {
    //     cout<<(*it)<<endl;
    // }
}

int main()
{
    multiset<string> s;

//  using .insert() function we can insert the keys with Time complexity == O(log(n))
    s.insert("abc") ;
    s.insert("zsdf") ;
    s.insert("bcd") ;
    s.insert("xyz") ;
    s.insert("pqr") ;
    s.insert("abc") ; // it will insert again 


// // To find and delete any value using .erase()

    // // delete  directly the value ==>
    // // it will delete all abc value 
    // s.erase("abc") ;   // it will delete all abc value


    // // delete using iterator ==>
    // // it will delete only that value in which iterator is pointed
    auto it = s.find("abc");   // // Time complexity == O(log(n))
    if(it != s.end())
    {
        s.erase(it) ; // it will delete only that value in which iterator is pointed  
    }



// //  Print the sets
    print(s) ;

}


