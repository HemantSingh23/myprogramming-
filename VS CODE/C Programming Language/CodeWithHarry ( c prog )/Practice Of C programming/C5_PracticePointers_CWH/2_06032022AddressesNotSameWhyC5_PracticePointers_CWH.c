

//////////////////////                 ADDRESSES SAME ? WHY?                        ////////////////////////////////



/*  Write a program having a variable i. Print the address of i. Pass this variable to a function and print 
its address. Are these addresses same? Why?   */

#include<stdio.h>

void printadd( int a) //  hm Function Prototype ki jagah direct Function definition likh skte hai 
{
    printf("The Address of a is %u\n", &a); // FORMAT SPECIFIER FOR PRINTING POINTER ADDRESS IS %u

}

int main()
{
    int i;
    printf("Enter the value of i\n");
    scanf("%d", &i);

    printf("The value of i is %d\n", i);
    printf("The Address of i is %u\n\n\n", &i); // FORMAT SPECIFIER FOR PRINTING POINTER ADDRESS IS %u

    printadd( i ); 

    printf("\n\nThe value of i is %d\n", i);
    printf("The Address of i is %u\n\n", &i); // FORMAT SPECIFIER FOR PRINTING POINTER ADDRESS IS %u


    return 0;
}
/* Agar i ki value 5 enter ki to uske baad dono statement run honge mtlb i ki value aur address  dono print ho
jayega ukse baad i ki value  ki COPY function  printadd( i );  me jayegi  kyuki copy gyi hai isliye jb value
pass hogi  printadd( i ); function me to vha pr value 5 ka jo address hoga wo i ke address se alag hoga
kyui i ki value 5 address main function ke according hoga aur jo i ki value ki copy pass hogi printadd( i ); 
function me vha me 5  ka address alag hoga joki printadd( i );  funcion ke according hoga.

phir ye hine ke baad mtlb printadd( i );   me value pass hone ke baad iske neeche ke dono statement
execute honge jinme main function ke according hi i ki value aayegi jaise printadd( i );  ke uper ke statement
me aayi thi       */