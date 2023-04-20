
////////////////////////             WHAT IS POINTERS ??           //////////////////////// 

// 
// %%%&&##$$$   🤨🤨🤨 👇👇👇👇  👉👉👉👉👉 ALSO READ THE LAST LINES 👈👈👈👈👈  👇👇👇👇  🤨🤨🤨     &&&&$$$$$##%%%%%

//                 👇👇👇👇  👉👉👉👉👉        READ THE DIFFERENCE  👈👈👈👈👈  👇👇👇👇



/*  Pointers :: 
//
// A Pointer is a variable that stores the address of another variable.
// Here  address means the address of the  memory, like floats store the decimal numbers etc.
// Size depends on the architecture . Ex   2 bytes for 32-bit 
//
// 
//                     i                            j     
//                                                          
//                    [72]                        [87994]       // here we must use blocks but here we can not make the 
//                                                              // blocks that's why we are using the brackets
//       address ->   87994           address  ->  87998        // here blocks means memory Blocks
//
//
// address means ki ye pta lagana ki kaun se blocks me ye 72 number save hai to iske liye hm addres 87994 de dete hai.
// 
// ab maan lo ki i koi variable hai jisme koivalue integer value 72 store hai(means ki uske memory blocks me 72 save hai)
// jiska  address 87994 hai , similarly j variable bhi hai  bs i  variable me hmne 72 daala tha pr yha j  varialbe me 
// hmne i ke address  ko hi daal diya  joki 87994 ( i variable ka address ) hai aur j variable ka address 87998 hai.
// ISLIYE j eK POINTER HAI JOKI i KO POINT KR RHA HAI.


//////////////////        JO VARIABLE ADDRESS KO STORE KRTA HAI USKO POINTER KHTE HAI           ///////////////////////// */



////////////       /////////////    //////////           //////////           /////       ////////     ///////   ///////   //////////         

/*

The "address of" (&) operator : it gives the address of the variable.

The address of operator is used to obtain the address of a given variable

If you refer to the diagrams above

&i =>  87994  // here &i means address of i and      the value of &i is 87994.

&j =>  87998  // here &i means address of j and      the value of &j is 87998.        */


/////////////////////                   ////////////////////////                 ////////////////////////////         ///////////////////////////

/* 
Now the question is that , how would we print &i or &j  ??
so the answer is that we will use the format specifier ( %u ) .

FORMAT SPECIFIER FOR PRINTING POINTER ADDRESS IS %u


DEREFERENCE OPERATOR or INDIRECTION OPERATOR ( * ) :
  
Dereference operator or indirection operator is also called The "value at address" operator and denoted by asteric ( * )


The value at address ( * )  operator is used to obtain the value present at a given memory address. 

* (&i) = 72                 // here * (&i) means value in the address of i (that means value in 87994 ) that is 72
 
* (&j) = 87994              // here * (&j) means value in the address of j (that means value in 87998 ) that is 87994     */

//////##//////   ***     ////##/////    ***     /////##/////   ***    /////##//////   ***      /////##//////   ***    ////##///    /////////////             /////////////            /////////////           /////////


/*    

HOW TO DECLARE A POINTER  ??? 

Pointer in C programming language can be declared using * (asteric symbol).

A pointer is declared using the following syntax :                datatype *pointer_name;            

int *j;  => declare a variable j of type int-pointer
j=&i      => store address of i in j

// here j ek aisa varialbe jo integer addresses ko store krta hai



Just like pointer type integer, we also have pointers to char, float, etc.

int *ch_ptr;       ->   pointer to integer

char *ch_ptr;      ->   pointer to character

float *ch_ptr      ->   pointer to float


Although it's a good practice to use meaningful variable names, we should be very careful while reading & working 
on programs from fellow programmers.   */ 

// 👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇

/*        👉👉👉👉👉👉👉👉👉👉👉👉                    DIFFERENCE                👈👈👈👈👈👈👈👈👈👈👈👈

dereference operator(*) aur jo hm pointer declare krne ke liye variable  ke phle * ka use krte hai to ye deno alag - alag 
hote hai

THE OPERATOR UNARY * (ASTERISK) WHICH IS USED FOR TWO THINGS : 

1. To declare a pointer variable: When a pointer variable is declared in C/C++, there must be a * before its name. 

2. To access the value stored in the address we use the unary operator (*) that returns the value of the variable located 
at the address specified by its operand. This is also called Dereferencing.


👇👇👇👇👇👇👇👇👇👇👇👇👇👇   👁👁👁👁👀👀👀👁👀👀👀👀 👇👇👇👇👇 👀👀👀👀 👇👇👇👇👇    👀👀👀👀 👇👇👇👇👇 👀👀👀👀

Let j is a integer variable if we are declaring a pointer variable then *j means pointer to integer.

and if we want the value store in j then still we will use *j.

in both the above condition we has used *j but both have different meaning. The output of  *j  is totally depends on the
use means how we use the *j .   



 */