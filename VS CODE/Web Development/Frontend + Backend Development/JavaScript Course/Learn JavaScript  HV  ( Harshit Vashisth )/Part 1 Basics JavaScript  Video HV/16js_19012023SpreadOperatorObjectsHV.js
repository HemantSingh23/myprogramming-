
console.log("16JS") ;


//  //  //  //  Spread Operator ==>


//  //  Spread Operator in Array ==>

const array1 = [1,2,3];
const array2 = [5,6,7];



// const newArray = [...array1, ...array2];

// const newArray = [...array1, array2];
// // here array2 is as a element of newArray


// const newArray = ["abc"]; // in this 1 element abc
// const newArray = [..."abc"]; // in this 3 element a , b, c 
//  // because here it will be spread


// const newArray = [..."12345"]; // here 5 element 1, 2, 3, 4, 5,
// //   beacsue it will be spread
const newArray = ["12345"]; // here 1 element 12345 not spread

// const newArray = [12345]; // here 1 element 12345 not spread
// const newArray = [...12345]; // give error

console.log(newArray) ;







//  //  Spread Operator in Object ==>



// const obj = {
//     key1 : "value1",
//     key2 : "value2"
// }
// console.log(obj);


const obj = {
    key1 : "value1",
    key2 : "value2",
    key1 : "value45"
}
console.log(obj);
// // here keys are unique so one key can be one time
// in this key1 value will become value45
//



const obj1 = {
    key1 : "valueInobj1",
    key3 : "value3",
    key4 : "value4"
}
// console.log(obj1);

const newObject = {...obj, ...obj1};
console.log(newObject);                                                                                                                                      
// here key1 value of obj will be overwrite by key1 value of obj1

const newObject1 = {..."abc"};
console.log(newObject1);       
// here there will become 3 keys  0 , 1 , 2

const newObject2 = {...["item1","item2"]};
console.log(newObject2);    
// here there will become 2 keys  0 , 2













































