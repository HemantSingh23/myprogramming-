


// Sorting = Arrange the set of number in  ascending order or descending order





// Selection Sort ==> Selection Sort ==> Selection Sort ==> Selection Sort ==> Selection Sort ==>
// Selection Sort ==> Selection Sort ==> Selection Sort ==> Selection Sort ==> Selection Sort ==>

// If an array is given then find the min element of this array and place it in the first position of the array   
// now in the remaining elements of array(all elements except the previous min element which we find in previous step) again find 
// the min element and place it in the second position(after the first position means after the previous min element ) of the array   
// Now repeate the same steps untill the last element of the array

// Example -  [11,25,12,22,64]

//   Sorted sublist        Unsorted sublist        Least element in unsorted list
//   []                    [11,25,12,22,64]         11
//   [11]                  [25,12,22,64]            12
//   [11,12]               [25,22,64]               22
//   [11,12,22]            [25,64]                  25
//   [11,12,22,25]         [64]                     64
//   [11,12,22,25,64]      []                             
//


// #include<bits/stdc++.h>
// using namespace std ;

// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i =0; i<n; i++)
//     {
//         cin>>a[i];
//     }
//     for(int i =0; i<n; i++)
//     {
//         // int minvalue = a[i] ;          // By array value
//         int minIndex = i ;                // By array index
//         for(int j =i+1; j<n; j++)
//         {
//             // if(a[i]>a[j])              // By array value
//             if(a[minIndex]>a[j])          // By array index
//             {
//                 // swap(a[i] , a[j]);     // By array value
//                 minIndex = j;             // By array index
//             }
//         }
//         swap(a[i] , a[minIndex]);         // By array index
//     }
//     for(int i =0; i<n; i++)
//     {
//         cout<<a[i]<<" ";
//     }
// // Time complexity = o(n) + o(n*n) + o(n) = o(n*n)    // Selection Sort
// } 




// Merge Sort ==> Merge Sort ==> Merge Sort ==> Merge Sort ==> Merge Sort ==>
// Merge Sort ==> Merge Sort ==> Merge Sort ==> Merge Sort ==> Merge Sort ==>

// In Merge Sort there are two concepts 1. Merge/Merging and 2.Sorting
// 
// 1. In first concept of Merge , if there are two sorted array is given then how to merge these two sorted array to make an new complete sorted array  
//    in Merging concept , compare the first index value of both the sorted array place the 1st smaller value in the final array  repeat the same process
//       //ex-> [3,27,38,43] and [9,10,82]  int this we compare the first index value 3 and 9 of both the sorted array place the 1st smaller value 3 in first position of the final
//       //now new array will be  [27,38,43] and [9,10,82]  now we compare 27 and 9 so we palce 9 in 2nd position in final array
//       //now new array will be  [27,38,43] and [10,82]  now we compare 27 and 10 so we palce 10 in 3rd position in final array
//       //repeat the same process untill we get the complete sorted array whic is [3,9,10,27,38,43,82]

//       // Time complexity ==>
//       // if first array is n1 size and second array is n2 size and final array size is n then n will be (n1 + n2) 
//       // in each iteration one value is definitely placed in the final array and total no of value in final array or size of final array is n or (n1 + n2) 
//       // so total n iteration or (n1 + n2)  iteration 
//       // so Time complexity =  o(n) where n is size of the array

// 2. In second concept of Sorting , the given unsorted array is divided into two half(if even then equal half or if odd then not equal half ) 
//    now each half is divided into two half again and repeat the same procedure untill we get the array of size 1 . 
//    now we use the first concept Merging and first merge the 1 size array and make a 2 size array then again 
//    apply Merging concept and megre again ans so on untill we get the complete sorted array.

//   // ex->  Unsorted Array       [38,27,43,3,9,82,10]
//
//                        [38,27,43,3]               [9,82,10]
//
//                     [38,27]     [43,3]          [9,82]     [10]
//
//                  [38]   [27]   [43]  [3]      [9]   [82]     [10]
//
// now merge       
//
//                     [27,38]     [3,43]          [9,82]     [10]
//
//                        [3,27,38,43]               [9,10,82]
//
//            Sorted Array         [3,9,10,27,38,43,82]





#include<bits/stdc++.h>
using namespace std ;

const int N = 1e5 + 10;
int a[N] ; // Because we will do merge sort using recursion
//that's we declare the global array so that we don't need to pass the array in the recursive function

void merge(int l , int r , int mid)
{
    // make one array of value of l to mid index and 2nd array of value of (mid+1) to r index
    int l_sz = mid - l + 1;   
    int L[l_sz + 1];     // here we make 1 extra size to store INT_MAX at l_sz index means L[l_sz] = INT_MAX ;         
    int r_sz = r - mid ;    // int r_sz = r -(mid +l) + 1;
    int R[r_sz + 1];     // here we make 1 extra size to store INT_MAX at r_sz index means R[r_sz] = INT_MAX ;
    for(int i =0; i<l_sz; i++)
    {
        L[i] = a[i+l];
    }
    for(int i =0; i<r_sz; i++)
    {
        R[i] = a[i + mid + 1] ;
    }
// now we compare the value of both the array L[l_sz + 1]; and  R[r_sz + 1]; 
    L[l_sz] = R[r_sz] = INT_MAX ;
    int l_i = 0 ;
    int r_i = 0 ;
    for(int i =l; i<=r; i++)
    {
        if(L[l_i] <= R[r_i])
        {
            a[i] =L[l_i];
            l_i ++;
        }
        else
        {
            a[i] = R[r_i];
            r_i ++;
        }
    }

}

void mergeSort(int l, int r)
{
    if(l==r) return;
    int mid = (l+r) /2;
    mergeSort(l,mid);
    mergeSort(mid+1 , r);
    merge(l,r,mid);
}

int main()
{
    int n;
    cin>>n;
    for(int i =0; i<n; i++)
    {
        cin>>a[i];
    }
    
    mergeSort(0,n-1) ;
    for(int i =0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
} 
// here in each step array divide in half means if n is size of array then
// n  then  n/2 , n/2   then   n/4,n/4 and n/4,n/4    and so on
// means means we divide the n by 2 , log(n) times  means in log(n) steps
//    // Proof ==> if we divide n by 2 ,  a times then number becomes 1 so
//    // 2^a = n => log(2^a) = log(n) => a*log(2) = log(n) => a = log(n)
//    // here ^ means raise to power

// now during mergin in each step we merge the array then in each step n size computation will be perform means o(n)
// and total log(n) steps so (n * lon(n) ) will be complexity

// Time complexity = o( n * lon(n) )  // Merge Sort


