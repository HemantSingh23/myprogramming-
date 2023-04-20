

////////////////////////////////            TAKE NAME AND SALARY OF TWO EMPLOYEES          /////////////////////////////////////////

/* Take name and salary of two employees as input from the user and write them to a text file in the following format:
    name1, 3300
    name2, 7700
*/

// Plese see the  final output in the 4_employee.txt file which will be generated
#include<stdio.h>

int main()
{
    FILE *ptr;

    char n1[50] , n2[50];
    int s1, s2;

    printf("Enter the name and salary of emoloyees 1 \n");
    scanf("%s %d", n1 , &s1);

    printf("The name and salary of emoloyees 1 is %s and %d\n", n1, s1);


    printf("Enter the name and salary of emoloyees 2 \n");
    scanf("%s %d", n2 , &s2);

    printf("The name and salary of emoloyees 2 is %s and %d\n", n2, s2);

    ptr = fopen("4_employee.txt", "w");

    fprintf( ptr , "%s , %d\n", n1 , s1);
    fprintf( ptr , "%s , %d", n2 , s2);

    fclose(ptr);

    return 0;
}

// Plese see the  final output in the 4_employee.txt file which will be generated
