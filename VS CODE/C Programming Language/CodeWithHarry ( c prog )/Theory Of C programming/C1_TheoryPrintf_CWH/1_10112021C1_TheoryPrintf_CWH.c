


#include <stdio.h> // #include <stdlib.h>  is a preprocessor directive

int main() /*int main() is a function and int means it return a integer value.
A C program execution will always start from main() function */

{

    int a = 4; /*if int tom; then  it means that make a variable name tom in memory */

    // ; terminate the instruction or statement

    /*int a=7.8;  is not recommended because 7.8is not integer so it does not print and int
    use only for integers values*/

    float b = 8.5; // float is used for real values except integers
    char c = 'u';  // char is use for characters(like-  '@' , '$' ,  'k')

    printf("The value of a is %d", a); /*printf is library function.Inside the  Double quote ( " " ), everything is
      a string  and string will print in the console */
    //  %d  is for integers and %d is called format specifier.
    
    printf("The value of b is %f", b); // %f for real values and  is called format specifier 
    printf("The value of c is %c", c); // %c for characters( like- 'k')

    return 0; /* we can not write return as RETURN because c programming language is case sensitive.
      and we also can not write return and 0 together */
              // return0;  it is wrong
              // return 0;  it is correct
}
