

/////////////////////////////////                      fgetc() and fputc()                           ////////////////////////////////////////////// 

/* 

fgetc() and fputc()  ::

fgetc and fputc are used to read and write a character from/to a file.

fgetc(ptr);                  //=> Used to read a character from file 
//it will read the character from the file and give the output or print in the output  
//  fgets() stops at the end of the line means it reads to a new



fputc('c' ,ptr);              //=> Used to write character 'c' to the file 
//it will write the character in the file from the program and we will get the output in the file

*/





#include<stdio.h>

int main()
{
    FILE *ptr;

    ptr = fopen("7_getcdemo.txt" , "r");
    // 7_getcdemo.txt file must be exist .


//***************************************************************************************************************************************************************************************************************************************************************************************************************
    // printf("If we use this , Program will read the same character of  file 7_getcdemo.txt  again and again \n");  

    // char c = fgetc(ptr);

    // printf("The value of my character is %c\n", c );
    // printf("The value of my character is %c\n", c );
    // printf("The value of my character is %c\n", c );
    // printf("The value of my character is %c\n", c );
    // printf("The value of my character is %c\n", c );  


//***************************************************************************************************************************************************************************************************************************************************************************************************************


    printf("If we want , Program read the file 7_getcdemo.txt  character by character then we will use fgetc(ptr) \n");  
    

    printf("The value of my character is %c\n", fgetc(ptr) );
    printf("The value of my character is %c\n", fgetc(ptr) );
    printf("The value of my character is %c\n", fgetc(ptr) );
    printf("The value of my character is %c\n", fgetc(ptr) );
    printf("The value of my character is %c\n", fgetc(ptr) );
    printf("The value of my character is %c\n", fgetc(ptr) );
    printf("The value of my character is %c\n", fgetc(ptr) );
    printf("The value of my character is %c\n", fgetc(ptr) );
    printf("The value of my character is %c\n", fgetc(ptr) );
    printf("The value of my character is %c\n", fgetc(ptr) );
    printf("The value of my character is %c\n", fgetc(ptr) );
    printf("The value of my character is %c\n", fgetc(ptr) );
    printf("The value of my character is %c\n", fgetc(ptr) );

    

//***************************************************************************************************************************************************************************************************************************************************************************************************************


    ptr = fopen("7_putcdemo.txt" , "w");
    // 7_putcdemo.txt file will be generated

    putc('c' , ptr);
    putc('c' , ptr);
    putc('c' , ptr);
    putc('c' , ptr);
    putc('c' , ptr);



    fclose(ptr);


    return 0;
}