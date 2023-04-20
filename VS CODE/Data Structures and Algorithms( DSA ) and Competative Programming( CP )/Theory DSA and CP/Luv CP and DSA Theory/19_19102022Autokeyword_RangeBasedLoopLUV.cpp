


////////    To Write the short code  of Interator   ////////////

////////     Range Based Loops and Auto Keyword     ///////////



//   Range Based Loops   ==>
//    using this we can directly iterate on element in containers
//    It works on all containers

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> v = {2,3,5,6,7};
//     for(int i =0; i<v.size(); i++)
//     { 
//         cout<<v[i] <<" ";
//     }
//     cout<<endl;
//     vector<int> :: iterator it = v.begin();
//     for(it = v.begin() ; it != v.end(); it++)
//     {
//         cout<<(*it) <<" "; 
//     }
//     cout<<endl;

// // Print using Range Based Loops 
// // Print using Range Based Loops 
//     cout<<"Print using Range Based Loops "<<endl;

//     cout<<"Copy of the value of vector is passed";
//     cout<<endl<<"values before val++"<<endl;
//     for(int val : v)  // here in val varaible only the copy of the value of vector is passed
//     {
//         cout<<val<<" "; 
//     }
//     cout<<endl<<"values after val++"<<endl;
//     for(int val : v) 
//     {
//         val++ ; // still value of vector will not change 
//     }// because in val only copy of value of vector is passed
//     for(int val : v) 
//     {
//         cout<<val<<" ";  // print same as previous
//     }
//     cout<<endl;


//     // use c++ reference to  pass actual value 
//     // use c++ reference to  pass actual value 
//     cout<<"Reference of the value of vector is paased";
//     cout<<endl<<"values before val++"<<endl;
//     for(int val : v)  // here in val varaible only the copy of the value of vector is passed
//     {
//         cout<<val<<" "; 
//     }
//     cout<<endl<<"values after val++"<<endl;
//     for(int &val : v) 
//     {
//         val++ ; // value of vector will be change 
//     }// because in val actual value of vector is passed
//     for(int val : v) 
//     {
//         cout<<val<<" ";  // print same as previous
//     }
//     cout<<endl;



// ///// In vector pair case also
//     cout<<"Same in the vector pair "<<endl;
//     vector < pair<int , int> > v_p = { {1,2},{2,3},{3,4} };

//     cout<<"Copy is passed in vector pair ";
//     cout<<endl<<"values before val++"<<endl;
//     for(pair<int,int> val : v_p) 
//     {
//         cout<<val.first<<" "<<val.second<<endl; 
//     }
//     cout<<"values after val++"<<endl;
//     for(pair<int,int> val : v_p) 
//     {
//        val.first++ ; 
//        val.second++ ; 
//     }
//     for(pair<int,int> val : v_p) 
//     {
//         cout<<val.first<<" "<<val.second<<endl; 
//     }

//     cout<<"Reference is paased in vector pair";
//     cout<<endl<<"values before val++"<<endl;
//     for(pair<int,int> &val : v_p) 
//     {
//         cout<<val.first<<" "<<val.second<<endl; 
//     }
//     cout<<"values after val++"<<endl;
//     for(pair<int,int> &val : v_p) 
//     {
//        val.first++ ; 
//        val.second++ ; 
//     }
//     for(pair<int,int> &val : v_p) 
//     {
//         cout<<val.first<<" "<<val.second<<endl; 
//     }

// }





//   Auto keyword ==>    Auto keyword ==>    Auto keyword ==>
//    it  automatically take the value and dynamically assume the datatype
//    


#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {2,3,5,6,7};
    for(int i =0; i<v.size(); i++)
    {
        cout<<v[i] <<" ";
    }
    cout<<endl;

    // cout<<"print vector  using iterator it " <<endl;
    // vector<int> :: iterator it = v.begin();
    // for(it = v.begin() ; it != v.end(); it++)
    // {
    //     cout<<(*it) <<" "; 
    // }
    // cout<<endl;

// auto keyword // auto keyword  // auto keyword
// auto keyword // auto keyword  // auto keyword
    // auto a = 1;
    // cout<<a<<endl;// here a automaticaaly assume the datatype of 1

    cout<<"print vector  using auto keyword  " <<endl;
    for(auto it = v.begin() ; it != v.end(); it++)
    {
        cout<<(*it) <<" "; 
    }
    cout<<endl;



///// Vector Pair ///// Vector Pair ///// Vector Pair ///// Vector Pair
///// Vector Pair ///// Vector Pair ///// Vector Pair ///// Vector Pair

    // cout<<"Print vector Pair " <<endl;
    // vector < pair<int , int> > v_p = { {1,2},{2,3},{3,4} };

    // cout<<"print vector  using Range Based loop " <<endl;
    // for(pair<int,int> &val : v_p) 
    // {
    //     cout<<val.first<<" "<<val.second<<endl; 
    // }

    // cout<<"print vector  using auto keyword  " <<endl;
    // for(auto &val : v_p) 
    // {
    //     cout<<val.first<<" "<<val.second<<endl; 
    // }

    






}









