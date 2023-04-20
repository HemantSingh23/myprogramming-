
////////////////////////             A PROGRAM TO DEMONSTRATE THE POINTERS          ////////////////////////

#include <stdio.h>

int main()
{
    int i;
    printf("Enter the value of i :: ");
    scanf("%d", &i);

       
    int *j = &i; // here * is not dereference operator. here * declaring the variable j

    printf("The value of i is %d\n", i);   // this line and the below line output must be same.
    printf("The value of i is %d\n", *j);  // HERE * REPRESENTING THE dereference operator AND IT GIVES 'value at address'


    printf("The address of i is %d\n",&i); // 
    printf("The address of i is %d\n",j);  // this line and the above line output must be same.

    printf("The address of i is %u\n",&i); //   FORMAT SPECIFIER FOR PRINTING POINTER ADDRESS IS %u

    printf("The address of i is %u\n",j);  //   FORMAT SPECIFIER FOR PRINTING POINTER ADDRESS IS %u


    printf("The address of i is %x\n",&i); // %x print in hexadecimal .
    printf("The address of i is %x\n",j);  // this line and the above line output must be same.

    printf("The address of j is %d\n",&j); 

    printf("The value of j is %d\n",j);   // this line output will be same a6= the address of i .

    

    return 0;
}   

