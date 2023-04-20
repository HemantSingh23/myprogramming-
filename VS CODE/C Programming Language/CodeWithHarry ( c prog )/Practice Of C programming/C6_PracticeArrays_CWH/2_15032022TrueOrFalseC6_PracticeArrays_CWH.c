

////////////////////////////////                  True Or False                    /////////////////////////////////////////


/* 

Question :: If S[3] is a 1-D array of integers, then *(S+3) refers to the third element:

1. True
2. False
3. Depends(machine or Architecture )

*/


// Answer  ::   2nd option i.e. False

/* 
first eliminate the 3rd option i.e depends    then  in 1st and 2nd option the correct answer is 2nd optiom i.e FALSE  because

S[3] is a 1-D array so *(S+3) means -

if   *(S+0)       then it refers to the 0th element but there is no 0th element in the array because only the index start 
from 0 so it refers to the 1st element of the given array S[3]


if   *(S+1)       because *(S+0) refers to the 1st element of the given array S[3] so  *(S+1)  refers to the 2nd element 
means 2nd element of the given array S[3]


if   *(S+2)       because *(S+1) refers to the 2nd element of the given array S[3] so  *(S+2)  refers to the 3rd element 
means 3rd element of the given array S[3]
  
if   *(S+3)       because *(S+2) refers to the 3rd element of the given array S[3] so  *(S+3)  refers to the 4th element 
means 4th element of the given array S[3]



*/





