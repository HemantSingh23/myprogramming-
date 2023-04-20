 
 /* we can also write the function inside the function.
 And in this program function are called by the another function.
 
 
 like in this program  
 main called the googMorning directly then goodMorning called the goodAfternoon and then 
 googAfternoon called the goodNight   */

 #include<stdio.h>

void goodMorning();
void goodAfternoon();
void goodNight();

int main ()
{
    goodMorning();
    
    return 0;
}

void goodMorning()
{
    printf("Good Morning\n");

    goodAfternoon();
}

void goodAfternoon()
{
    printf("Good Afternoon\n");

    goodNight();
}

void goodNight()
{
    printf("Good Night\n");
}
