


// // Comparator  // // Comparator  // // Comparator  // // Comparator
// // Comparator  // // Comparator  // // Comparator  // // Comparator
// // Comparator  // // Comparator  // // Comparator  // // Comparator

// if we use comparator function then it return "false" when
// we swap the element while normal function return "True" 
// when we swap the element
//
// Comparator Function return false when we swap 
// while normal function return True when we swap
// 




#include<bits/stdc++.h>
using namespace std;


// // For normal vector or array  Sort Using own Function 

// bool should_i_swap(int a, int b)
// {
//     // if(a>b) return true; // sort in ascending oerder
//     // return false;

//     if(a<b) return true; // sort in descending oerder
//     return false;
// }



// // For vector of pair Sort Using own Function 

// bool should_i_swap( pair<int,int> a,  pair<int,int> b)
// {
//     // // sort the pair first value in ascending order
//     // if(a>b) return true; 
//     // return false;
    
//     // // sort the pair first value in descending order
//     // if(a<b) return true; 
//     // return false;

// // // if two first value of pair is equal and if we want 
// // // ascending order of pair first and descending order of
// // // pair second value  then

//     if(a.first != b.first)
//     {
//         if(a.first>b.first) return true;
//         return false;
//     }
//     else
//     {
//         if(a.second<b.second) return true;
//         return  false;
//     }
// }




// Using Comparator Function  // Using Comparator Function  // Using Comparator Function
// Using Comparator Function  // Using Comparator Function  // Using Comparator Function


// // For Normal vector of Array  Comparator Function  // // For Normal vector of Array  Comparator Function
bool cmp(int a , int b)
{
    return a > b;  // Means first print maximum value
} // means print array in descending order



// // For vector of pair  Comparator Function  // // For vector of pair  Comparator Function 
bool Comparator( pair<int,int> a,  pair<int,int> b)
{

// 1st method    // 1st method    // 1st method    // 1st method 
    // if(a.first != b.first)
    // {
    //     if(a.first>b.first) return false;
    //     return true;
    // }
    // else
    // {
    //     if(a.second<b.second) return false;
    //     return  true;
    // }

// 2nd method   // 2nd method   // 2nd method   // 2nd method
    if(a.first != b.first)
    {
        return a.first < b.first;
    }
    return  a.second > b.second ;
}



int main()
{
    int n;
    cin>>n;



// // // For normal vector or array 
    // vector<int> a(n);
    // for(int i =0; i<n;i++)
    // {
    //     cin>>a[i] ;
    // }

    // sort(a.begin() ,a.end() );  // using inbuilt function

    // for(int i =0; i<n;i++) // sort using own wriiten code
    // {
    //     for(int j =i+1; j<n;j++)
    //     {
    //         // // without the help of function
    //         // if(a[i]>a[j])  swap(a[i],a[j]) ;     // in ascending oerder
    //         // if(a[i]<a[j])  swap(a[i],a[j]) ;     // in descending oerder
            
    //         // // with the help of function
    //         // if(should_i_swap(a[i],a[j])) swap(a[i],a[j]) ;   // using own normal function
    //     }
    // }
    
    // // using own Comparator function
    // sort(a.begin() ,a.end() , cmp); // // means print array in descending order

    // for(int i =0; i<n;i++)
    // {
    //     cout<<a[i]<<" " ;
    // }





// // // For  vector of pair   // // // For vector of pair 

    vector< pair<int,int> > a(n);
    for(int i =0; i<n;i++)
    {
        cin>>a[i].first>> a[i].second ;
    }

    // sort using sort inbuilt function for vector pair
    // sort(a.begin() ,a.end()); // it sort in increasing order

    // sort using own wriiten code for vector pair
    // for(int i =0; i<n;i++)   
    // {
    //     for(int j =i+1; j<n;j++)
    //     {
    //         if(should_i_swap(a[i],a[j])) swap(a[i] , a[j]) ; // using own function
    //     }
    // }

    // // Using Comparator Function  
    // sort(a.begin() ,a.end(),Comparator); 


    // cout<<"Sorted"<<endl;
    // for(int i =0; i<n;i++)
    // {
    //     cout<<a[i].first<<" "<<a[i].second<<endl ;
    // }


}


// 6
// 8 5
// 5 7
// 25 6
// 4 3
// 5 8
// 7 9
//






