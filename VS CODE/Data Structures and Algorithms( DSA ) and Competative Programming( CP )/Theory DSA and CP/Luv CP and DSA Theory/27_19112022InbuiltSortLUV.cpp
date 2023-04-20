


// sort()  // sort()  // sort()   // sort()  // sort()  // sort()

// sort() function is a  inbuilt function in c++ STL
// 
// In c++ STL, sort() function uses introsort algorithm which is inbluilt in c++ STL

//  introsort algorithm is a mixture of three sorting algorithm
//  1. Quick Sort  2. Heap Sort  3. Insertion Sort
//
// it start from the Quick Sort and if recursion depth is too high then
// it sift to the heap sort and if no of element is more 
// then it uses insertion sort 
// it assume that introsort algorithm is the best sorting algorithm 
//
// Time Complexity ==>
// in worst case  O(n*log(n))
//  




#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n] ;
    for(int i =0; i<n;i++)
    {
        cin>>a[i] ;
    }
    
// we sort the array using sort inbuilt function

// sort();
// sort function take two parameter
// 1. address of stating element from where we want to start the sort
// 2. address of next element of that element up to which we want to sort 

    sort(a,a+n); 
    // here a means 0 index and a+n means 0+n = n index
    // a+2 means 2 index

    for(int i =0; i<n;i++)
    {
        cout<<a[i]<<" " ;
    }



    vector<int> v(n);
    for(int i =0; i<n;i++)
    {
        cin>>v[i] ;
    }
    sort(v.begin() ,v.end());
    for(int i =0; i<n;i++)
    {
        cout<<v[i]<<" " ;
    }

                                                

}

















