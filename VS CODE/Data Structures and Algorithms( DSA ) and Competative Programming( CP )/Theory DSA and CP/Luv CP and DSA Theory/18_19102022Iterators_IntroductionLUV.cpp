

/// Iterators ==>
// Iterators is structures like a pointer
// we use iterators because in other containers like map,sets etc. we can't access value using indexing
// because in map,sets etc there is no indexing so to access the value , we use iterators 
//
//  // In this an iterator point to element which is stored in the containers like vector
//  // and iterator which point to the first index means which 
//  // points to 0 index is called .begin()  
//  // and the iterator which point to the next of last 
//  // element is called .end()
//  // means next position(after last position of vector) but there is no next position in vector after last position of vector  
//  // means in next position no value is exits so the iterator which points to the
//  // next position(after last position) is called .end()

// // Syntax ==>
//      vector<int> :: iterator it = v.begin();
//      here it iterator point to element which is stored in the vector
//
//
//

#include<bits/stdc++.h>
using namespace std;
 
int main()
{

///// begin() and end()   ///// begin() and end()
    // vector<int> v = {2,3,5,6,7};
    // for(int i =0; i<v.size(); i++)
    // {
    //     cout<<v[i] <<" ";
    // }
    // cout<<endl;
    // vector<int> :: iterator it = v.begin();
// usig * we can access the value of the iterator it like in pointer where we find the value uisng *
// 
    // cout<< (*(it)) << endl;    // it will print 2
    // cout<< (*(it+1)) << endl;  // it will print 3
    // cout<< (*(it+2)) << endl;  // it will print 5
    // cout<<"Now we print whole vector"<<endl;
    // for(it = v.begin() ; it != v.end(); it++)
    // {
    //     cout<<(*it) <<endl; 
    // }



// Difference between it++ and it+1
//   it++  ==  next iterator
//   it+1  ==  next location
// in container which have contiguous memory location  
// like vector , it++  and it+1  both have same meaning
// because in vector next iterator is at next location
//
// in container which have non-contiguous memory location 
// like in maps and sets ,  it++  and it+1 both can have same meaning or not
// because in map next iterator may be at next location or not




///// iterators points to pairs   //// iterators points to pairs
///// iterators points to pairs   //// iterators points to pairs

    vector<pair<int ,int> > v_p = { {1,2},{2,3},{3,4} } ;
    vector<pair<int ,int> > :: iterator it ;

    for(it = v_p.begin() ; it != v_p.end(); it++)
    {
        cout<<(*it).first <<" "<<(*it).second <<endl; 
    }
    // both above and below loop print same output
    for(it = v_p.begin() ; it != v_p.end(); it++)
    {
        cout<<(it->first) <<" "<<(it->second) <<endl; 
    }
    // (*it).first  <==>  (it->first)

}









