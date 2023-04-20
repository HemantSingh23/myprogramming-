

//////////////////////                         CONTROL STRUCTURE                          //////////////////////


/* 
In this series of our C++ tutorials, we will visualize the control structure, if-else, and switch statements in the 
C++ language in this lecture. In our last lesson, we discussed the constant, manipulators and operator precedence in C++.
 
In this C++ tutorial, the topics which we are going to cover today are given below:


Control Structures in C++ ::

IF Else in C++
Switch Statement in C++
Control Structures in C++  ::


The work of control structures is to give flow and logic to a program. There are three types of basic control 
structures in C++.




1. Sequence Structure :
Sequence structure refers to the sequence in which program execute instructions one after another. 

2. Selection Structure :
Selection structure refers to the execution of instruction according to the selected condition, which 
can be either true or false. There are two ways to implement selection structures, 
by "if-else statements" or by "switch case statements".

3. Loop Structure :
Loop structure refers to the execution of an instruction in a loop until the condition gets false.

*/


// Example of  Sequence Structure  

#include<iostream>
using namespace std;

int main()
{
    cout<<"Hello"<<endl;

    int a = 50;
    cout<<"The value of a is "<<a<<endl;
    return 0;
}
