
///////////////           Character Lowercase Or Not       ////////////////

/* Write a program to determine whether a character entered by the user is lowercase 
or not */
// ASCII value of a to z is from 97 to 122.
# include<stdio.h>
int main()
{
    char A;
    printf("Enter the character\n");
    scanf("%c", &A);
if(A>='a' &&A<='z')
// or    if(A>=97 &&A<=122)

{
    printf("Character entered by the user is lowercase.\n");
}

else 
{
    printf("Character entered by the user is not lowercase.\n");
}

    printf("And the ASCII value of character is %d.\n",A);
// it is valid only for all characters and digit range 0-9.

return 0;
}