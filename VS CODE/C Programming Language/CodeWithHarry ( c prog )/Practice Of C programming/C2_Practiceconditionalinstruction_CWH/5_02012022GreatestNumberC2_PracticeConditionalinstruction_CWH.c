
//////////////         Find Greatest Of Number        ////////////////

/*Write a program to find the greatest of four number entered by the user */

// #include<stdio.h>
// int main()
// {
// float a,b,c,d;

// printf("Number a\n");
// scanf("%f",&a);

// printf("Number b\n");
// scanf("%f",&b);

// if(a>b)
// {
//     printf("In a,b greatest is number %f\n\n",a);
// }
// else if(a==b)
// {
//     printf("Both Numbers are equal\n\n");
// }
// else
// {
//     printf("In a,b greatest number is %f\n\n",b);
// }

// printf("Number c\n");
// scanf("%f",&c);


// printf("Number d\n");
// scanf("%f",&d);
     

// // if(   ( ((a>b)||(a==b)||(a<b)) >c)       >d)
// // {
// //     printf("the greatest number is %f\n",a);
// // }

// // else
// // {
// //     printf("number is %f\n");
// // }

//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/******************************************************************************************************************************************************************************
******************************************************************************************************************************************************************************/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////          Another Method           ////////////////////////////////

#include<stdio.h>
int main()
{
float a,b,c,d;
printf("Enter Number a,b,c,d\n");
scanf("%f%f%f%f",&a,&b,&c,&d);


if(a>b&&a>c&&a>d)
{
printf("%f",a);
}

else if(b>a&&b>c&&b>d)
{
    printf("%f",b);
}

else if(c>a&&c>b&&c>d)
{
    printf("%f",c);
}

else
{
      printf("%f",d);
}

    return 0;
}