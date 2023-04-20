

////////////////////////////////           ARRAYS IN MEMORY                       ///////////////////////////////////////// 



/* 
Arrays in memory :: 
An array in C/C++ or be it in any programming language is a collection of similar data items 
stored at CONTIGUOUS MEMORY LOCATIONS and elements can be ACCESSED RANDOMLY USING INDICES OF AN ARRAY.
  
Consider this array:

Int arr[3] = {1,2,3}      => here     1 integer = 4 bytes   

*/
// ek integer hmesha 4 bytes ka nhi hota 1 integer kitne bytes ka hota ye Architecture aur machine pe depen krta hai.



/* 
This will reserve 4x3=12 bytes in memory. 4 bytes for each integer.

//       [  1  ][  2  ][  3  ]      =>     [     ]   it is a memory block and here memory blocks are of 4 bytes .
//        62302  62306  62310       =>     these are address of memory block  

*/




// here memory blocks are of 4 bytes isliye 1 agar 62302 me hai to 2 phir 62306 aur 3 bhi 62310 me hoga kyuki yha pr
// array me memory block continuous hote hai aur yha pr ek memory blocks  4 bytes ka hai.



// ab agar koi ye puche ki ye kitni memory reserve karega to phla question hmara usse ye hona chahiye ki ek integer kitne 
// bytes ka hai() kyuki ek integer hmesha 4 bytes ka nhi hota 1 integer kitne bytes ka hota ye Architecture aur machine pe
// depen krta hai to agar 4 bytes ka integer hai to 3x4 = 12 bytes memory reserve ho jayegi.



// array hmesh continuous memory block me save hota hai isliye agar hamare pass first block ka address hai to phir 
// hm aage ke kisi bhi block ka address pta kr skte hai kyuki array hmesh continuous memory block me save hota hai

/* 

Pointer Arithmetic
A pointer can be incremented to point to the next memory location of that type.


 */