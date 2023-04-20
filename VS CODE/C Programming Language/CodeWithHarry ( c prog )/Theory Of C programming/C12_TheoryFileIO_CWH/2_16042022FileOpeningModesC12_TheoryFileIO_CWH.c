

/////////////////////////////////               FILE OPENING MODES IN C                  ////////////////////////////////////////////// 


/* 

File opening modes in C ::

C offers the programmers to select a mode for opening a file.Here we open all the files using fopen() function
Following modes are primarily used in c File I/O -



"r"  --> Open For Reading
// we want to read a file then file must be exist

"rb" --> Open For Reading in Binary 

// If we use both the above modes ( "r"  , "rb" ) and if the file does not exist , then fopen() returns NULL  
// we want to read a file then file must be exist


************************************************************************************************************************************************************************************************************************************************************************************************************************


"w" --> Open For Writing
 
"wb"  --> Open For Writing in Binary 

// If  we use both the above modes ( "w"  , "wb" ) and if the file exist , then the contents will be overwrite

Overwrite means that the content which  was already written will be erased and new content will write .


************************************************************************************************************************************************************************************************************************************************************************************************************************


"a" --> Open For Append     

// Append means add something and here append means add some content at the last of the content of the any file
// If We use this modes ( "a" )  and if the file does not exist , then it will be created


************************************************************************************************************************************************************************************************************************************************************************************************************************


*/


#include<stdio.h>

int main()
{
    FILE *ptr;

    // ptr = fopen("sample.txt2", "r"); // for reading the file
// if sample.txt2 file does not exit then "r" mode will return a NULL pointer
// we want to read a file then file must be exist



    ptr = fopen("sample.txt2", "w"); // for writing the file

// if sample.txt2 file does not exit then "w" mose will generate a new file sample.txt2

    return 0;
}




