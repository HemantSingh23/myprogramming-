

///////////////////////////////////////////////                    STORING DATE And comparison                   ////////////////////////////////////////////////////////

/* Write a structure capable of storing date. Write a function to compare those dates.  */

#include<stdio.h>

struct date
{
    int day;
    int month;
    int year;
    
};

void display( struct date d)
{
    printf("The Date is : %d/%d/%d\n",  d.day, d.month , d.year);
}

int datecmp (struct date d1, struct date d2)
{

// For Year  comparison 
    if ( d1.year > d2.year )
    {
        printf("Because in both the Dates , the years are different and year of d1 is greater than year of d2 that' why\n");
        return 1;
    }

    if ( d1.year < d2.year )
    {
        printf("Because in both the Dates , the years are different and year of d1 is less than year of d2 that' why\n");
        return -1;
    }

// For Month comparison

    if ( d1.month > d2.month )
    {
        printf("Because in both the Dates , the years are same and months are different and also month of d1 is greater than month of d2 that' why\n");
        return 1;
    }

    if ( d1.month < d2.month )
    {
        printf("Because in both the Dates , the years are same and months are different and also month of d1 is less than month of d2 that' why\n");
        return -1;
    }

// For Day comparison

    if ( d1.day > d2.day )
    {
        printf("Because in both the Dates , the years and months are same and also day of d1 is greater than day of d2 that' why\n");
        return 1;
    }

    if ( d1.day < d2.day )
    {
        printf("Because in both the Dates , the years and months are same and also day of d1 is less than day of d2 that' why\n");
        return -1;
    }

    printf("Because in both the Dates , Day , Month and Year all are same so ");

    return 0;   // if both the dates will be sane
}

int main()
{
    struct date d1 = { 5, 10 ,22 };
    struct date d2 = { 6, 9 , 23 };


    display(d1);
    display(d2);

    int a = datecmp(d1 , d2);

    printf("Date Comparison Function will Return : %d\n", a);

    return 0;
}