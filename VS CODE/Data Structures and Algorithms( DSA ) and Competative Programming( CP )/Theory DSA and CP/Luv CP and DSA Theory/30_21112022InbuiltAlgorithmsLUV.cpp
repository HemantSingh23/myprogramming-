


// for input

// 6
// 2 3 1 6 7 6


#include<bits/stdc++.h>
using namespace std;




int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i =0; i<n ; i++)
    {
        cin>>v[i];
    }
// for input
// 6
// 2 3 1 6 7 6

    int min = *min_element(v.begin(), v.end());
    cout<<min<<endl;

    int max = *max_element(v.begin(), v.end());
    cout<<max<<endl;

    // min_element return the min value
    // max_element return the max value
    // they return pointer or address in array
    // they return iterator in vector
    // That's why we use the * to access its value
    // In vector or array complexity = O(n);
    

    int sum = accumulate(v.begin(), v.end() , 0);
    // v.begin() = stating address
    // v.end() = next address of address up to we want
    // Third parameter is the any initial vale
    // accumulate provide the sum 
    cout<<sum<<endl; // print 25
    // In vector or array complexity = O(n);
    // In map or set complexity = O(log*n);


    int ct = count(v.begin(), v.end() , 6);
    cout<<ct<<endl; // print 2 beacuse 6 appears two times
    // count() function return the count of the
    // element 
    // v.begin() = stating address
    // v.end() = next address of address up to we want
    // Third parameter is the element for 
    // which we want know how many times it appears 
    // In vector or array complexity = O(n);
   


// // //  find() ==> for finding any element
    
    // // // 1st way ==>
    //
    int element = *find(v.begin(), v.end() , 10);
    cout<<element<<endl; // print 2 beacuse 2 appears in the vector
    // In vector or array complexity = O(n);
    // v.begin() = stating address
    // v.end() = next address of address up to we want
    // Third parameter is the element to which
    // we search in the vector  or array
    // find() function search the element 
    // and return pointer or iterator when 
    // element is found
    // to access the value we use * because it
    // retrun pointer or iterator


    // // // 2nd way ==>
    //
    // if we pass that value which is not in 
    // vector or array then
    // find() function return v.end() in vector
    // find() function return a+n index address in array
    auto it = find(v.begin(), v.end() , 10);
    if(it != v.end())
    {
        cout<<*it<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }



    reverse(v.begin(), v.end()) ;
    // In vector or array complexity = O(n);
    for(auto val : v)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    string s = "abcdefghijklmnopqrstuvwxyz" ;
    reverse(s.begin(), s.end()) ;
    cout<<s<<endl;



}


