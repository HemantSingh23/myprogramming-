


#include<bits/stdc++.h>

using namespace std ;

int main ()
{
    string str = "Hello" ;
    cout << str << endl ; 
    // string str2 ;
    // cin >> str2 ;
    // cout << str2 << endl ;

    // string result = str + str2 ;
    // cout << result << endl ; 

    // if ( str == str2 )
    // {
    //  cout << "Equal" << endl ;
    // }
    // else 
    // {
    //  cout << "Not Equal" << endl ;
    // }



    // cout << str[0] << endl ;

    // str[0] = 'w' ;
    // cout << str << endl ;

    // cout << str.size() << endl ;

    // for ( int i = 0 ; i < str.size() ; ++i )
    // {
    //  cout << str[i] << endl ;
    // }


    // string str3 , str4 ;
    // cin >> str3 >> str4 ;
    // cout << str3 << " " << str4 << endl ;


// To take the input of two sting in one line -

    // 1st way
    // string stra , strb ;
    // cin >> stra >> strb ;
    // string strc = stra + " " + strb ;
    // cout << strc << endl ;  

    // 2nd way
    string stra , strb ;
    getline( cin , stra ); // getline() takes the entire line as an input
    getline( cin , strb );
    cout << stra << endl ;
    cout << strb << endl ;

// cin.ignore() ;   // ignore() it shift the cursor in the new line 

// Question  print the reverse string

    // string strx ;
    // cin >> strx ;
    // cout << strx << endl ;

    // string reverse_str ;

    // for ( int i = str.size() - 1 ; i >= 0 ; i-- )
    // {
    //     // reverse_str  += strx[i] ;
    //     // The above method is not good because first thing we add the characters( str[i] ) 
    //     // in the string means in reverse string which is not good at all
    //     // 2nd thing it also increase the time complexity

    //     reverse_str.push_back( strx[i] ) ;
    // }

    // cout << reverse_str << endl ;

    // if ( strx == reverse_str )
    // {
    //     cout << "Palindrome" ;
    // }

    // else 
    // {
    //     cout << "Not Palindrome" ;
    // }






// int n = 1e100;       //means 100 zeros after 1   means value of n is in the range of 100
// int n = 1e260;       //means 260 zeros after 1   means value of n is in the range of 260
// int n = 1e650;       //means 650 zeros after 1   means value of n is in the range of 650
// int n = 1e90;        //means 90 zeros after 1    means value of n is in the range of 90
// int n = 1e335;       //means 335 zeros after 1   means value of n is in the range of 335 

// if we need to take the number in rang of 1e100 means 100 zeros after 1
// then we take it as a string then convert it in the int
    string s ;
    cin >> s ;
    // s = "12237631731649798327927347874923684632689329846823746294729872434789783286791379238432083797835734758326497828647846284582645826473424867" ;
    int last_digit = s[s.size() - 1] - '0' ;
    // [s.size() - 1] is  the index of the last character then because we want int so
    // we first substract the character 0(zero) to it and then store it in the int
    // so that it automaticall convert in the int by substracting the ASCII value of both
    // 
    cout << last_digit << endl;




}