

console.log("48js ");



// // synchronous programming vs asynchronous programming  ==>
 

// javascript is a synchronous programming  language which has single thread


// // synchronous programming  ==> 
//
// here any code part can block the further part of code
// like below for loop block the execution of "script end"


// console.log("script start") ;
// for(let i =0; i< 1000; i++)
// {
//     console.log("inside for loop") ;
// }
// console.log("script end") ;


// // // output ==>

// script start
// inside for loop  (1000 times)
// script end



//
//
// when we execute the code then first "script start" will be printed
// then for loop will be run and "inside for loop" will be print then
// "script end" will be print so here in a sequence manner code will be run
//
// that's why it is called synchronous programming and here for loop
// is called as block code because untill for loop will not execute
// "script end" will not print that's why for loop is called block code
//
//






// // //  asynchronous programming  ==> 
//
// before understanding it we will learn setTimeout() function
//


// // // // // //  setTimeout() ===>  
//
// take two arguments =>
// one is function and 2nd is time (after how much time it will execute)
//
// it also return an id
//

// // // // 1st way ===>

// console.log("script start") ;
// function hello()
// {
//     console.log("inside setTimeout()") ;
// }
// setTimeout(hello, 1000) ; // here 1000 is 1000 milliseconds means 1 seconds
// console.log("script end") ;



// // // // 2nd way ===>

// console.log("script start") ;
// setTimeout(()=>{
//     console.log("inside setTimeout()") ;
// }, 1000) ; // here 1000 is 1000 milliseconds means 1 seconds
// console.log("script end") ;


// // // output ==>

// script start
// script end
// inside setTimeout()   (it will print after 1 seconds or 1000 milliseconds)


// here first "script start" will be print then when setTimeout() will come
// then javascript give setTimeout() to browser because setTimeout() is 
// provided by browser,  and after giving javascript said to browser that
// after 1000 milliseconds give me(javascript) the callback() function of
// setTimeout() untill javascript will execute next part after setTimeout()
// and when 1000 milliseconds will be completed then browser provide the
// callback() function (which is the arrow function of setTimeout() ) to
// the javascript and then eventloop chech if callStack(where all execution 
// is done) is empty means if javascript is already not executing other 
// things then then eventloop give permission to javascript to execute
//  callback() fucntion (which is the arrow function of setTimeout() in which
// "inside setTimeout()" is written )





// console.log("script start") ;
// setTimeout(()=>{
//     console.log("inside setTimeout()") ;
// }, 0) ; 

// for(let i =0; i< 100; i++)
// {
//     console.log("inside for loop") ;
// }
// console.log("script end") ;

// here first "script start" will be print then javascript give setTimeout()
// to browser  and after giving javascript said to browser that
// after 0 milliseconds give me(javascript) the callback() function of
// setTimeout() untill javascript will execute next part after setTimeout()
// which is for loop and "script end" and when javascript is executing the
// for loop and "script end" then at that time browser provide the callback()
// function because 0 milliseconds has been already done but eventloop
// prevent the execution of callback() function provided by browser because
// in callstack for loop and "script end" will have been present
// so untill  for loop and "script end"  will not execute completely
// javascript can't execute the callback() function
// that't why inside setTimeout() will print at the last after "script end"


// // // output ==>

// script start
// inside for loop  (100 times)
// script end
// inside setTimeout()   (it will print after 1 seconds or 1000 milliseconds)



//
// here setTimeout() is not a blocking code because it is not preventing
// the execution of the code after setTimeout()
//
// it is an example of asynchronous programming 
// it is an example of asynchronous programming 
// it is an example of asynchronous programming 
//
//



// // // //  setTimeout() also return an id    ====>


// console.log("script start") ;
// const id = setTimeout(()=>{
//     console.log("inside setTimeout()") ;
// }, 1000) ; 

// for(let i =0; i< 100; i++)
// {
//     console.log("inside for loop") ;
// }
// console.log("setTimeout() id is ", id) ;
// console.log("script end") ;


// // // output ==>

// script start
// inside for loop  (100 times)
// setTimeout() id is 2
// script end
// inside setTimeout()   (it will print after 1 seconds or 1000 milliseconds)




// // // // // // // what is importance of id return by setTimeout()  ==>
//
// if we want that setTimeout will not execute then we use id 
// see below 
//

console.log("script start") ;
const id = setTimeout(()=>{
    console.log("inside setTimeout()") ;
}, 1000) ; 

for(let i =0; i< 100; i++)
{
    console.log("inside for loop") ;
}
console.log("setTimeout() id is ", id) ;
console.log("Clearing Timeout  ", ) ;
clearTimeout(id) ;
console.log("script end") ;



// // // output ==>

// script start
// inside for loop  (100 times)
// setTimeout() id is 2
// Clearing Timeout  
// script end






























