

////////////////////////////////              ENCRYPT A STRING           /////////////////////////////////////////


/* Write a program to encrypt a string by adding 1 to the ASCII value of its characters. */

/* We will write a program which will encrypt the string. With the help of this program we can encrypt a message from the
other for security purpose.*/

#include<stdio.h>

void encrypt( char *c)
{
    char *ptr = c; 
    while ( *ptr != '\0')
    {
        *ptr = *ptr +1;
        ptr++;
    }
}

int main()
{
    char c[] = "Hemant";
    encrypt(c);

    printf("Encrypted string is : %s",c);

    return 0;
} 