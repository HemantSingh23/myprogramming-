

// //  Stacks and Queue   // //  Stacks and Queue   // //  Stacks and Queue
// //  Stacks and Queue   // //  Stacks and Queue   // //  Stacks and Queue
// //  Stacks and Queue   // //  Stacks and Queue   // //  Stacks and Queue
// //  Stacks and Queue   // //  Stacks and Queue   // //  Stacks and Queue



// //  Stacks ==> Also called LIFO (Last In First Out)
//
// we can access two things from the stack 
// first is top element of stack and second is size of stack
//
// Some operation on stack ==>
//
//  1. Push = It will insert the element in the top of the stack
//  2. Pop = It will remove the top element of the stack
//  3. We can only see the top element


// #include<bits/stdc++.h>
// using namespace std;
  
// int main()
// {
//     stack<int> s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     s.push(5);

//     // // empty() return boolean 
//     // // means if stack is empty then return "True" ;
//     // // else if stack is not empty then return "False" ;

//     while(! s.empty())
//     {
//         cout<<s.top()<<endl;
//         s.pop() ;
//     }
// }





// //  Queue ==> Also called FIFO (First In First Out)
//
// Queue is like a cinema hall line 
//
// Some operation on Queue ==>
//
//  1. Push = It will insert the element in the end of the queue
//  2. Pop = It will remove the front element of the queue
//  3. We can only see the front element



#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;
    q.push("abc");
    q.push("bcd");
    q.push("cde");
    q.push("def");
    q.push("efg");

    // // empty() return boolean 
    // // means if queue is empty then return "True" ;
    // // else if queue is not empty then return "False" ;

    while(! q.empty())
    {
        cout<<q.front()<<endl;
        q.pop() ;
    }
}
















