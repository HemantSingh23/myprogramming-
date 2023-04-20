

///////////// Pairs And Vectors      ///////////// Pairs And Vectors


///// Pair ///// Pair ///// Pair ///// Pair ///// Pair ///// Pair
///// Pair ///// Pair ///// Pair ///// Pair ///// Pair ///// Pair

//   pair ==> In c++ stl pair is class which store two values . It is needed to maintain the relation in between two things
//
//  syntax ==>    
//     1. pair<datatype1 , datatype2 >
//     2. pair<container1 , container2 >


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//////////////        1st Part       /////////////

    // pair<int , string >  p; // here p is variable

// We can assign the value to variable p using two way ==>
    //  1. make_pair() here  make_pair()  is an Internal function
    //  2. Using Curly braces { } means like this  p = {2, "abcd"};

    //  1. Internal function make_pair() ->
    // p = make_pair(1, "abc") ;  
    // cout<<p.first<<" "<<p.second<<" "<<endl;    // print   1 abc

    //  2. Using Curly braces { }   ->
    // p = {2, "abcd"};
    // cout<<p.first<<" "<<p.second<<" "<<endl;    // print   2 abcd

// Take as an input

    // pair<int ,string> p;
    // cin>> p.first ;
    // cin>> p.second ;

// copy one pair to the other pair ->                                                                
    // pair<int , string >  p1 = p;                                                                                    
    // p1.first = 3;                                     
    // cout<<p.first<<" "<<p.second<<" "<<endl;       
    // print  same value as of p because in p1.first = 3; only the copy of the value is pass

// Use the reference ->
    // pair<int , string >  &p1 = p;                                                                                    
    // p1.first = 3;                                     
    // cout<<p.first<<" "<<p.second<<" "<<endl;  
    // now here because we use reference so p.first will print 3


/////////////////        2nd Part       ///////////////


// Need of Pair ==>  It is needed to maintain the relation in between two things

    // int a[] = {1,2,3};
    // int b[] = {2,3,4}; 
    // pair<int ,int> p_array[3] ;
    // p_array[0] = {1,2} ;
    // p_array[1] = {2,3} ;
    // p_array[2] = {3,4} ;
    // for(int i =0; i<3; i++)
    // {
    //     cout<<p_array[i].first<<" "<<p_array[i].second<<endl ;
    // }
    // cout<<"@@"<<endl;

    // swap(p_array[0] , p_array[2]) ;
    // for(int i =0; i<3; i++)
    // {
    //     cout<<p_array[i].first<<" "<<p_array[i].second<<endl ;
    // }

//
// }




///// Vectors   ///// Vectors   ///// Vectors   ///// Vectors   ///// Vectors
///// Vectors   ///// Vectors   ///// Vectors   ///// Vectors   ///// Vectors


// Vectors ==> These are continuous memory blocks . It is similar to array . 
//             Vector is like an array which has dynamic size
//
//     syntax ==   Vector<datatype>
//       
//        


#include<bits/stdc++.h>
using namespace std;

// void printvec( vector<int> v)
// {
//     cout<<"size: " << v.size() <<endl; // it will print the size of vector v
//     for(int i =0; i<v.size(); i++) 
//     { // Time Complexity of v.size() is o(1) ; 
//         cout<<v[i]<<" " ;
//     }
//     cout<<endl;
// }

void printstr( vector<string> v)
{
    cout<<"size: " << v.size() <<endl; // it will print the size of vector v
    for(int i =0; i<v.size(); i++) 
    { // Time Complexity of v.size() is o(1) ; 
        cout<<v[i]<<" " ;
    }
    cout<<endl;
}

int main()
{
    // int a[10] ; // it is 10 size array of integer datatype because we give size 10 so already 10 blocks of memory is reserved
//     vector<int> v;
//     // v is a vector of integer datatype like array 
//     // but v has zero size at this point
//     int n ;
//     cin>>n;
//     for(int i =0; i<n; i++)
//     {
//         int x;
//         cin>>x;
//         printvec(v) ;
//         v.push_back(x) ;       
//         // Time Complexity of push_back() function is o(1) in both in array and in vector ; 
//     }
// // Now print the vector either using own function or using only for loop 
//     // print vector using function
//     printvec(v) ;

//     cout<<"@#$"<<endl;
//     // print vector using only for loop
//     cout<<"size: " << v.size() <<endl; // n == v.size()
//     // for(int i =0; i<v.size(); i++) 
//     for(int i =0; i<n; i++) 
//     { // Time Complexity of v.size() is o(1) ; 
//         cout<<v[i]<<" " ;
//     }
//     cout<<endl;


// we can also decide the size of the vector
    // vector<int> v1(5) ;
    // printvec(v1) ;
// we can also increase the size of the vector because vector are dynamic in nature
    // v1.push_back(7) ; 
    // printvec(v1) ;

// we can also decide the size of the vector  and also give the value
    // vector<int> v2(10,3) ;
    // printvec(v2) ;

    // v2.pop_back(); // It remove the last element 
    // printvec(v2) ; // now this size will be 9  because pop_back remove last element 
    // Time Complexity of the pop_back() function is o(1) 

    // vector<int> v3 = v2; // v2 copying in v3 so change in v3 will not affect v2
    // // Time Complexity in copying = o(n) because here one by one elements is copying 
    // v3.push_back(9) ;
    // printvec(v2) ; 
    // printvec(v3) ; 

    vector<string> s;
    int n; 
    cin>>n;
    for(int i =0; i<n; i++)
    {
        string a ;
        cin>>a;
        s.push_back(a) ;
    }

    printstr(s) ;


}





