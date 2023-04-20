

/////////////////////////////////               QUIZ :: CREATE STRING              ////////////////////////////////////////////// 

/* QUICK QUIZ: Create a string using " " and print its content using a loop.    */

#include<stdio.h>

int main()
{
    // char str[] = {'H', 'e', 'm', 'a', 'n', 't', '\0' };
    char str[] = "Hemant";
/*  Both the above statements will gives the same  output but when we run the below statement means double quote 
form then first compiler change the below statement in the above statement form means in the single quote form  */


    // char *ptr = str;
    char *ptr = &str[0];

    /*
    IN both the above intruction,  *ptr point to 1st character address means *ptr point to the 'H' character 
    address so char *ptr value becomes 82210  
    */
    
    

    while(*ptr != '\0')
    {
        printf("%c", *ptr );
        ptr++;
    }

    /* in printf we are  doing dereference so the value at this address 82210 will be 'H' 
    then in while loop 'H' is not equal to to '\0' so while loop will be executed and H will be print 
    after this ptr will become ptr++ so now this time ptr point to the 'e' character and as same as process will be
    executed till  null character  ' \0 '   . 
    but when ptr point to null character  ' \0 '  then while loop will not be executed and string will be 
    terminated .
    */ 
    return 0;
}  

