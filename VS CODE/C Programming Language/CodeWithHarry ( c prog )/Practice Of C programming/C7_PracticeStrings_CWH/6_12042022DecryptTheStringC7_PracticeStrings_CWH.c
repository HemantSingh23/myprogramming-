

////////////////////////////////              DECRYPT A STRING           /////////////////////////////////////////


/* Write a program to decrypt the string encrypted using the encrypt function .  */


#include<stdio.h>


//for encrypting the string

void encrypt( char *c)
{
    char *ptr = c; 
    while ( *ptr != '\0')
    {
        *ptr = *ptr +1;
        ptr++;
    }
}





// for decrypting the string

void decrypt( char *c)
{
    char *ptr = c; 
    while ( *ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}




int main()
{
    char c[] = "Hemant";
    encrypt(c);

    printf("Encrypted version of string 'Hemant'  is : %s\n\n",c );



    char d[] = "Ifnbou" ;       // Encrypted version of string "Hemant"  is  Ifnbou  .

    decrypt(d);

    printf("Decrypted version of '%s'  is : %s\n\n", c , d);


    return 0;
} 
