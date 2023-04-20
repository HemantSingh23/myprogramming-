

///////////////////////////////////////////////                    STORING TIME AND COMPARISON                   ////////////////////////////////////////////////////////

/* Solve previous problem  for Time using typedef keyword. */

/* Means Write a structure capable of storing Time . Write a function to compare those dates. */


// #include<stdio.h>

// typedef struct Date
// {
//     int day;
//     int month;
//     int year;
    
// }date;

// void display( date d)
// {
//     printf("The Date is : %d/%d/%d\n",  d.day, d.month , d.year);
// }

// int datecmp (date d1, date d2)
// {

// // For Year  comparison 
//     if ( d1.year > d2.year )
//     {
//         printf("Because Both the years are different and year of d1 is greater than year of d2 that' why\n");
//         return 1;
//     }

//     if ( d1.year < d2.year )
//     {
//         printf("Because Both the years are different and year of d1 is less than year of d2 that' why\n");
//         return -1;
//     }

// // For Month comparison

//     if ( d1.month > d2.month )
//     {
//         printf("Because Both the years are same and months are different and also month of d1 is greater than month of d2 that' why\n");
//         return 1;
//     }

//     if ( d1.month < d2.month )
//     {
//         printf("Because Both the years are same and months are different and also month of d1 is less than month of d2 that' why\n");
//         return -1;
//     }

// // For Day comparison

//     if ( d1.day > d2.day )
//     {
//         printf("Because the Both the years and months are different and also day of d1 is greater than day of d2 that' why\n");
//         return 1;
//     }

//     if ( d1.day < d2.day )
//     {
//         printf("Because the Both the years and months are different and also day of d1 is less than day of d2 that' why\n");
//         return -1;
//     }



//     printf("Because in both the Dates , Day , Month and Year all are same so ");

//     return 0;   // if both the dates will be sane
// }

// int main()
// {
//     date d1 = { 5, 10 ,22 };
//     date d2 = { 6, 9 , 23 };


//     display(d1);
//     display(d2);

//     int a = datecmp(d1 , d2);

//     printf("Date Comparison Function Returns : %d\n", a);

//     return 0;
// }








#include<stdio.h>

typedef struct timecomparison
{
    int hours;
    int minutes;
    int seconds;
}Time;

void display( Time t1 , Time t2)
{
    printf("Time t1 is = %d:%d:%d\n", t1.hours, t1.minutes, t1.seconds);
    printf("Time t1 is = %d:%d:%d\n", t2.hours, t2.minutes, t2.seconds);

}

int cmptime (Time t1 , Time t2)
{
// For hours  comparison 
    if ( t1.hours > t2.hours)
    {
        printf("Because in both the Time , hours are different and hours of t1 is greater than hours of t2 that' why\n");
        return 1;
    }

    if ( t1.hours < t2.hours )
    {
        printf("Because in both the Time , the hours are different and hours of t1 is less than hours of t2 that' why\n");
        return -1;
    }

// For minutes comparison

    if ( t1.minutes > t2.minutes )
    {
        printf("Because in both the Time , the hours are same and minutes are different and also minutes of t1 is greater than minutes of t2 that' why\n");
        return 1;
    }

    if ( t1.minutes < t2.minutes )
    {
        printf("Because in both the Time , the hours are same and minutes are different and also minutes of t1 is less than minutes of t2 that' why\n");
        return -1;
    }

// For seconds comparison

    if ( t1.seconds > t2.seconds )
    {
        printf("Because in both the Time , the hours and minutes are same and also seconds of t1 is greater than seconds of t2 that' why\n");
        return 1;
    }

    if ( t1.seconds < t2.seconds )
    {
        printf("Because in both the Time , the hours and minutes are same and also seconds of t1 is less than seconds of t2 that' why\n");
        return -1;
    }



    printf("Because in both the Time , hours , minutes and seconds all are same so ");

    return 0;   // if both the dates will be sane
}


int main()
{
    Time t1 = { 6 , 5, 45 };
    Time t2 = { 6 , 5, 45 };

    display( t1, t2 );


    int a = cmptime(t1 , t2);

    printf("Time Comparison Function will Return : %d\n", a);

    return 0;
}