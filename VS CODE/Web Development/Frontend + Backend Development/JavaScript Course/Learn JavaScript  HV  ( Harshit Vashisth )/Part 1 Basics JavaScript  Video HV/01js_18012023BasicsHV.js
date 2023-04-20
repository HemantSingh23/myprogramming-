

// "use strict"    // please see below in the variable

// Javascript use camelCase 

// console.log("Hello world"); // using double quotes
// console.log('Hello world'); // using single quotes
// console.log(`Hello world`); // using backtick 




//  // comments using // or    /*  */

//   where // is called single line comments
//   and  /*  */  is called single line comments




//  // variables ==>
// these can store the some information and we can use 
// them later or change some information
// variables are case sensitive

// rules for naming the variable =>
//
// 1. we can't start with numbers
// 2. we can use underscore(_) or Dollar symbol($)
// 3. we can't use spaces(  )
//

// convention =
// in js ,  variables name start with small letters
// and Javascript use camelCase 


var value = 10;
console.log(value) ;
console.log(value + 10 ) ;
console.log(value * 10 ) ; // multiply
console.log(value ** 2 ) ;  // give power of a variable here it print 10^2 == 100


// declare the varibale

var firstName = "Hemant"; // here variable store the string 
firstName = "Hemant"; // we can also declare variable in JS
// without var and let 


// use a variable
console.log(firstName) ;

// change or modify the value of variable
firstName = "Ashish" ;
// var firstName = "Ashish" ; // both are same

// again use a variable after change value of variable
console.log(firstName) ;



// because we can declare the variable without var and let
// in javascript and if we need to modify the value then 
// if we by mistake we write wrong name then new variable
// will be created which can be a big problem
// this all happens because of Javascript gives us freedom
// to declare a variable without var and let
// so it is not happend so we use   " use strict"    
//
// please uncomment the  "use strict" first line of code
// then again run the program      
// if we use "use strict" then it give gives
//


// declare a variable
var firstName1 = "123Hemant";
console.log(firstName1) ;

// modify
firstName1 = "456";
console.log(firstName1) ;

// modify but by mistake created a new variable 
// when "use strict" is not used
firstname1 = "786";

console.log(firstName1) ; // it also print 456 because
// above we write wrong variable name

console.log(firstname1) ; // now it print 786



//  // let keyword ==>


let firstName2 = "Pushpendra" ;
console.log(firstName2) ;
// here let keyword is same as var keyword

// declare variable
var firstName3 = "Piyush";

// modify variable
//  firstName3 ="Pankaj";
var firstName3 ="Pankaj";

console.log(firstName3) ; // print pankaj

// but in case of let keyword it can't modify using
// writing let keyword again it gives error

// declare variable
let firstName4 = "manish";

// modify variable
// let firstName4 = "angshu";  // gives error
firstName4 = "angshu";

console.log(firstName4) ; // print angshu






//  // declare constant ==>
// we can say those type of variable for which we want
// no one can modify its value after declaration 
// so we use const keyword
//
// it is called , we declare a constant not variable using constant

const pi = 3.14;
console.log(pi);
console.log(pi*2*2); //  print 12.56
console.log(pi**3);  // print cube of pi which is  30.959144000000002
// in the above value of pi is not change we just do 
// operation with pi 











