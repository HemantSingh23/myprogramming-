

////////////////////////////////              OWN VERSION OF strcpy()          /////////////////////////////////////////


/* Write your own version of strcpy function from <string.h>  */

#include<stdio.h>

void  mystrcpy(char st1[] , char st2[] )
{
    char *ptr = st1;
    int i=0;
    while(*ptr != '\0')
    {
        st2[i] = st1[i];
        ptr++;
        i++;
    }
    st2[i] = '\0' ;

}

int main()
{
    char st1[] = "Hemant_Singh_Rajawat____And____Pushpendra_Singh_Rajawat" ;
    char st2[50] ;

    mystrcpy(st1, st2);

    printf("Now st2 is %s", st2);

    
    return 0;
}

