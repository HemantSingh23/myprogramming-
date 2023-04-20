
console.log("12JS") ;


// Clone the Array ==>

let array1 = ["item1" , "item2"] ;

// let array2 = ["item1" , "item2"] ;
// let array2 = array1.slice(0) ; // best performance 
// let array2 = [].concat(array1) ; // here we concate with empty array

//  // Clone using spread operator =>
// let array2 = [...array1] ;

//  //  // clone and concatenate
// let array2 = array1.slice(0).concat(["item3", "item4"]) ; 
// // it will clone and then concatenate 
// let array2 = [...array1 , "item3", "item4"] ;

let oneMoreArray = ["item3", "item4"];

let array2 = [...array1 , ...oneMoreArray] ;


array1.push("item3");

console.log(array1===array2);// false
console.log(array1);
console.log(array2);




//  // if we not put the 3 dots before the array
// then that array will become a element in the new array

console.log("if we do not put the dots")

let array3 = ["value1", "value2", "value3"];
let array4 = ["v1", "v2", "v3"];

let array5 = [...array3 , ...array4] ;
console.log("array5 with  in both");
console.log(array5);
// the element of array3 and array4 are the elements of array5
// means here total element are 3+3==6
// 3 for array3 and 3 for array4


let array6 = [array3 , ...array4] ;
console.log("array6 when no dots in array3");
console.log(array6); // here array3 will be a element of array6
// the elements of array4 are the elements of array6 and
// whole array3 is as a element of array6
// means here total element are 1+3==4
// 1 for whole array3 and 3 for array4


let array7 = [...array3 , array4] ;
console.log("array7 when no dots in array4");
console.log(array7); // here array4 will be a element of array7
// the elements of array3 are the elements of array7 and
// whole array4 is as a element of array7
// means here total element are 3+1==4
// 3 for array3 and 1 for whole array4


let array8 = [array3 , array4] ;
console.log("array8 without dots in both");
console.log(array8);
// here both array3, array4  will be as a element of array8
// means whole array3 is as a element of array8 and
// whole array4 is as a element of array8
// means here total element are 1+1==2
// 1 for whole array3 and 1 for whole array4










































