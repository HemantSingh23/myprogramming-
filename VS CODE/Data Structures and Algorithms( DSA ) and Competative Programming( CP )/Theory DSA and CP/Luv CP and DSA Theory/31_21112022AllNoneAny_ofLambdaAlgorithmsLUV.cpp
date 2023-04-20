


// // all_of , none_of , any_of      // // all_of , none_of , any_of   
// // all_of , none_of , any_of      // // all_of , none_of , any_of   
// // all_of , none_of , any_of      // // all_of , none_of , any_of   

// These all are the inbluilt algorithms which return the true false


// // all_of   ==>
//
// It checks an condition on every element without using loop
// if condition is true for "every" element then it return treu 
// otherwise it return false
//

// // any_of   ==>
//
// It checks an condition on every element without using loop
// if condition is true for "any one" element then it return true 
// otherwise it return false
//
// // none_of   ==>
//
// It checks an condition on every element without using loop
// if condition is false for "every" element then it return true 
// otherwise it return false
//



#include<bits/stdc++.h>
using namespace std;

int main()
{

// // Lambda Function is a small syntax to write temporary type function
    // // [](int x){return x+2;};
    //
    // cout<<[](int x){return x+2;}(2)<<endl ;
    // cout<<[](int x,int y){return x+y;}(4,7)<<endl ;

    // auto sum = [](int x,int y){return x+y;} ;
    // cout<<sum(2,3) <<endl;
     

// // all_of   ==>         // // all_of   ==>
// // all_of   ==>         // // all_of   ==>
    // vector<int> v ={2,3,5} ;
    // cout<< all_of(v.begin(),v.end(),[](int x){return x>0;} )<<endl;
    // // above line print 1 because all element of vector > 0
    // // so for each element x>0 will be true so all_of() will 
    // // return false
    // // 
    // vector<int> v1 ={2,-1,5} ;
    // cout<< all_of(v1.begin(),v1.end(),[](int x){return x>0;} )<<endl;
    // // print 0 because -1

    vector<int> vv1 ={2,4,8} ;
    cout<< all_of(vv1.begin(),vv1.end(),[](int x){return x%2 ==0;} )<<endl;
    // print 1 because all element are even

    vector<int> vv2 ={2,5,8} ;
    cout<< all_of(vv2.begin(),vv2.end(),[](int x){return x%2 ==0;} )<<endl;
    // print 0 because 5 is not even


// // any_of   ==>   // // any_of   ==>
// // any_of   ==>   // // any_of   ==>
    // vector<int> v2 ={2,3,5} ;
    // cout<< any_of(v2.begin(),v2.end(),[](int x){return x>0;} )<<endl;
    // // print 1 because all positive

    // vector<int> v3 ={-2,-3,5} ;
    // cout<< any_of(v3.begin(),v3.end(),[](int x){return x>0;} )<<endl;
    // // print 1 because 5 is positive because it return true
    // // if condition is true for any one element

    // vector<int> v4 ={-2,-3,-5} ;
    // cout<< any_of(v4.begin(),v4.end(),[](int x){return x>0;} )<<endl;
    // // print 0 because all are negative 



// // none_of   ==>   // // none_of   ==>
// // none_of   ==>   // // none_of   ==>
    // vector<int> v5 ={2,3,5} ;
    // cout<< none_of(v5.begin(),v5.end(),[](int x){return x>0;} )<<endl;
    // // print 0 because all positive because if condition will be true 
    // // for every element then return false otherwise return true
    // // here conditoin is true for every element so retrun 
    // // false which is 0

    // vector<int> v6 ={-2,-3,5} ;
    // cout<< none_of(v6.begin(),v6.end(),[](int x){return x>0;} )<<endl;
    // // print 0 because 5 is positive so condition will be true 
    // // for one element so return false because it return true when
    // // condition will be false for every element

    // vector<int> v7 ={-2,-3,-5} ;
    // cout<< none_of(v7.begin(),v7.end(),[](int x){return x>0;} )<<endl;
    // // print 0 because condition will be false for every element


}