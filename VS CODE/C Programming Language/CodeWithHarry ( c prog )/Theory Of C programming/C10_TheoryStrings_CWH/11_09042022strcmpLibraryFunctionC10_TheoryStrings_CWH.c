

/////////////////////////////////              strcmp() LIBRARY FUNCTIONS       ////////////////////////////////////////////// 

/* 

strcmp()  ::

This function is used to compare two strings. It returns: 0 if strings are equal Negetive value if first strings 
mismatching character's ASCII value is not greater than second string's corresponding mismatching character. It returns 
positive values otherwise.



strcmp(“For”, “Joke”);                      => positive value
strcmp(“Joke”, “For”);                      => Negative value   




In simple way to find what will strcmp()  return  ??

1. 👈👈👈👈👈👈👈
if two stings are different then lets assume two different strings, 1st is "Hello" and 2nd is "Hemant" . In this case
program will compare first character of both the strings which is 'H' that is same , now  in both the strings program will 
compare the second character of both the strings which is 'e' in both the strings that is also same then third character of 
both the strings so in first string third character is 'l' and in second string third character is 'm' so third character 
of both the strings are different. Now program will substract the ASCII value of third character of the string (because 
third character of the both strings are different) which is l = 108 and m = 109. That  means 108 - 109 which gives a 
negative value that's why  strcmp() returns negative value which is -1 in output.

if here substraction of ASCII value characters is positive then strcmp() will return positive value which is 1 in output.



2.👈👈👈👈👈👈👈
if two srings is to be same then strcmp()  returns 0 value because all character of both string will be same. 



3.👈👈👈👈👈👈👈
if strings are different , 1st is "Hell" and 2nd is "Hello" then in this case als process will same as above written
in the first point but after when program compare the 5th character of strings then in the 1st string( "Hell" ) 5th 
character will be ' \0 ' and  in 2nd string , 5th character will be ' o ' . now substraction of  ASCII value of \0 and o
will be 0 - 111 which is a negative value so  strcmp()  will returns negative value which is -1 in output.

*/

#include<stdio.h>
#include<string.h>

int main()
{
    char st1[45] = "Hell";
    char *st2 = "Hello";

    int val = strcmp(st1, st2);

    printf("Now the val is %d", val);

    return 0;
}