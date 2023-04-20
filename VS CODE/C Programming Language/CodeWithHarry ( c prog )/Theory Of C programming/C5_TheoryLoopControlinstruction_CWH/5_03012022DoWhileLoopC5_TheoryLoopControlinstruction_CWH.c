
////////////////            DO-WHILE LOOP             //////////////

/*  Do-While Loop----------- 
the syntax of the do-while loop looks like this-

do{
    //code;
    //code;
} 
while(condition);   //  semicolon(;) is must in this line

*/

////////////////                 //////////////              ////////////////

/* 

while loop      means check the condition then execute the code.
do-while loop   means execute the code then check the condition


/////            do-while loop = while loop which execute at least once          /////

*/

////////              //////////              //////////              ///////////    


#include<stdio.h>
int main()
{ 
    int i=0;
    do 
    {
        printf("The value of i is %d\n",i);
        i++;
    }
    while(i<10);
    
    return 0;
}
