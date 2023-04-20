

/////////////////////////////////               CHECK FILE EXISTS OR NOT BEFORE OPENING THE FILE               ////////////////////////////////////////////// 

/*  QUICK QUIZ: Modify the previous program  to check whether the file exists or not before opening the file. */


#include<stdio.h> 

int main()
{
    FILE *ptr;

    int num; // we will take the value of num from the 3_Hemant.txt file
    int num2;       


    // ptr = fopen("3_Hemant.txt" , "r");
/*Because 3_Hemant.txt file is exist so fopen()  will not  return NULL   and then  else condition will execute and 
    output of the program will be same as the output of the previous program. */
    
    ptr = fopen("4_Hemant.txt" , "r");  
/* Because 4_Hemant.txt file is exist so fopen()  will return NULL then   if condition will execute and output of the program 
will be "The file does not exist".  */

    if ( ptr == NULL )
    {
        printf("The file does not exist\n");
    }



    else
    {
        fscanf(ptr , "%d", &num);
        fscanf(ptr , "%d", &num2);

        fclose(ptr); // This will close the file

        printf("The value of num is %d\n", num);
        printf("The value of num2 is %d\n", num2);
    }

    
    return 0;
}