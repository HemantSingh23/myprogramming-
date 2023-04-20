
console.log("14JS") ;  


//  //  //   Array Destructuring ==>

const myArray = ["value1", "value2", "value3", "value4"] ;


//  //  Without Array Destructuring ==>
// let myvar1 = myArray[0];
// let myvar2 = myArray[1];
// console.log("value of myvar1 " , myvar1) ;  
// console.log("value of myvar2 " , myvar2) ;  


//  //  With Array Destructuring ==>
let [myvar1 , myvar2] = myArray ;
console.log("value of myvar1 " , myvar1) ;  
console.log("value of myvar2 " , myvar2) ; 
myvar1 = "value changed" ;
console.log("value of myvar1 " , myvar1) ;  




console.log("In the myArray1 -> ")

const myArray1 = ["value1"] ;

let [myvar3 , myvar4, myvar5] = myArray1 ;
console.log("value of myvar3 " , myvar3) ;  
console.log("value of myvar4 " , myvar4) ; 
console.log("value of myvar5 " , myvar5) ; 
myvar4 = "value changed" ;
console.log("value of myvar1 " , myvar4) ;  




console.log("In the myArray2 -> ")

const myArray2 = ["value1", "value2", "value3", "value4", "value5", "value6"] ;

let [myvar6 , , myvar8] = myArray2 ; 
//  //  // here value 2 will be skipped
console.log("value of myvar6 " , myvar6) ;  
console.log("value of myvar8 " , myvar8) ; 




let myNewArray = myArray2.slice(3);
console.log(myNewArray);
//  // it will amke a array from index 2 to last element

// but same we can do this from the above method

let [var1 , , var2, ...mynewArray1 ] = myArray2 ; 
console.log(mynewArray1) ;































