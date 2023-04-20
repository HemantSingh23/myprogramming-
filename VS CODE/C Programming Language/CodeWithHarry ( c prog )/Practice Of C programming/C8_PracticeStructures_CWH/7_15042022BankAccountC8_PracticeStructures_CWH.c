

///////////////////////////////////////////////                    BANK ACCOUNT OF A CUSTOMER                     ////////////////////////////////////////////////////////


/* Create a structure representing a bank account of a customer. What fields did you use and why? */

#include<stdio.h>
#include<string.h>


struct bank_account
{
    int AccountNumber;
    float Identity;
    int MobilelNo;
    char Name[100];
};

int main()
{
    printf("Account Details for Customer 1 \n");

    struct bank_account b_a1 = { 100 , 34.12 , 18923832, "Hemant" };
    
    printf("Account Number is : %d\n", b_a1.AccountNumber);
    printf("Identity is : %f\n", b_a1.Identity);
    printf("Mobile Number is : %d\n", b_a1.MobilelNo);
    printf("Name is : %s\n\n", b_a1.Name);



    printf("Account Details for Customer 2 \n");

    struct bank_account b_a2 = { 101 , 12 , 1723892389, "HemantSingh" };

    printf("Account Number is : %d\n", b_a2.AccountNumber);
    printf("Identity is : %f\n", b_a2.Identity);
    printf("Mobile Number is : %d\n", b_a2.MobilelNo);
    printf("Name is : %s\n\n", b_a2.Name);

    printf("Usingh Arrray Of Stuctures\n\n"); 

    struct bank_account b_a[100];

    b_a[0].AccountNumber = 1000;
    b_a[0].Identity = 507343222;
    b_a[0].MobilelNo = 87212208;
    strcpy (b_a[0].Name , "AdityaSingh");

    b_a[1].AccountNumber = 1001;
    b_a[1].Identity = 9809.34;
    b_a[1].MobilelNo = 34510908;
    strcpy (b_a[1].Name , "ParulSingh");

    b_a[2].AccountNumber = 1002;
    b_a[2].Identity = 83456.8765;
    b_a[2].MobilelNo = 66020983;
    strcpy (b_a[2].Name , "DeepaSingh");

    for (int i = 0; i <3; i++)
    {
        printf("Account Details for Customer %d \n",i+1);
        printf("Account Number is : %d\n", b_a[i].AccountNumber);
        printf("Identity is : %f\n", b_a[i].Identity);
        printf("Mobile Number is : %d\n", b_a[i].MobilelNo);
        printf("Name is : %s\n\n", b_a[i].Name);

    }
    


    return 0;
}