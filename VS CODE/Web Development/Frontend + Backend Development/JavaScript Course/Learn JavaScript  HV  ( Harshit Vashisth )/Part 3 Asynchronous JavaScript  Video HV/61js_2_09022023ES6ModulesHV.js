

// // // // 1st way  ==>

// import {firstName} from  './61js_3_09022023ES6ModulesHV/61js_3_1_09022023ES6ModulesHV.js'  ;
// import {age} from  './61js_3_09022023ES6ModulesHV/61js_3_2_09022023ES6ModulesHV.js'  ;

// console.log(firstName , age );  // print Hemant 22



// // // // 2nd way ==>

// //  if we do not  export default the we need to use curly braces
import {firstName as fName} from  './61js_3_09022023ES6ModulesHV/61js_3_1_09022023ES6ModulesHV.js'  ;
import {age } from  './61js_3_09022023ES6ModulesHV/61js_3_2_09022023ES6ModulesHV.js'  ;


import {Person,Person1}   from './61js_3_09022023ES6ModulesHV/61js_3_3_09022023ES6ModulesHV.js';

// //  if we do export default the we don't need to use curly braces
// // and we can use any name 

// import p , {Person1}  from './61js_3_09022023ES6ModulesHV/61js_3_3_09022023ES6ModulesHV.js';

console.log(fName , age );



// // // when we don't use export default
const person = new Person("John", "Doe", 22) ;

// // // when we use export default
// const person = new p("John", "Doe", 22) ;



console.log(person) ; // print the whole Person which we import
person.info(); // print John Doe 22




const person1 = new Person1("John", "Doe", 22) ;
console.log(person1) ; // print the whole Person which we import
person1.info(); // print John Doe 22









































































