

//////////////////////          HEADER FILES           //////////////////////


/* Header Files in C++
"#include" is used in C++ to import header files in our C++ program. The reason to introduce the "<iostream>" header 
file into our program is that functions like "cout" and "cin" are defined in that header file. There are two types of 
header files:

1. System Header Files
System header files ships with the compiler or come with the compiler. For example, #include <iostream>

2. User-Defined Header Files
The programmer writes User-defined header file  s himself. To include your header file in the program, you first need to 
make a header file in the current directory, and then you can add it. 

Ex.  #include "this.h"    or    #include<this.h>
The above header file will produce an error if   this.h   is not present in the current directory(means in the folder)
*/



#include <iostream>
using namespace std;

int main()
{
    cout<<"This is a hello world program";

    return 0;
}
















