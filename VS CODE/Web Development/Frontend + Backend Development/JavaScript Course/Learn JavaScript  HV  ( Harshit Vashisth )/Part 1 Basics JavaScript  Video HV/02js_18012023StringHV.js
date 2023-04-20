

console.log("02JS");


let firstName = "Hemant" ;

//    H   e   m   a   n   t
//    0   1   2   3   4   5

console.log(firstName[0]); // print H


//  // lenght of string  ==>

console.log(firstName.length); // print 6
console.log(firstName.length); // print 6



//  //  operation with strings ==>


let firstName1 = "     Hemant     "
// console.log(firstName1); // print 16
// console.log(firstName1.length); // print 16

// trim() =>
// firstName1.trim() ; // it will remove white spaces but 
// not change the string while it gives new string(Hemant)
// now we store the new string in the previous or
// make a new variable

// let newFirstName1 = firstName1.trim() ;
// newFirstName1 will be Hemant

// console.log(firstName1); //
// console.log(firstName1.length); // print 16

// console.log(newFirstName1); // print Hemant
// console.log(newFirstName1.length); // print 6



// toUpperCase() and toLowerCase() =>
// These also give new string . Don't change the
// original string

console.log(firstName1.toUpperCase()); // 
console.log(firstName1.toLowerCase()); // 


// slice() =>

// take two arguments
// start index and end index
// it print only the character from start index(including)
// up to end index(excluding)

let newString = firstName1.slice(0,8); // print Hem
console.log(newString) ;



























