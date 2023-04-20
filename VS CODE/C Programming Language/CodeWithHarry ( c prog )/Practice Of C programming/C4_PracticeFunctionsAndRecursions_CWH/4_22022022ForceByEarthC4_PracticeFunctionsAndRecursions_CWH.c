
/////////////////////                 FORCE BY EARTH                         ////////////////////////////////

/* Write a function to calculate the force of attraction on a body of mass m exerted by earth. ( g = 9.8 m/S2 )  */

#include<stdio.h>

float ForceByEarth( float m ); // m is mass in kg

int main ()
{
    float M;  // M is the Mass of the body and it is in Kg .
    printf("Enter value of the mass of a body\n");
    scanf("%f",&M);

    printf("The force of attraction on a body of mass m exerted by earth is %f N\n ",ForceByEarth(M) ); // N for Newton

    return 0;
}

float ForceByEarth( float m ) // m is mass in kg
{
    float forceValue;

    forceValue = m * 9.8 ;  /* we are using the formula "F = M * A" and here M is mass and A is acceleration. But here we will
    the formula "F = M * g" because here we are calculating the force of attraction by the "EARTH" that's why here "A" has 
    beacome "g"  which is  " acceleration due to the gravity ". and in the question it's value is already given.
     */

    return forceValue;  
}