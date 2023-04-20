
/////////////////////////              WHAT IS FUNCTION  ??            //////////////////////// 

 /* What is need of the function?? 
 
 we use the function when program is in very big size.
if we write a very big program in main()  then it is very hard to find out that which
part of this program is doing what. beacause we write the wholl program in the main() so the 
size of the program will also increse.
Writing a very big or small program in the main() is absolutely  correct but not efficient 
way that's why we function.
But if we use the function in the program then we can write the program in the 
different-different portion.
  */


 /*  What is function ?? 
 A function is block of code which performs a particular task.A function can be reused by the
 programmer in a given program any number of times.


 Example and Syntax of a function:
 
 

 #include<stdio.h>
 void display();                // Function Prototype
// Here void means 'nothing returns' . 


 int main()
 {
     int a;
     display ();               // Function Call

     return 0;
 }

 void display ()               // Function definition
 {
     printf("Hi, i am display");
 }
*/

/* 👉👉👉👉👉👉 isme hm Function Prototype ki jagah direct Function definition likh skte hai 👈 👈👈👈👈👈👈👈 */
/* 👉👉👉👉👉👉 Pr recommandation ye hai ki Function Prototype ki jagah direct Function definition NA likhe */

  /*
  Function Prototype :
  function prototype is a way to tell the compiler about the function we are going to define
  in the program.
  Here Void indicates that the function returns nothing.


  Function Call :
  function call is a way to tell the compiler  to execute the function body at the 
  time the Call is made. 
  Note that the program execution starts from the main function in the sequence the instructions
  are written.


  Function Defition :
  This parts contains the exact set of instruction which are executed  during the function call
  When a function is called from main(), the  main function falls asleep and gets temporarily
  suspended. during this time the control goes to the function being called. When the function
  body is done execution main()
 
    */