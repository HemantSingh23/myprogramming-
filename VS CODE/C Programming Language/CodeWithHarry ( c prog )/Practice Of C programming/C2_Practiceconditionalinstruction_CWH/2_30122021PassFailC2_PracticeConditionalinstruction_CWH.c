
///////      Question = Program To Find Pass or Fail        ///////

/* Write a program to find whether a student is pass or fail if it requires total 40%
and at least 33% in each subject is pass.Assume 3 subject and take marks as an input
from the user */

#include<stdio.h>
int main()
{

int physics, chemistry, maths ;
float total;

printf("Enter marks in physics\n");
scanf("%d",&physics);

printf("Enter marks in chemistry\n");
scanf("%d",&chemistry);

printf("Enter marks in maths\n");
scanf("%d",&maths);

total = (physics+chemistry+maths)/3;/* This is the total percentage of the
subjects and we assume that each subject is of 100  marks so total marks of the subjects
 is 300. */

if((total<40) || physics<33 || chemistry<33 || maths<33)
{
    printf("You percentage is %f and you are fail\n",total);
}

else 
{
    printf("You percentage is %f and you are pass\n",total);

}
return 0;
}



