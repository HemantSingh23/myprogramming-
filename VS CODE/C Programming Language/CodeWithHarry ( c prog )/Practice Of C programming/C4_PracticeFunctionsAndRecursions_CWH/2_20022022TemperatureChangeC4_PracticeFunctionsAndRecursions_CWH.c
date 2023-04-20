
/////////////////////                  CELCIUS TEMPERATURE INTO FAHRENHEIT                         ////////////////////////////////

// °F = °C × (9/5) + 32
//  °C = (°F - 32)* 5/9
//


#include<stdio.h>

float fahrenheit (float c);

int main()
{
    float a;
    printf("Enter the  value of celcius temperature:\n ");
    scanf("%f",&a);

    printf("Tha value of the fahrenheit temperature is %f\n", fahrenheit(a) );

    return 0;
}

float fahrenheit (float c)
{
    float value ;

    value  = (c * 9/5) + 32 ;

    return value ;

}