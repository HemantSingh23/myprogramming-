




// // // // // To count the no of bits of any number  ===>
//
//    let number is x then  ->
//
//   int bit_ct = (int)log2(x) + 1 ;
//
//
//   if x is any number then total no of bits in x 
//   will be    int bit_ct = (int)log2(x) + 1 ; 
//  






#include<bits/stdc++.h>
using namespace std;


void printBinary(int num)
{
    for(int i = 10; i>=0 ; i--)
    {
        cout<<((num>>i)&1);
    }
    cout<<endl;
}


int main()
{

//  //To check binary numer is odd or even ==>
    // for this we take AND with 1 and binary number if we get 1 then odd 
    // and if we get all 0's then even
    for(int i =0; i<8; i++)
    {
        printBinary(i);
        if(i&1) cout<<"Odd"<<endl; // if(i&1 != 0)
        else cout<<"Even"<<endl;
    }



//  // Multply and Divide by 2  ==>

    int n = 5;
    cout<<(n>>1)<<endl; // by right shift number is divided by 2
    cout<<(n<<1)<<endl; // by left shift number is multiply by 2





//  // Uppercase to Lowercase and Lowercase to Uppercase  ==>
    //
    //  
    //
    for(char c = 'A'; c<= 'D'; c++)
    {
       cout<<c<<"  ";
       printBinary(int (c));
    }

    for(char c = 'a'; c<= 'd'; c++)
    {
       cout<<c<<"  ";
       printBinary(int (c));
    }
    // Now in the output of both the loop we can clearly see that
    // there is a only one bit difference in lower and upper case alphabet
    // binary number which is the previous bit of MSB(most significant bit)
    // of the upercase alphabet which is not set and in lowercase that
    // is set so only previous bit of MSB is different in 
    // corresponding lower and upper case
    // And that bit is the 5th bit  so we set the 5th bit To change from
    // upercase to lowercase and unset 5th bit for lower to uper case

    // 1st method ==>
    //  upercase to lowercase then set the 5th bit
    char A = 'A' ;
    char a = A | (1<<5)  ; 
    cout<<a<<endl; // print a

    // lowercase to  upercase  then unset the 5th bit
    cout<<char(a &(~(1<<5)))<<endl; // print A


    // 2nd method ==>

    cout<<char(1<<5)<<endl; // print the space

    // // For upercase to lowercase  take OR with the space(' ')
    cout<<char('C'|' ')<<endl; // print c in lower case from upercase

    // // For upercase to lowercase  take AND with the space('_')
    cout<<char('c'&'_')<<endl; // print C in uper case from lower case

 



//  Clear LSB(Least Significant Bit)
    // 
    // means clear LSB till ith bit means make all bit 0 till ith bit 
    // also do this using previous concept means unset with for loop
    // but here we learn better method

    int x = 59;
    printBinary(x); // print  00000111011
    //
    // if want to clear till 4th bit means make all bit 0 till 4th bit
    // means we clear 5 bits because 4th  bit
    //
    int i = 4;
    int y = (x & ( ~( (1<<(i+1)) -1 ) ) ) ;
    printBinary(y);



//  Clear MSB(Most Significant Bit)  ==>

    i =3;
    int z = (x & (( (1<<(i+1)) -1 ) ) ) ;
    printBinary(z);



// Check Power of 2 ==>
    
    int p = 15;
    if(n &(n-1)) cout<<"Not power of 2"<<endl;
    else cout<<"Power of 2"<<endl;

    




}


















