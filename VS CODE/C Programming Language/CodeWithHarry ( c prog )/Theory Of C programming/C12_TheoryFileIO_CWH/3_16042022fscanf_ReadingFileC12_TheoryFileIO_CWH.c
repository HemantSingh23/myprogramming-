

/////////////////////////////////              TYPES OF FILES AND READ FILE                ////////////////////////////////////////////// 


/* 

Types of Files :: 

There are two types of files:

1. Text files(.txt, .c)
2. Binary files(.jpg, .dat)


********************************************************************************************************************************************************************************************************************


Reading a file ::

A file can be opened for reading as follows:


FILE *ptr;
ptr = fopen("Harry.txt" , "r");
int num;




Let us assume that "Harry.txt"  contains an integer
We can read that integer using:

fscanf(ptr , "%d", &num);               => fscanf is file counterpart of scanf

This will read an integer from the file in the num variable.
Means fscanf  take the input from the file  where as scanf takes the input from the user


fscanf ONLY READS UP TO WHITESPACE.

*/



#include<stdio.h> 

int main()
{
    FILE *ptr;

    int num; // we will take the value of num from the 3_Hemant.txt file
    int num2;       
    ptr = fopen("3_Hemant.txt" , "r");
// we want to read a file then file must be exist
// 3_Hemant.txt file must be exist
    
    fscanf(ptr , "%d", &num);
    fscanf(ptr , "%d", &num2);

    fclose(ptr); // This will close the file

    printf("The value of num is %d\n", num);
    printf("The value of num2 is %d\n", num2);

    
    return 0;
}