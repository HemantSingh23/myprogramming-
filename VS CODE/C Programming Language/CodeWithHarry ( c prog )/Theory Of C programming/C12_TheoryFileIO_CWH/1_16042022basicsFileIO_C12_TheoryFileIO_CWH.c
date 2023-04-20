

/////////////////////////////////               WHAT IS File I/O ??                  ////////////////////////////////////////////// 

/* 

File I/O :: 

The random access memory is volatile and its content is lost once the program terminates. In order to persist the data forever, we use files.
A file is  data stored in a storage device. A-C program can talk to the file by reading content from it and writing content to it.

//
//
//
//                                     Write
//              [  C Program  ]      <======>           [  File  ]
//                                     Read
//
//

FILE pointer ::  

The 'FILE' is a structure that needs to be created for opening the file. A file pointer is a pointer to this structure of the file.
File pointer is needed for communication between the file and the program.
A file pointer can be created as follows:

FILE *ptr;
ptr=fopen("filename.ext","mode"); 
// here mode means file open mode means what can we do with the file ? either read or write or anything else?


*/

#include<stdio.h>

int main()
{
    FILE *ptr;
    // ptr = fopen("sample.txt", "r"); // for reading the file
// we want to read a file then file must be exist


    ptr = fopen("sample.txt", "w"); // for writing the file

    return 0;
}
