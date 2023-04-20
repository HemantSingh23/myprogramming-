



///////    vectors Of Pairs   ///////    vectors Of Pairs
///////    vectors Of Pairs   ///////    vectors Of Pairs

// #include<bits/stdc++.h>
// using namespace std ;

// void printvec( vector< pair<int,int> > v)
// {
//     cout<<"size: " << v.size() <<endl;  // print the size of the vector v1
//     for(int i =0; i<v.size(); i++) 
//     { 
//         cout<<v[i].first<<" "<<v[i].second <<endl ;
//     }
//     cout<<endl;
// }

// int main()
// {
//     // vector< pair<int,int> > v = { {1,2}, {2,3}, {4,5} } ;
//     // printvec(v) ;

//     vector< pair<int,int> > v1 ; 
//     int n;
//     cin>>n;
//     for(int i =0; i<n; i++) 
//     { 
//         int x , y;
//         cin>>x>>y;
//         v1.push_back({x,y});
//     }
//     printvec(v1) ;

// }



///////    Array of vectors   ///////    Array of vectors
///////    Array of vectors   ///////    Array of vectors


// #include<bits/stdc++.h>
// using namespace std ;

// void printvec( vector<int>  &v)
// {
//     cout<<"size: " << v.size() <<endl; // it will print the size of v[i] 
//     for(int i =0; i<v.size(); i++) 
//     {  
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

// int main()
// {
//     // vector<int>  v[10] ;
// // here v[10] means there are total 10 vectors  have size zero
// // means v[0] is 0th vector , v[1] is 1st vector , v[2] is 2nd vector , v[3] is 3rd vector and so on till v[n-1] is (n-1)th vector 
// // All 10 vector are of size zero at initial but dynamic in size 
// 
//     int N;
//     cin>>N;
//     vector<int>  v[N] ;
//     for(int i =0; i<N; i++)
//     {
//         int n;
//         cin>>n;
//         for(int j =0; j<n; j++)
//         {
//             int x ;
//             cin>>x;
//             v[i].push_back(x) ;
//         }
//     }
// // //Now print the vector using function 
//     // for(int i =0; i<N; i++)
//     // {
//     //     printvec(v[i]) ;
//     // }
// }



///////    vectors of vectors   ///////    vectors of vectors
///////    vectors of vectors   ///////    vectors of vectors


#include<bits/stdc++.h>
using namespace std ;

void printvec( vector <int>  v )
{
    cout<<"size: " << v.size() <<endl; // it will print the size of v[i] 
    for(int i =0; i<v.size(); i++) 
    { 
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int N;
    cin>>N;
    vector< vector<int> > v ;

    for(int i =0; i<N; i++)
    {
        int n;
        cin>>n;
        vector<int> temp;
        for(int j =0; j<n; j++)
        {
            int x ;
            cin>>x;
           temp.push_back(x) ;
        }
        v.push_back(temp) ;
    }
    cout<<"before push_back() size of vector v"<<" "<<v.size()<<endl;

// // Print the vector using function 
    v[0].push_back(10) ; // it will add value 10 in 0th vector v[0]
    v[0].push_back(11) ; // it will add value 10 in 0th vector v[0]
    v[0].push_back(12) ; // it will add value 10 in 0th vector v[0]

    v.push_back( vector<int> () ) ; // it will add an empty vector

    cout<<"after push_back() size of vector v"<<" "<<v.size()<<endl;
    
    cout<<"print values"<<endl;

    // for(int i =0; i<N; i++)
    for(int i =0; i<v.size(); i++)
    {
        cout<<"value of i"<<" "<<i<<endl;
        printvec(v[i]) ;
    }
    cout<<v[0][1]<<endl;

}










