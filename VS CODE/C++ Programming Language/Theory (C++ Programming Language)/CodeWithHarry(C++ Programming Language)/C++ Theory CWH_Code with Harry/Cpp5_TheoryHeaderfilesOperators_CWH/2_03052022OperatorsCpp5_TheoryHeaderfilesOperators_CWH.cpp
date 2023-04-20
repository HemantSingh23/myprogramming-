

///////////////////////////////                      OPERATORS                        ////////////////////////////

/* 

Operators in C++ ::

Operators are used for producing output by performing various types of calculations on two or more inputs. In this lecture, 
we will see the operators in C++.


Types of Operators :

1. Arithmetic Operators:
Arithmetic operators are used for performing mathematical operations like (+, -, *).

Ex. 

(i)     The function "a+b", will add a and b values and print them.
(ii)    The function "a-b "will subtract a and b values and print them.
(iii)   The function "a*b" will multiply a and b values and print them.
(iv)    The function "a/b ", will divide a and b values and print them.
(v)     The function "a%b ", will take the modulus of a and b values and print them.
(vi)    The function "a++" will first print the value of a and then increment it by 1.
(vii)   The function "a--", will first print the value of a and then decrement it by 1.
(viii)  The function "++a", will first increment it by one and then print its value.
(ix)    The function "--a", will first decrement it by one and then print its value.



2. Assignment Operators:
Assignment operators are used for assigning values to variables. For example: int a = 10, b = 5;

3. Comparison Operators:
Comparison operators are used for comparing two values. 

(i)    The function "(a==b)", will compare a and b values and check if they are equal. The output will be one if equal, 
and 0 if not.

(ii)   The function "(a!=b)", will compare a and b values and check if "a" is not equal to "b". The output will be one 
if not equal and 0 if equal.
  
(iii)  The function "(a>=b)", will compare a and b values and check if "a" is greater than or equal to "b". The output will
be one if greater or equal, and 0 if not.

(iv)   The function "(a<=b)", will compare a and b values and check if "b" is greater than or equal to "a". The output will 
be one if greater or equal, and 0 if not.

(v)    The function "(a>b)", will compare a and b values and check if "a" is greater than "b". The output will be one if 
greater and 0 if not.

(vi)   The function "(a<b)", will compare a and b values and check if "b" is greater than "a". The output will be one if 
greater and 0 if not.




4.Logical Operators
Logical operators are used for comparing two expressions. For example ((a==b) && (a>b)).



Logical Operators

(i)    The function "((a==b)&& (a<b))" will first compare a and b values and check if they are equal or not; if they 
are equal, the next expression will check whether "a" is smaller than "b". The output will be one if both expressions 
are true and 0 if not.

(ii)   The function "((a==b) || (a<b))", will first compare a and b values and check if they are equal or not, even if 
they are not equal it will still check the next expression ie whether "a" is smaller than "b" or not. The output will be 
one if any one of the expressions is true and 0 if both are false.

(iii)  The function "(!(a==b))", will first compare a and b values and check if they are equal or not. The output will be 
inversed ie if "a" and "b" are equal; the output will be 0 and 1 otherwise.



*/


#include<iostream>
using namespace std;

int main()
{
    int a=4 ,b=5 ;
    cout<<"Operators in C++"<<endl;
    cout<<"Following are the types of operators in C++"<<endl;
   
    // Arithmetic operators
    cout<<"The value of a+b is "<<a+b<<endl ;
    cout<<"The value of a-b is "<<a-b<<endl ;
    cout<<"The value of a/b is "<<a/b<<endl ;
    cout<<"The value of a*b is "<<a*b<<endl ;
    cout<<"The value of a%b is "<<a%b<<endl ; 
    cout<<"The value of a++ is "<<a++<<endl ; // after this a=5 before it a = 4
    cout<<"The value of a-- is "<<a--<<endl ; // after this a=4 and before it a = 5
    cout<<"The value of ++a is "<<++a<<endl ;
    cout<<"The value of --a is "<<--a<<endl ;


    // Assignment Operators
    // int a =3, b=9;
    // char d='d';


    // Comparison operators
    cout<<"The  value of a == b is" << (a == b) << endl ;
    cout<<"The  value of a != b is" << (a != b) << endl ;
    cout<<"The  value of a > b is" << (a > b) << endl ;
    cout<<"The  value of a < b is" << (a < b) << endl ;
    cout<<"The  value of a <= b is" << (a <= b) << endl ;
    cout<<"The  value of a >= b is"  << (a >= b) << endl ;



    // Logical operators
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl; 
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl; 
    cout<<"The value of this logical not operator (!(a==b)) is:"<<(!(a==b))<<endl; 




    return 0;
}




