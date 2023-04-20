

/////////////////////////////////               gets() AND puts() FUNCTION           ////////////////////////////////////////////// 

/* 

gets() and puts()  ::=



gets() :-

gets() is a function that can be used to receive a multi-word string.

char st[30];
gets(st);       // the entered string is stored in st .


Multiple gets() calls will be needed for multiple strings.




puts() :-

Likewise, puts can be used to output a string.
puts(st);   =>Prints the string and places the cursor on the next line


*/


#include<stdio.h>

int main()
{
    char s[34] ;   // in this string  s , at most 34 characters can be save  
    printf("Enter your name: ");
    gets(s);    // instead of scanf we will use gets to take the input of the strings(two or mare than two words with spaces )

    puts(s);
    printf("My name is %s\n\n", s);
    
    
    return 0;
}
