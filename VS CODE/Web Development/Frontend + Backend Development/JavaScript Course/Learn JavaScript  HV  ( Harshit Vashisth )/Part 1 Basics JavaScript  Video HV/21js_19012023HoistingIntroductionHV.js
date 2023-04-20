
console.log("21JS") ;



//  // Hoisting  ==>
// here we can also call a function before function declaration 
// but we can't call a function when function expression


Hello(); // we can call before  function declaration 
function Hello()
{
    console.log("Hello World") ;
}
Hello() ;


// Hi(); // give error because it is function expression
const Hi = function ()
{
    console.log("Hi, Hemant") ;
}
Hi() ;   


/////////////////////////////


//  // when we use     var   datatype ==>

console.log(hello1); // print undefined because we access before its definition
var hello1 = "hello 1 world" ;
console.log(hello1); // print  hello world


//  // when we use     let or const   datatype ==>


// console.log(hello2); // error because we access before its definition
let hello2 = "hello 2 world" ;
console.log(hello2); // print  hello world



// console.log(hello3); // error because we access before its definition
const hello3 = "hello 3 world" ;
console.log(hello3); // print  hello world



































