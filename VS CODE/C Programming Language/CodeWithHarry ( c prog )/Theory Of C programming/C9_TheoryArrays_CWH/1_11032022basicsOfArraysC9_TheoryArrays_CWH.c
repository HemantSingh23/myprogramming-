

////////////////////////////////////                     WHAT IS ARRAYS ??                     ////////////////////////////////////////////// 
/* 

Arrays ::    An array is a collection of similar elements.
ex. means ki agar integer le lia to phir integer hi rhega aur agar float lia to phir float hi rhega dono nhi ho skte

arrya is like a  One variable (Capable of storing multiple similar  values).



Syntax:

The syntax of declaring an array looks like this: 

int marks[90];                    => integer array

char name[20];                    => character array or string

float percentile[90];             => float array       */


///////////////////              //////////////////             //////////////////            ////////////////////       ////////////////////////////////


#include<stdio.h>

int main()
{



    // int marks1 , marks2 , marks3 , marks4 ;

    // marks1 = 34;
    // marks2 = 45;
    // marks3 = 67;
    // marks4 = 87;
/* The above way is a naive way to create 4 ints variable because agar hme aise hi agar 100 ya usse jyada marks ke variable 
huen to is tarah krne me bhut jyada problem hogi isiliye hm aaray ka use krte hai . Array ka use krke neeche kiya gya hai */



int marks[4];

marks[0] = 34 ;
marks[1] = 45 ;
marks[2] = 67 ;
marks[3] = 87 ;


    return 0;
}


//////////////            /////////////////            ///////////////////              ///////////          //////////////////////    ///////////////////// 




/*  

The values can now be assigned to marks array like this:

marks[0]=33;

marks[1]=12;

Note: It is very important to note that the array index starts with 0.

isme phle bachche ke marks ko lene ke liye hmne 0 se start kiya hai    marks[0]   
asia isliye kiya kyuki  specialy c language me  index 0 se startn hota hai mostly sabhi language me index 0 se hi start hota 
hai aur  0  se  n-1  tk jata hai isiliye hmne uper ke program me   marks[0]   se   marks[3] tk kiya tha  kyuki     
int marks[4];   isme 4 tk hai


marks =>       [7]   [6]   [21]   [3]   [91]   [3]   [56]   [1]  ........................   [99]   [76]   [8]   
                
//              0     1     2      3     4      5     6      7   ........................    87     88     89                     


//       in the above there are total 90 marks becasue index starts with 0 .

*/


