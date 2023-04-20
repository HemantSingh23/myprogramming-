

//////////////////////                                    DEFAULT ARGUMENTS                              //////////////////////


/* 

Default Arguments in C++ ::
Default arguments are those values which are used by the function if we don’t input our value. It is recommended to 
write default arguments after the other arguments. An example program for default arguments is shown in Code Snippet  

float moneyReceived(int currentMoney, float factor=1.04){
    return currentMoney * factor;
}

int main(){
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< "Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<< " Rs after 1 year";
    return 0;
}



Constant Arguments in C++ ::
Constant arguments are used when you don’t want your values to be changed or modified by the function. An example of 
constant arguments is shown in Code Snippet .


int strlen(const char *p)
{

}



*/




#include<iostream>
using namespace std ;

float moneyReceived(int currentmoney , float factor = 1.04 )
{
    return currentmoney * factor;
}


// int strlen(const char *p)    // Constant Arguments in C++
// {
// } 


int main()
{
    int money = 10000;

    cout<<"If you have "<<money<<"Rs in your bank account , you will receive "<<moneyReceived(money)<<"Rs afetr 1 year"<<endl;

    cout<<"For VIP , If you have "<<money<<"Rs in your bank account , you will receive "<<moneyReceived(money , 1.1)<<"Rs afetr 1 year"<<endl;

    return 0;
}
















