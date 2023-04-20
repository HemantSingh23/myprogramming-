
/////////////////                BASICS OF C++            //////////////////


#include<iostream> 
/*   It is a headerfile.This line tells us that a file name iostream 
already exists. From this file (iostream) ,  ready the useful things for use in the program.
We include the iostream file because it help in input/output. 
Here io means input/output.    */

/*      < and > are called Angular Brackets.        */


int main()  
/*int means integers And main is a function. A program is always start from 
the main() function . And main() function returns the integers to our operating system.
() open and closed parenthethis tells us that it is a function.*/



{ 

/*   These open and closed curly braces start the function body and  closed the fuction
body.Inside the curly braces {} everything which is written is called function body.    */

// in the function body we write the instruction one by one.


std::cout <<"Hello World";
      
/* This whole line is a instruction. cout is function which is in standard namespace that's why we use std and ::(scope resolution operator)  
\\\\\\\    :: is called scope resolution operator    */

/* INSTEAD OF WRITING std:: WE CAN ALSO WRITE 'using namespace std;' BEFORE int main()      */

/*    < and > are called Angular Sign. And inside the double quotes everything is called string.     */







return 0; // it is also a instruction

}