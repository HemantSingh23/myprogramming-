/* Calculate The Area Of The Rectangle = length*breadth = l*b */

#include <stdio.h>
int main()
{
    float l,b;// because we assume that length and breadth can be any real numbers.
    printf("The length of the rectangle is \n");
    scanf("%f", &l);
    printf("The breadth of the rectangle is \n");
    scanf("%f",&b);
    printf("The area of the rectangle is %f", l * b); 
    return 0;

}