

/////////////////////////////////                       WRITING TO  A FILE                            ////////////////////////////////////////////// 


/* 

Writing To A File :: 

We can write to a file in a very similar manner as we read the file

FILE *fptr;
fptr=fopen(“Harry.txt”,”w”) ;
int num=432;
fprintf(fptr,”%d”,num); // fprintf() is same as fscanf and fprintf() will write the content in the file 
fclose(fptr);


*/


//  👉👉👉👉👉👉👉👉👉👉👉👉👉👉👉👉👉👉👉  OUTPUT OF THIS PROGRAM WILL BE SHOW IN FILE   6_Generated.txt     👈👈👈👈👈👈👈👈👈👈👈👈👈


#include<stdio.h>

int main()
{
    FILE *fptr;
    int number = 45;

    fptr = fopen("6_Generated.txt" , "w");
    /* A file will be created with name 6_Generated.txt  */

    fprintf( fptr , "The number is %d\n", number);
    /* 'The number is 45' will be save in the file 6_Generated.txt  */

    fprintf( fptr , "Thanks For Using fprintf \n");
    
    fclose(fptr);

    return 0;
}

//  👉👉👉👉👉👉👉👉👉👉👉👉👉👉👉👉👉👉👉  OUTPUT OF THIS PROGRAM WILL BE SHOW IN FILE   6_Generated.txt     👈👈👈👈👈👈👈👈👈👈👈👈👈