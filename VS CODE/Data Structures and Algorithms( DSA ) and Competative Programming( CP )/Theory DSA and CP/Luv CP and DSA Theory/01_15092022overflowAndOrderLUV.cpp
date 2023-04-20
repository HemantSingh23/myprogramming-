



// #include<iostream> // use this #include<bits/stdc++.h> header files it includes all header files

#include<bits/stdc++.h>
using namespace std;

// Order of Datatypes for calculation -
// Double > float > Long Long int > Long int > int > characters

int main() 
{






    // cout << 7/2 << endl;  
    // // output 3 because 7 and 2 both are integer so output is also integer

    // cout << 7/2.0 << endl ;      
    // // output 3.5 because calculation is always in higher datatype
    // // and here 7 integer and 2.0 is float so output is also float

    // cout <<  'c' +1 << endl;
    // // output is 100 because ASCII value of c is 99 

    // int a = 3/2 ; // output 1
    // cout << a << endl ;
    // // here 3/2 will calculate 1 because 3 and 2 both are integer and a is also int so a store 1

    // int b = 3/2.0 ; // output 1
    // cout << b << endl ;
    // //  here 3/2 will calculate 1.5 but b is int so a store 1

    // double a = 3/2 ; // output 1
    // cout << a << endl ;
    // here 3/2 will calculate 1 because 3 and 2 both are integer 
    //and a is double but calculation is 1 which is int so a store 1

    // double b = 3/2.0 ; // output 1
    // cout << b << endl ;
    // here 3/2 will calculate 1.5 because 3 is integer and 2 is float 
    //and b is double and calculation is 1.5 which is double/float so a store 1.5

    // cout << 7 / 2 * 3 << endl ; // output 9
    // calculate by left to right so 7/2 will be 3.5 but here both int so 3
    // then 3 * 3 will be 9

    // cout << 3 * 7 / 2  << endl ;  // output 10
    // here also calculate by left to right so 3*7 will be 21 
    // then 21/2  will be 10.5 but here 10 because both are int



    // OVERFLO

    // int, char, long int, long long int, float, double 

    // -10^9 < int < 10^9
    // -10^12 < long int < 10^12
    // -10^18 < long long int < 10^18

// only int - 
    // int a = 100000;
    // int b = 100000;
    // int c =  a*b ; // it will be overflow due to range of int
    // cout << c << endl ;
    // int mx = INT_MAX; // give max value of int
    // cout << mx << endl ; // max value of int 2147483647

    // cout << mx + 1 << endl ; // overflow the max value of int 2147483647
    // // and print -2147483647 that is min value of int because cycle will be reverse 


// long int -
    // long int a = 100000;
    // long int b = 100000;
    // long int c =  a*b ; 
    // cout << c << endl ; // output is same 1410065408 
    // long int mx = LONG_MAX;
    // cout << mx << endl ;



// long long int - 
    // long long int a = 100000;
    // long long int b = 100000;
    // long long int c =  a*b ; 
    // cout << c << endl ; 

    // second way--

    // int a = 100000;
    // int b = 100000;
    // long long int c =  a * 1LL * b ; 
    // cout << c << endl ;
    // long long int mx = LLONG_MAX;;
    // cout << mx << endl ;


// double 

    // double a = 100000;
    // double b = 100000;
    // double c =  a*b ; 
    // // cout << c << endl ; // output 1e+10 which is in scientific notation
    // // cout << fixed << c << endl ;  // fixed keyword not print in scientific notation
    // // output 10000000000.000000 

    // cout << fixed << setprecision(0) << c << endl ; 
    // // setprecision(0) not print in decimal

    // double d = 1e24;
    // cout << fixed << d << endl ;
    // output should be 24 zeros after 1 but ouput is different
    // because we can store a very big no but not accurately because we don't have unlimited storage 
    




// hacker rank problem medium level question

//     int n;
//     scanf("%d", &n);
//   	// Complete the code to print the pattern.
//     for(int i = 1 ; i<=n ; i++)
//     {
    
//         for(int a=0 ; a<i ; a++)
//         {
//             printf("%d ",n-a);
//         }

//         for(int j = i ; j<=(2*n-i)-1 ;j++ )
//         {
//             printf("%d ",n+1-i);
//         }

//         for(int b=(2*n-i)+1 ; b<=(2*n-1) ; b++)
//         {
//             printf("%d ",b-n+1);
//         }

//             printf("\n"); 
//     }

//     for(int i=n+1 ; i<=(2*n-1) ; i++)
//     {
//         for(int a=0 ; a<(2*n-i)-1 ; a++)
//         {
//             printf("%d ",n-a);

//         }

//         for(int j = 2*n-i ; j<=i ;j++ )
//         {
//             printf("%d ",i-n+1);
//         }

//         for(int b=i+1 ; b<=(2*n-1) ; b++)
//         {
//             printf("%d ",b-n+1);
//         }

//             printf("\n"); 
//     }   
//     return 0;


// int n;
// cin>>n;

//    if( n%2 == 0  )
// 	{
//         cout<<"Even";
//     }

//     else 
// 	{
//         cout<<"odd";
//     }


    // int num;
	// cin >> num;    //Reading input from STDIN
	// cout << "Input number is " << num << endl;	// Writing output to STDOUT

	// if(num%2 == 0  )
	// {

	// 	int x;
    //             int a ;
	// 	// int y;
	// 	for(int y =1 ; y<num; y++)
	// 	{
	// 		 x = num-y;
    //          if(x%2 == 0)
    //          {
    //             a = a + x;
    //          }
		
	// 	// x+y == num;
    //     }

    //     if( a%2 == 0 )
    //     {
    //     cout<<"YES";
    //     }
	// }

	// else
	// {
	// 	cout<<"NO";
	// }





	// int num;
	// cin >> num;    //Reading input from STDIN
	// cout << "Input number is " << num << endl;	// Writing output to STDOUT

	// for(int i =1; i<=num ; i++)
	// 	{
	// 		for(int j =1; j<=2*num ; j++)
	// 		{
	// 			if(j<=i || j>(2*num)-i)
	// 			{
	// 				cout<<"*";
	// 			}

	// 			if(j>i && j<=(2*num)-i)
	// 			{
	// 				cout<<"#";
	// 			}
	// 		}
	// 		cout<<endl;
	// 	}


    


}









