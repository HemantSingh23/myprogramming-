

// // Upper Bound And Lower Bound   // // Upper Bound And Lower Bound

// These are two function in C++ STL 
// These function help us to not write the Binary Search
// Two use these two function , array or vector must be sorted
// so array must be sorted for  O(log(n)) complexity

// If array or vector are sorted then => 
// Upper Bound And Lower Bound Complexity = O(log(n))

// If array or vector are not sorted then =>
// Upper Bound And Lower Bound Complexity = O(n)
//
// These both the function return the location of the element in
// array in return the "pointer" and in vector ,return "iterator"
//
//




// //  Lower  Bound  ==>
// If we want to find any element then lower bound function find 
// either that element or the greater element of that element in array
//
// ex. array = {4,5,5,7,8,25}  // array must be sorted , here it is sorted
// 
// lower bound of 5 is first 5 at index 1(just after element 4)
// lower bound of 7 is 7 at index 3
// lower bound of 6 is 7 at index 3
//
// lower bound of 26 is pointer of next element of 25 at index 6
// Because in this array there is no element greater than or equal 
// to 26 so it lower bound function give the pointer of next element
// means it give the pointer of next element of 25(index 5) which 
// is at index 6 which is not present in the array
//
//
// These both the function return the location of the element in
// array in return the "pointer" and in vector ,return "iterator"
//
// Syntax ==> 
//       lower_bound(a, a+n , element ) ;
// here->
// a is address of stating element from where we want to start find the lower bound
// a+n is address of next element of that element up to which we want to find  the lower bound
// Element of which we want to find the lower bound 
//
//
// *********************************
// *********************************
//
// In map, we use the lower bound and upper bound 
// only in the key
//
// auto m_it = m.lower_bound( element) ;
//
//
// set<int> s;
// auto s_it =   lower_bound(s.begin() ,s.end() , 5) ;
//
// As above if In set and maps if we use 
// lower bound function normally then complexity
// will be O(n) and it will give TLE(Time Limit Exceeded)
//
// To use in set see the code written below
// auto s_it = s.lower_bound( element) ;
//




// //  Upper  Bound  ==>
// If we want to find any element then upper bound function find 
// the greater element of that element in array even if that 
// element is present in the array
//
// ex. array = {4,5,5,7,8,25}  // array must be sorted , here it is sorted
//
// upper bound of 5 is 7 at index 3
// upper bound of 7 is 8 at index 4
// upper bound of 6 is 7 at index 3
//
//
// *********************************
// *********************************
//
// In map, we use upper bound only in the key
//
// auto m_it = m.upper_bound( element) ;
//
//
//
// set<int> s;
// auto s_it =   lower_bound(s.begin() ,s.end() , 5) ;
//
// As above if In set and maps if we use 
// lower bound function normally then complexity
// will be O(n) and it will give TLE(Time Limit Exceeded)
//
// To use in set see the code written below
// auto s_it = s.lower_bound( element) ;
//



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n] ;
    vector<int> v(n);
    for(int i =0; i<n;i++)
    {
        cin>>a[i] ; 
        v[i] = a[i] ; 
    }

    sort(a ,a+n);
    sort(v.begin() ,v.end());

    for(int i =0; i<n;i++)
    {
        cout<<a[i]<<" " ;
    }
    cout<<endl;
    // for(int i =0; i<n;i++)
    // {
    //     cout<<v[i]<<" " ;
    // }
    // cout<<endl;

    // set<int> s;

    // for(int i =0; i<n;i++)
    // {
    //     int x;
    //     cin>>x;
    //     s.insert(x);
    // }
    // cout<<endl;




// // // Lower Bound    // // // Lower Bound    // // // Lower Bound    // // // Lower Bound
// // // Lower Bound    // // // Lower Bound    // // // Lower Bound    // // // Lower Bound


    // // Lower bound for array ==>    // // Lower bound for array ==> 
    // // Lower bound for array ==>    // // Lower bound for array ==> 
    // // Lower bound for array ==>    // // Lower bound for array ==> 

    int *ptr = lower_bound(a, a+n , 6) ;
    cout<<(*ptr)<<endl;

    // int *ptr1 = lower_bound(a, a+n , 26) ;
    // cout<<(*ptr1)<<endl; 
    // // Print pointer of nth location
    

    // if(ptr1 == a+n)
    // {
    //     cout<<"Not Found" ;
    //     return 0;
    // }
    // cout<<(*ptr1)<<endl;


    // // Lower bound for vector ==>    // // Lower bound for vector ==> 
    // // Lower bound for vector ==>    // // Lower bound for vector ==> 
    // // Lower bound for vector ==>    // // Lower bound for vector ==> 

    // auto v_it = lower_bound(v.begin() ,v.end() , 5) ;
    // cout<<(*v_it)<<endl;

    // auto v_it1 = lower_bound(v.begin() ,v.end() , 6) ;
    // cout<<(*v_it1)<<endl;

    // auto v_it2 =  lower_bound(v.begin() ,v.end() , 26) ;
    // cout<<(*v_it2)<<endl; 
    // // //In vector case v_it2 give the v.end()
    // if(v_it2 == v.end())
    // {
    //     cout<<"Not Found" ;
    //     return 0;
    // }
    // cout<<(*v_it2)<<endl;


    // // Lower bound for Set ==>    // // Lower bound for Set ==>
    // // Lower bound for Set ==>    // // Lower bound for Set ==>
    // // Lower bound for Set ==>    // // Lower bound for Set ==>

    // // Don't use like below although it will work but can give TLE
    // auto s_it =   lower_bound(s.begin() ,s.end() , 5) ;
    // cout<<(*s_it)<<endl;
    // We will not the use lower bound in set like above
    // above written because complexity = O(n) 

    // for(int i =0; i<(int)(1e6) ; i++)
    // {
    //     s.insert(rand()) ;
    // }

    // Wrong way to use lowerbound in set and map
    // for(int i =0; i<(int)1e5 ; i++)
    // {
    //     auto s_it =   lower_bound(s.begin() ,s.end() , rand() ) ;
    //     // the above line give TLE because its complexity is O(n) 
    //     // that's why we don't use lowerbound in set like above 
    //     cout<<(*s_it) <<endl;
    // }

    // // Correct way to use lowerbound in set and map
    // for(int i =0; i<7 ; i++)
    // {
    //     auto s_it = s.lower_bound( rand()) ;
    //     cout<<(*s_it) <<endl;
    // }



// // // Upper Bound     // // // Upper Bound     // // // Upper Bound    
// // // Upper Bound     // // // Upper Bound     // // // Upper Bound    

    // // Upper bound for array ==>   // // Upper bound for array ==> 
    // // Upper bound for array ==>   // // Upper bound for array ==> 
    // // Upper bound for array ==>   // // Upper bound for array ==> 

    // int *ptr2 = upper_bound(a, a+n , 5) ;
    // cout<<(*ptr2)<<endl;  // print 7

    // int *ptr3 = upper_bound(a, a+n , 6) ;
    // cout<<(*ptr3)<<endl; // print 7

    // int *ptr4 = upper_bound(a, a+n , 7) ;
    // cout<<(*ptr4)<<endl; // print 8


    // int *ptr5 = upper_bound(a, a+n , 25) ;
    // cout<<"Pointer"<<" "<<(*ptr5)<<endl;

    // if(ptr5 == a+n)
    // {
    //     cout<<"Not Found" ;
    //     return 0;
    // }
    // cout<<(*ptr5)<<endl;




    // // Upper bound for Vector ==>    // // Upper bound for Vector ==> 
    // // Upper bound for Vector ==>    // // Upper bound for Vector ==> 
    // // Upper bound for Vector ==>    // // Upper bound for Vector ==> 

    // auto v_it3 = upper_bound(v.begin() ,v.end(), 5) ;
    // cout<<(*v_it3)<<endl;  // print 7

    // auto v_it4 = upper_bound(v.begin() ,v.end() , 6) ;
    // cout<<(*v_it4)<<endl; // print 7

    // auto v_it5 = upper_bound(v.begin() ,v.end() , 7) ;
    // cout<<(*v_it5)<<endl; // print 8


    // auto v_it6 = upper_bound(v.begin() ,v.end() , 25) ;
    // cout<<"Pointer"<<" "<<(*v_it6)<<endl;

    // if(v_it6 == v.end())
    // {
    //     cout<<"Not Found" ;
    //     return 0;
    // }
    // cout<<(*v_it6)<<endl;



}


// Ex ==>

// 6
// 4 5 2 25 7 8

