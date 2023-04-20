
/////////////////////////            OUTPUT OF THE LINE                           ////////////////////////////////



/*      What will the following line produce in a C program :       a = 0;     printf("%d %d %d\n", a, ++a, a++);                */

/*Answer : is tarah ke questions ke liye compiler ka behaiviour(arguments pass hone ka) pta hona chahiye kyuki ye questions arguments
 kaise pass hote hai is pr depend krta hai .    */


#include<stdio.h>

int main()
{
    int a = 0 ;

    printf("%d %d %d\n", a, ++a, a++);    // we want the outpur of this line

    /* yha pr argument left to right pass nhi ho rhe hai , actual me yha pr argument right to left pass ho rhe hai kyuki arguments 
    kis tarah se paas ho rge ye  BHUT JYADA DEPEND KRTA HAI COMPILER PR aur GCC ME ARGUMENTS RIGHT TO LEFT PASS HOTE HAI aur printf ko 
    jb arguments pass hote hai to wo right to left pass hote hai isliye yha pr sbse 
    phle a++ me jayega aur a++ ka mtlb hota hai ki phle print kr di phir increment kr do to is according 0 print ho jayega kyuki
    initila value a ki 0 hai uske baad ++a joki ab phle increment hoga usek baad print hoga is accordin  a ki value 0 se 2 ho jayegi
    aur ab a me jayega lekib ++a me jane ke baad a ki value 2 ho  chuki hai isliye yha pr a ki value 2 hi print ho jayegi aur phir 
    printf isko usi order me return kr dega jis order me aaya tha.*/
 
    return 0 ;
    
}