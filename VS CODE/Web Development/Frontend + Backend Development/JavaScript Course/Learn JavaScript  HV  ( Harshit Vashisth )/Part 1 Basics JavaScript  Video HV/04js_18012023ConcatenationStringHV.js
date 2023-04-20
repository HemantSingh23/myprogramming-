

console.log("4JS");



//  // String Concatenation ==>

let string1 = "hemant";
let string2 = "Singh";

let fullName = string1 + " " + string2 ;
console.log(fullName);

let string3 = "17";
let string4 = "10";

let newString34 = string3 + string4 ;
console.log(newString34);  // print 1710

let newString341 = +string3   +    +string4 ;
// here +string3 and +string4 are number which is 17 and 10
console.log(newString341); // pritn 27 because 17+10 == 27





//  // template string ==>

let age = 22;
let myName = "Hemant Singh" ;

//  // Without  template string
// let aboutMe = "My name is " + myName + " and my age is " + age ;
// console.log(typeof aboutMe); // print string
// console.log(aboutMe);


//  // With  template string
let aboutMe = `My name is ${myName} and my age is ${age}` ;
// we use dollor and placeholder
console.log(typeof aboutMe); // print string
console.log(aboutMe);












