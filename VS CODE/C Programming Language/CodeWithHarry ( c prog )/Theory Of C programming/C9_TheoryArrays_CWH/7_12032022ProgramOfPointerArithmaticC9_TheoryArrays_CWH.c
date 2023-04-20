 

////////////////////////////////             PROGRAM OF POINTER ARITHMETIC                      /////////////////////////////////////////



// 👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇     PLEASE ALSO READ THE LAST LINES     👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇




#include <stdio.h>

int main()
 {
    int i;
    int *ptr = &i;
    

    printf("Enter the value of i :: ");
    scanf("%d", &i);

    printf("The address of i is %u\n", &i); // &i is  address of i  AND value of address of i is equal to ptr

    printf("The value of ptr is %u\n", ptr);


    ptr++;
    // ptr = ptr + 1;
    printf("The value of ptr is %u\n", ptr);


    ptr = ptr + 2;
    printf("The value of ptr is %u\n", ptr);


    ptr++; // ptr = ptr + 1;
    ptr++; // ptr = ptr + 1;
    printf("The value of ptr is %u\n", ptr);


    ptr--;
    // ptr = ptr - 1;
    printf("The value of ptr is %u\n\n\n", ptr);






    float c;
    float *r = &c;

    printf("Enter the value of c :: ");
    scanf("%f", &c);

    
    printf("The address of c is %u\n", &c);

    printf("The value of r is %u\n",r);


    r ++;
    // r = r + 1;
    printf("The value of r is %u\n",r);


    r --;
    // r = r - 1;
    printf("The value of r is %u\n\n\n",r);






    // char d;
    // char *h = &d;

    // printf("Enter the value of d :: ");
    // scanf("%c", &d);

    // printf("The value of d is %c\n", d);
    // printf("The address of d is %u\n", &d);

    // printf("The value of h is %u\n",h);


    // h ++;
    // // h = h + 1;
    // printf("The value of h is %u\n",h);


    // h --;
    // // h = h - 1;
    // printf("The value of h is %u\n",h);

    return 0;
}

/* 
for int and float ,
The change in tha value of the ptr is ±4  or the multiplied of ±4. when we are using   ptr ++;   or   ptr = ptr + 2;
or ptr ++;   ptr ++;  (means ptr ++; two times )  then the value of ptr increased by  4 and   8(multiple of 4)  and
8(multiple of 4) .

But when we are using   ptr --;   then the value of ptr decreased by  4 .

The change in tha value of the ptr is ±4  or the multiplied of ±4  because here 4 is the bytes which is the  size of the
integer in my machine or architecture.

*/

/*
But for    char    then the  change in tha value of the ptr is ±1 or the multiplied of ±1.
because the size of the character is 1 bytes.

*/
