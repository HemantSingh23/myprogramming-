

console.log("3JS") ;


//  // typeof operator ==>
// it tells the type of any operator


// dataTypes in Javascript 
//
// 7 primitive detatypes
//
// string       ex. "hemant"
// number       ex.  2, 3 ,4 5,......
// booleans 
// undefined
// null
// BigInt 
// symbol

let name ;
console.log(typeof name); // print undefined



let age = 22;
let firstName = "Hemant" ;

// console.log(typeof age ); //this and below are same 
console.log(typeof(age)); // print number

console.log(typeof firstName ); // this and below are same 
console.log(typeof(firstName)); // print string


// console.log(typeof(7)); // this and below are same 
console.log(typeof 7 ); // print number
console.log(typeof 8 ); // print number

// console.log(typeof("7")); // this and below are same 
console.log(typeof "7"  ); // print string

console.log(typeof "hemu"  ); // print string






//  // Convert number to string ==>
// we just add the empty string("") to the number

console.log(age + ""); // it print 22 but it is string "22"


console.log(typeof (age + "")); // print string because
// (age + "" )  now become a string

// console.log(typeof age + ""); // print number because here
// typeof takes only age which is a number
// so use brackets


let firstName1 = 50 ; // here firstName is a number
firstName1 = String(firstName1) ; // here firstName is a string
console.log(typeof firstName1); // print string
console.log(firstName1); // print 50 which is a string "50"







//  // Convert string to number  ==>
// just put the (+) sign before the string

let myStr = "34" ;

console.log(typeof(+myStr)) ; // print number
console.log(myStr) ; // print 34 which is a number

let str1 = "hemant";
console.log(typeof(+str1)) ; // print number
console.log(str1) ; // it print hemant which is a number



let age1 = "18"; // here age is a string
age1 = Number(age1) ; // here age is a number
console.log(typeof age1); // print number












