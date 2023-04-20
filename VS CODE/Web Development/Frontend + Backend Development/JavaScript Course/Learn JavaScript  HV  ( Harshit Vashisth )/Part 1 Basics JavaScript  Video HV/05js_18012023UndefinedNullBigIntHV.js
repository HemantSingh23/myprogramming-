
console.log("5JS") ;


//  // undefined ==>

let firstName ;
console.log(typeof firstName); // print undefined

firstName = "Hemant" ;
console.log(typeof firstName); // print string

console.log(typeof firstName, firstName); // print string Hemant





//  // Null ==>

let myVariable = null ;
console.log(myVariable) ;

myVariable = "Hemant";
console.log(myVariable , typeof myVariable) ;

console.log(typeof null);  // print object
// it is a bug or error in javascript but it a null
// but they did't change it because many people 
// write the code using null as object and now if they 
// change it then all the code will be wasted




//  // BigInt==>
//
// use two types
//
// BigInt(12)  or   12n  here n is for BigInt



let myNumber = 123 ;
console.log(myNumber);

// Without BigInt =>
console.log(Number.MAX_SAFE_INTEGER) ;
console.log(Number.MIN_SAFE_INTEGER) ;

// With BigInt =>

let myNumber1 = BigInt(122352353661917382736873272971979) ;
console.log(myNumber1);


let myNumber2 = BigInt(12);
console.log(myNumber2); // print 12n

let myNumber3 = 12n; // print 12n
console.log(myNumber3);

console.log(myNumber2 + myNumber3) // print 24n
// console.log(myNumber + myNumber3) // cam't do this
// because one is normal number and other is BigInt
//





















