

//////////////////////               SUM AND AVERAGE OF TWO NUMBERS                         ////////////////////////////////


/* Write a program using a function that calculates the sum and average of two numbers. Use pointers and print the 
values of sum and average in main(). */


#include<stdio.h>

/*IN THE BELOW FUNCTION DEFITION WE ARE NOT RETURNING ANY VALUE  but hm ye question value return krke bhi solve kr skte hai
value return krkr solve krne pr ye easy ho jayega */

/*This method is more complicated because in this we are not returning any value   */


void SumAvg( float x , float y , float *sum1 , float *Avg1 )
{
    *sum1 = x + y ;
    
    // *Avg1 = ( x + y ) / 2 ; 
    *Avg1 = *sum1 / 2 ;            // BOTH THE STATEMENT  ARE CORRECT
}




int main() 
{
    float a,b,sum,Avg ;

    printf("Enter the value of the two numbers a , b :: ");
    scanf("%f%f",&a,&b);


    SumAvg( a , b , &sum , &Avg ) ;

    printf("The value of the sum and average is %f and %f\n", sum , Avg );

    return 0;
}

