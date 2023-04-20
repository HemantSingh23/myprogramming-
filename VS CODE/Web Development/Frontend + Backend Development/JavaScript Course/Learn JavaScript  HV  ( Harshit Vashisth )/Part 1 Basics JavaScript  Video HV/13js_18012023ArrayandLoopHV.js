
console.log("12JS");


//  // for loop in array ==>

let fruits = ["apple", "mango", "graps", "banana"];
let fruits1 = [] ;
for(let i =0; i<fruits.length; i++)
{
    console.log(fruits[i]);
    fruits1.push(fruits[i].toUpperCase());
}

console.log(fruits1);





//  //  //   Array using Const ==>

const fruits2 = ["apple", "mango"];

fruits2.push("banana");
console.log(fruits2);
// here we are not assigning the new value but we push
// the new value because when we push the new value
// where previous value address is saved so address
// is not change when we push then that value address
// also saved
//
// const fruits2 = ["graps", "orange"]; // can't be 
// done because address will be changed
//



//  //  //  for of loop in Array ==>

console.log("for of loop") ;
const fruits3 = ["apple", "mango", "grapes", "banana"];
const fruits4 = [] ;
for(let fruit of fruits3)
{
    console.log(fruit);
    fruits4.push(fruit);
}
console.log(fruits4);





//  //  //  for in loop in Array ==>
// it give index 

console.log("for in loop") ;
const fruits5 = ["apple", "mango", "grapes", "banana"];
const fruits6 = [] ;
for(let index in fruits5)
{
    console.log(index);
    console.log(fruits5[index]);
    fruits6.push(fruits5[index]);
}
console.log(fruits6);





























