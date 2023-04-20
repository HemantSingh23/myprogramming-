
////////////////////////////////                   Area of The Square                   //////////////////////////////////////////////


/*   Use the library Function to calculate the area of a square with side a .   

THIS PROGRAM IS FOR INTEGER VALUE .   */



#include<stdio.h>
#include<math.h>

int main()
{
    int side;
    printf("Enter the value of side\n"); //THIS PROGRAM IS FOR INTEGER VALUE . 
    scanf("%d",&side);                   //THIS PROGRAM IS FOR INTEGER VALUE . 

    printf("The value of the area is %f\n",pow(side,2)); 
    /*pow return the double that's why we are using the %f here instead of %d. If we use %d the output will be Zero for
    all the integer value of side  */


    return 0;
}

