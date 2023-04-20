
////////////////////////             QUIZ OF FUNCTION            //////////////////////// 

/*  Wirte a program with three Function :-

1. Good morning function which prints "Good Morning".
2. Good afternoon function which prints "Good Afternoon".
3. Good night function which prints "Good Night".

main() should call all of these in order 1 - 2 - 3 .


*/

/* In the below program every function is called by the  main function  */

#include<stdio.h>

void goodMorning();
void goodAfternoon();
void goodNight();


int main ()
{
    goodMorning();
    goodAfternoon();
    goodNight();

    return 0;
}

void goodMorning()
{
    printf("Good morning\n");
}


void goodAfternoon()
{
    printf("Good Afternoon\n");
}


void goodNight()
{
    printf("Good Night\n");
}
