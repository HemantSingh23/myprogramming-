


//  STL = Standard Templete Library

// STL is a internal Implementing Library of C++


// Now according to LUV youtuber  STL have 4 parts
// A. Container
// B. Iterators
// C. Algorithms
// D. Functors



//  A. Container ==>
//  Containers are Data Strucure which are pre-implemented in STL 
//  Containers are divided in 4  parts or basic bifurcation of Containers is given below
//
//     1. Sequential Containers => which are implemented like array in sequential manner
//        In this some following are includes .
//        // (a) Vectors 
//        // (b) stack
//        // (c) Queue 
//        // (d) Pair (not a container it is class but is can't be define in other category that't why it is mentioned here )
//  
//     2. Ordered Containers => In this values are stored in the sorted order like scending order or descending order 
//        // (a) Maps 
//        // (b) Multimap
//        // (c) set 
//        // (d) Multiset
//  
//     3. Unordered Containers => These are based on the hashing algorithm
//        // (a) Unordered Map
//        // (b) Unordered Set
//       
//     4. Nested Containers => Means Containers inside the Containers
//        //  Vectot< vector <int> > 
//        //  map <int> , vector <int> >
//        //  set < pair <int , string >  >
//        //  set < map <int , set<int> >  >
//     



//  B. Iterators ==> It is similar to pointers. It points to memory address of containers
//
//     1. begin() 
//     2. end()
// 
//  //way of representing = vecor <int> :: iterator it ;
// 
//    
   


//  C. Algorithms  ==> In C++ STL, the following algorithm are already implemented in best possible optimized form 
//
//
//   1 . Upper Bound  -> Based on Binary Search and help in finding the just greater element in container 
//                       with log(n) complexity 
//
//   2 . Lower Bound  -> Based on Binary Search and help in finding the just smaller element in container
//                       with log(n) complexity 
//
//   3 . Sort(comparator) ->   complexity = n*log(n), although complexity is same as merge sort still faster than merge sort        
//       here comparator gives the capability of custom sorting behaviour in complex data structure like ascending or descending
//
//   4 . max-element ->   To find the max element in array without for loop  
//
//   5 . min-element ->   To find the min element in array without for loop           
//
//   6 . accumulate ->   To find the sum of element in array without for loop           
//
//   7 . reverse ->  Using this we can reverse the array , vector or string          
//
//   8 . count ->  Find the count of any element in the container
//
//   9 . find ->  Find the position of any element in the container                  
//
//  10 . next permutations ->  Find the next permutation
//
//  11 . previous permutations  ->  Find the previous permutation
// 
// 
//       



//  D. Functors  ==> Functors are classes in C++ STL which can act as functions  
//                   or we can use as a function 
//