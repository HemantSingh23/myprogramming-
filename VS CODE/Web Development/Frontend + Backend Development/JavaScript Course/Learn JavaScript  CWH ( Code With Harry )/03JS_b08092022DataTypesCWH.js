 



 // Primitive data types

// String
let name = "Hemant";
console.log("My string is " + name);
console.log("Data type of name is  " + (typeof name));

// Numbers
let marks = 34.4;
let number = '34.4';
console.log( marks);
console.log( number);
console.log("Data type of marks is " + (typeof marks));
console.log("Data type of number is " + (typeof number));

// Boolean
let isDriver = true;
console.log( isDriver);
console.log("Data type is " + (typeof isDriver));

// Null
let nullVar = null;
console.log( nullVar);
console.log("Data type is " + (typeof nullVar));

// Undefined
let undef = undefined;
console.log( undef);
console.log("Data type is " + (typeof undef));




// Reference Data Types

// Arrays
let myarr = [1, 2, 3, 4, false, "string"];
// let myarr = [1, 2, 3, 4] // both myarr are object datatype
console.log( myarr);
console.log("Data type is " + (typeof myarr));



// Object Literals
let stMarks = {
    harry: 89,
    Shubham: 36,

    // RohanDas: 34  // correcr
    // Rohan Das: 34 // wrong because we can give space in between Rohan and Das if we want to give space then use below
    'RohanDas': 34  // RohanDas: 34 //  both  are same
}
console.log( stMarks );
console.log( typeof stMarks);






function findName() {  
}
console.log( findName );
console.log( typeof findName);



let date = new Date();
console.log( date );
console.log( typeof date);

