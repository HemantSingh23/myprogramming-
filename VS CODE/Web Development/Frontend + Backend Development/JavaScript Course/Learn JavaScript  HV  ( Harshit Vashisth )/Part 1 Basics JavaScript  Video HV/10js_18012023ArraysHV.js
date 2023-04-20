
console.log("10JS");



//  // Arrays == >
// it is a reference type and it is called object in javascript
// ordered collection of items

let fruits = ["apple" , "mango" , "graps"];
console.log(fruits); // print all arrays
console.log(fruits[2]); // print graphs
fruits[2] = "banana";
console.log(fruits[2]); // print banana

let numbers = [1 , 2 , 3 , 4 , 5 , 6];
console.log(numbers[0]);


let mixed = [1 , 2 , 3 , "string" , null , undefined ];
console.log(mixed[4]); // print null
console.log(mixed[5]); // print undefined
console.log(mixed[6]); // no element because array is 
// defined upto mixed[5] so it also print undefined


let obj = {}; // object literal
//

console.log(typeof fruits);
console.log(typeof obj);

// there are many types of object in javascript
// so to recognize array we use following

console.log(Array.isArray(fruits)); // print true
console.log(Array.isArray(obj)); // print false



//  // push and pop ==>

// console.log(fruits); // print all arrays

// fruits.push("orange");
// console.log(fruits); // print all arrays

// fruits.pop(); // it return last element of array (orange)

// // console.log(fruits.pop()); // print banana
// // // it return last element of array, now which is banana
// let popFruit = fruits.pop();
// console.log("popped fruit is  ", popFruit);



console.log(fruits); // print all arrays

//  // unshift ==>

// fruits.unshift("baanan");
// fruits.unshift("myfruit");
// console.log(fruits);



//  // shift ==>

fruits.shift();
console.log(fruits); 

let removeFruit = fruits.shift();
console.log(removeFruit); 
console.log(fruits); 





































