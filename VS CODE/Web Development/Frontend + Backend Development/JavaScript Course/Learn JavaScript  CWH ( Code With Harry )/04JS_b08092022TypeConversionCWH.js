

// Type conversion 
console.log('Welcome to tut5');




// let myVar; 
// myVar = 34;
// console.log(myVar, (typeof myVar));
let myVar; 
myVar = String(34);  // it will change or typecast in string
console.log(myVar, (typeof myVar));


// let booleanVar = true;
// console.log(booleanVar, (typeof booleanVar));
let booleanVar = String(true);   // it will change or typecast in string
console.log(booleanVar, (typeof booleanVar));


// let date = new Date();
// console.log(date, (typeof date));
let date = String(new Date()); // it will change or typecast in string
console.log(date, (typeof date));



// same below all will be typecast in string

// let arr =  [1,2,3,4,5];
// console.log( arr , arr.length, (typeof arr));
let arr =  String([1,2,3,4,5]);
console.log( arr , arr.length, (typeof arr)); 
// if we typecast the array then length of array will be change


let i = 75;
console.log(i.toString()) // it is also an method to change it in string


// same as string function we can typecast in number function
let stri = Number("3434");
stri = Number("343d4"); // it will not change because here d is occred
stri = Number(false);  // give 0
stri = Number([1,2,3,4,5,6,7,8,9]); // give Nan  means Not a number
console.log(stri, (typeof stri));



// parseFloat and parseInt
let number = parseFloat('34.04234989768');
console.log(number, (typeof number));
console.log(number.toFixed(3), (typeof number));
// .toFixed show how many digits we want to see after decimal point




// // Type coercion
// let mystr = "698";
// let mynum = 34;
// console.log(mystr + mynum); 
// above output will be 69834 because when we add number and string then
// number will change in string and then add to string 

let mystr = Number("698");
let mynum = 34;
console.log(mystr + mynum); // output will be 732
