//// Calculate The Income Tax  /////////

/*Claculate income tax paid by an employee to the government as per the slabs
mentioned below -

 income slab                tax

 2.5L - 5.0L                 5%
 5.0L - 10.0L                20%
 ABOVE 10.0L                 30%

 // There is no tax below 2.5L . Take income amount as an input from the user .  */

#include <stdio.h>
int main()
{
    float tax, income;
    printf("Enter your income\n");
    scanf("%f", &income);

    if (income >= 250000 && income <= 500000)
    {
        tax =  0.05 * (income - 250000);
    }


    if (income >500000 && income <= 1000000)
    {
        tax = tax + 0.20 * (income - 500000);
    }


    if (income > 1000000)
    {
        tax = tax + 0.30 * (income - 1000000);
    }


printf("Your net income tax to be paid is %f\n",tax);


    return 0;
}
